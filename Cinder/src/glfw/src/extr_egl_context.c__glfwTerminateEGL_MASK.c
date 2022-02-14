
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * handle; scalar_t__ display; } ;
struct TYPE_4__ {TYPE_1__ egl; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(void)
{
    if (VAR_1.egl.display)
    {
        FUNC_1(VAR_1.egl.display);
        VAR_1.egl.display = VAR_0;
    }

    if (VAR_1.egl.handle)
    {
        FUNC_0(VAR_1.egl.handle);
        VAR_1.egl.handle = ((void*)0);
    }
}
