
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ handle; } ;
struct TYPE_8__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_9__ {int right; int left; } ;
typedef TYPE_3__ RECT ;
typedef int POINT ;
typedef int GLFWbool ;


 int FUNC_0 (scalar_t__,int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static GLFWbool FUNC_5(_GLFWwindow* VAR_1)
{
    RECT VAR_2;
    POINT VAR_3;

    if (!FUNC_2(&VAR_3))
        return VAR_0;

    if (FUNC_4(VAR_3) != VAR_1->win32.handle)
        return VAR_0;

    FUNC_1(VAR_1->win32.handle, &VAR_2);
    FUNC_0(VAR_1->win32.handle, (POINT*) &VAR_2.left);
    FUNC_0(VAR_1->win32.handle, (POINT*) &VAR_2.right);

    return FUNC_3(&VAR_2, VAR_3);
}
