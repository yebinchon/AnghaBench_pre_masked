
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_7__ {int size; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int user_size; int got_output; TYPE_4__* pkt; } ;
typedef TYPE_1__ LibWavpackContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (scalar_t__,void*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, void *VAR_2, int32_t VAR_3)
{
    AVCodecContext *VAR_4 = VAR_1;
    LibWavpackContext *VAR_5 = VAR_4->priv_data;
    int VAR_6, VAR_7 = VAR_5->pkt->size;

    if (VAR_5->user_size) {
        if (VAR_5->user_size - VAR_3 < VAR_5->pkt->size) {
            FUNC_1(VAR_4, VAR_0, "Provided packet too small.\n");
            return 0;
        }
        VAR_5->pkt->size += VAR_3;
    } else {
        VAR_6 = FUNC_0(VAR_5->pkt, VAR_3);
        if (VAR_6 < 0) {
            FUNC_1(VAR_4, VAR_0, "Error allocating output packet.\n");
            return 0;
        }
    }

    FUNC_2(VAR_5->pkt->data + VAR_7, VAR_2, VAR_3);

    VAR_5->got_output = 1;

    return 1;
}
