
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ handle; } ;
struct TYPE_9__ {TYPE_3__* cursor; TYPE_1__ win32; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_7__ {int handle; } ;
struct TYPE_8__ {TYPE_2__ win32; } ;
typedef int POINT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_1)
{
    POINT VAR_2;

    FUNC_0(((void*)0));

    if (FUNC_1(&VAR_2))
    {
        if (FUNC_4(VAR_2) == VAR_1->win32.handle)
        {
            if (VAR_1->cursor)
                FUNC_3(VAR_1->cursor->win32.handle);
            else
                FUNC_3(FUNC_2(((void*)0), VAR_0));
        }
    }
}
