
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int c; scalar_t__ data; } ;
typedef TYPE_1__ image ;



image FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
    image VAR_3;
    VAR_3.data = 0;
    VAR_3.h = VAR_1;
    VAR_3.w = VAR_0;
    VAR_3.c = VAR_2;
    return VAR_3;
}
