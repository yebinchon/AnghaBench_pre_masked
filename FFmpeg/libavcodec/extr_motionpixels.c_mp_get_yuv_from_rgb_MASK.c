
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int YuvPixel ;
struct TYPE_5__ {TYPE_1__* frame; } ;
struct TYPE_4__ {int* linesize; int ** data; } ;
typedef TYPE_2__ MotionPixelsContext ;


 int * VAR_0 ;

__attribute__((used)) static YuvPixel FUNC_0(MotionPixelsContext *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;

    VAR_4 = *(uint16_t *)&VAR_1->frame->data[0][VAR_3 * VAR_1->frame->linesize[0] + VAR_2 * 2];
    return VAR_0[VAR_4];
}
