
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__** streams; TYPE_3__* priv_data; } ;
struct TYPE_9__ {int* buf; scalar_t__ max_payload_size; int cur_timestamp; int timestamp; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ extradata_size; } ;
typedef TYPE_3__ RTPMuxContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int const*,int,int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int*,int,int) ;

void FUNC_4(AVFormatContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{




    RTPMuxContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;
    int VAR_5 = 0;
    int VAR_6 = 0;


    if ((VAR_0->streams[0]->codecpar->extradata_size) == 0) {
        VAR_2 -= 7;
        VAR_1 += 7;
    }


    VAR_4 = VAR_2/0xFF + 1;
    FUNC_3(VAR_3->buf, 0xFF, VAR_4 - 1);
    VAR_3->buf[VAR_4 - 1] = VAR_2 % 0xFF;

    VAR_3->timestamp = VAR_3->cur_timestamp;


    while (VAR_2 > 0) {
        VAR_6 = FUNC_0(VAR_2, VAR_3->max_payload_size - (!VAR_5 ? VAR_4 : 0));
        VAR_2 -= VAR_6;
        if (!VAR_5) {
            FUNC_2(VAR_3->buf + VAR_4, VAR_1, VAR_6);
            FUNC_1(VAR_0, VAR_3->buf, VAR_4 + VAR_6, !VAR_2);
        } else {
            FUNC_1(VAR_0, VAR_1 + VAR_5, VAR_6, !VAR_2);
        }
        VAR_5 += VAR_6;
    }
}
