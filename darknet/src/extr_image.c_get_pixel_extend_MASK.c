
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int h; int c; } ;
typedef TYPE_1__ image ;


 float FUNC_0 (TYPE_1__,int,int,int) ;

__attribute__((used)) static float FUNC_1(image VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    if(VAR_1 < 0 || VAR_1 >= VAR_0.w || VAR_2 < 0 || VAR_2 >= VAR_0.h) return 0;






    if(VAR_3 < 0 || VAR_3 >= VAR_0.c) return 0;
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
