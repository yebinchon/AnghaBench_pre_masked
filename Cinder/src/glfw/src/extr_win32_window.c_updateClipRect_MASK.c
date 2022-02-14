
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int handle; } ;
struct TYPE_8__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_9__ {int right; int left; } ;
typedef TYPE_3__ RECT ;
typedef int POINT ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_0)
{
    if (VAR_0)
    {
        RECT VAR_1;
        FUNC_2(VAR_0->win32.handle, &VAR_1);
        FUNC_0(VAR_0->win32.handle, (POINT*) &VAR_1.left);
        FUNC_0(VAR_0->win32.handle, (POINT*) &VAR_1.right);
        FUNC_1(&VAR_1);
    }
    else
        FUNC_1(((void*)0));
}
