
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * handle; int * dc; } ;
struct TYPE_7__ {TYPE_1__ wgl; } ;
struct TYPE_8__ {TYPE_2__ context; } ;
typedef TYPE_3__ _GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_1)
{
    if (VAR_1)
    {
        if (FUNC_2(VAR_1->context.wgl.dc, VAR_1->context.wgl.handle))
            FUNC_1(VAR_1);
        else
        {
            FUNC_0(VAR_0,
                            "WGL: Failed to make context current");
            FUNC_1(((void*)0));
        }
    }
    else
    {
        if (!FUNC_2(((void*)0), ((void*)0)))
        {
            FUNC_0(VAR_0,
                            "WGL: Failed to clear current context");
        }

        FUNC_1(((void*)0));
    }
}
