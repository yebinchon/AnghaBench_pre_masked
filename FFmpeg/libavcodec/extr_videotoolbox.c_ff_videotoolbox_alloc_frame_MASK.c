
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VTHWFrame ;
struct TYPE_11__ {int pix_fmt; int height; int width; } ;
struct TYPE_10__ {int format; int height; int width; TYPE_1__* private_ref; int ** buf; } ;
struct TYPE_9__ {int post_process; } ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ FrameDecodeData ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,size_t,int ,int *,int ) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(AVCodecContext *VAR_3, AVFrame *VAR_4)
{
    size_t VAR_5 = sizeof(VTHWFrame);
    uint8_t *VAR_6 = ((void*)0);
    AVBufferRef *VAR_7 = ((void*)0);
    int VAR_8 = FUNC_4(VAR_4);
    FrameDecodeData *VAR_9;
    if (VAR_8 < 0)
        return VAR_8;

    VAR_6 = FUNC_3(VAR_5);
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_1, ((void*)0), 0);
    if (!VAR_7) {
        FUNC_2(&VAR_6);
        return FUNC_0(VAR_0);
    }
    VAR_4->buf[0] = VAR_7;

    VAR_9 = (FrameDecodeData*)VAR_4->private_ref->data;
    VAR_9->post_process = VAR_2;

    VAR_4->width = VAR_3->width;
    VAR_4->height = VAR_3->height;
    VAR_4->format = VAR_3->pix_fmt;

    return 0;
}
