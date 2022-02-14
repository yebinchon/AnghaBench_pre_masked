
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ff_scene_sad_fn ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int) ;

ff_scene_sad_fn FUNC_1(int VAR_3)
{
    ff_scene_sad_fn VAR_4 = ((void*)0);
    if (VAR_0)
        VAR_4 = FUNC_0(VAR_3);
    if (!VAR_4) {
        if (VAR_3 == 8)
            VAR_4 = VAR_2;
        if (VAR_3 == 16)
            VAR_4 = VAR_1;
    }
    return VAR_4;
}
