
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 float const* FUNC_2 (int,int*) ;

const float* FUNC_3(int VAR_2, int* VAR_3)
{
    *VAR_3 = 0;

    FUNC_0(((void*)0));

    if (VAR_2 < 0 || VAR_2 > VAR_1)
    {
        FUNC_1(VAR_0, "Invalid joystick");
        return ((void*)0);
    }

    return FUNC_2(VAR_2, VAR_3);
}
