
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * handle; } ;
struct TYPE_6__ {TYPE_1__ wgl; } ;
struct TYPE_7__ {TYPE_2__ context; } ;
typedef TYPE_3__ _GLFWwindow ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(_GLFWwindow* VAR_0)
{
    if (VAR_0->context.wgl.handle)
    {
        FUNC_0(VAR_0->context.wgl.handle);
        VAR_0->context.wgl.handle = ((void*)0);
    }
}
