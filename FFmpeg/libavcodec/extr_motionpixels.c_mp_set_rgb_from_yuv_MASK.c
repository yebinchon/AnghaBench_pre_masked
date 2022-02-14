
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int u; int v; int y; } ;
typedef TYPE_2__ YuvPixel ;
struct TYPE_8__ {TYPE_1__* frame; } ;
struct TYPE_6__ {int* linesize; int ** data; } ;
typedef TYPE_3__ MotionPixelsContext ;


 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(MotionPixelsContext *VAR_0, int VAR_1, int VAR_2, const YuvPixel *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_0(VAR_3->y, VAR_3->v, VAR_3->u, 1);
    *(uint16_t *)&VAR_0->frame->data[0][VAR_2 * VAR_0->frame->linesize[0] + VAR_1 * 2] = VAR_4;
}
