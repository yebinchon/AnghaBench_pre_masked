
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ handle; } ;
struct TYPE_6__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int POINT ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(_GLFWwindow* VAR_0)
{
    POINT VAR_1;

    FUNC_3(VAR_0);

    if (FUNC_0(&VAR_1))
    {
        if (FUNC_2(VAR_1) == VAR_0->win32.handle)
            FUNC_1(((void*)0));
    }
}
