
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {int pix_fmt; int height; int width; } ;
struct TYPE_10__ {int* linesize; scalar_t__* data; TYPE_9__** buf; int height; int width; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVBufferPool ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 TYPE_9__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_2, AVFrame *VAR_3, AVBufferPool *VAR_4)
{
    int VAR_5 = 0;

    FUNC_5(VAR_2, VAR_3);

    VAR_3->width = VAR_2->width;
    VAR_3->height = VAR_2->height;

    switch (VAR_2->pix_fmt) {
    case 129:
        VAR_3->linesize[0] = FUNC_1(VAR_2->width, 128);
        break;
    case 128:
        VAR_3->linesize[0] = 2 * FUNC_1(VAR_2->width, 128);
        break;
    default:
        FUNC_3(VAR_2, VAR_0, "Unsupported pixel format.\n");
        return FUNC_0(VAR_1);
    }

    VAR_3->linesize[1] = VAR_3->linesize[0];
    VAR_3->buf[0] = FUNC_2(VAR_4);
    if (!VAR_3->buf[0])
        return FUNC_0(VAR_1);

    VAR_3->data[0] = VAR_3->buf[0]->data;
    VAR_3->data[1] = VAR_3->data[0] +
                            VAR_3->linesize[0] * FUNC_1(VAR_2->height, 64);

    VAR_5 = FUNC_4(VAR_3);
    if (VAR_5 < 0)
        return VAR_5;

    return 0;
}
