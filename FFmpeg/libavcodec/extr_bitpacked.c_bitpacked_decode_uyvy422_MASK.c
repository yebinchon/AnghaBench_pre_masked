
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int height; int width; int pix_fmt; } ;
struct TYPE_8__ {int * buf; int linesize; int data; } ;
struct TYPE_7__ {int data; int buf; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0, AVFrame *VAR_1,
                                    AVPacket *VAR_2)
{
    int VAR_3;



    VAR_1->buf[0] = FUNC_0(VAR_2->buf);
    VAR_3 = FUNC_2(VAR_1->data, VAR_1->linesize, VAR_2->data,
                               VAR_0->pix_fmt, VAR_0->width, VAR_0->height, 1);
    if (VAR_3 < 0) {
        FUNC_1(&VAR_1->buf[0]);
        return VAR_3;
    }

    return 0;
}
