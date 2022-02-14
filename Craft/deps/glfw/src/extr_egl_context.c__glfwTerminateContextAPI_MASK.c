
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * handle; int display; } ;
struct TYPE_4__ {TYPE_1__ egl; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(void)
{
    if (&FUNC_2)
        FUNC_2(VAR_0.egl.display);

    if (VAR_0.egl.handle)
    {
        FUNC_1(VAR_0.egl.handle);
        VAR_0.egl.handle = ((void*)0);
    }

    FUNC_0();
}
