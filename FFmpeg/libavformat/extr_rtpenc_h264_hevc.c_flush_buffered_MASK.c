
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_10__ {TYPE_2__** streams; TYPE_3__* priv_data; } ;
struct TYPE_9__ {scalar_t__ buf_ptr; scalar_t__ buf; int buffered_nals; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {int codec_id; } ;
typedef TYPE_3__ RTPMuxContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_1, int VAR_2)
{
    RTPMuxContext *VAR_3 = VAR_1->priv_data;
    if (VAR_3->buf_ptr != VAR_3->buf) {


        if (VAR_3->buffered_nals == 1) {
            enum AVCodecID VAR_4 = VAR_1->streams[0]->codecpar->codec_id;
            if (VAR_4 == VAR_0)
                FUNC_0(VAR_1, VAR_3->buf + 3, VAR_3->buf_ptr - VAR_3->buf - 3, VAR_2);
            else
                FUNC_0(VAR_1, VAR_3->buf + 4, VAR_3->buf_ptr - VAR_3->buf - 4, VAR_2);
        } else
            FUNC_0(VAR_1, VAR_3->buf, VAR_3->buf_ptr - VAR_3->buf, VAR_2);
    }
    VAR_3->buf_ptr = VAR_3->buf;
    VAR_3->buffered_nals = 0;
}
