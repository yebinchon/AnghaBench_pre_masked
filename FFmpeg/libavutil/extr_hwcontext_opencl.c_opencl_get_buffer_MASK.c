
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {int height; int width; int format; int ** data; TYPE_6__** buf; } ;
struct TYPE_8__ {int height; int width; int pool; } ;
struct TYPE_7__ {int nb_planes; scalar_t__* planes; } ;
typedef TYPE_1__ AVOpenCLFrameDescriptor ;
typedef TYPE_2__ AVHWFramesContext ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVHWFramesContext *VAR_2, AVFrame *VAR_3)
{
    AVOpenCLFrameDescriptor *VAR_4;
    int VAR_5;

    VAR_3->buf[0] = FUNC_1(VAR_2->pool);
    if (!VAR_3->buf[0])
        return FUNC_0(VAR_1);

    VAR_4 = (AVOpenCLFrameDescriptor*)VAR_3->buf[0]->data;

    for (VAR_5 = 0; VAR_5 < VAR_4->nb_planes; VAR_5++)
        VAR_3->data[VAR_5] = (uint8_t*)VAR_4->planes[VAR_5];

    VAR_3->format = VAR_0;
    VAR_3->width = VAR_2->width;
    VAR_3->height = VAR_2->height;

    return 0;
}
