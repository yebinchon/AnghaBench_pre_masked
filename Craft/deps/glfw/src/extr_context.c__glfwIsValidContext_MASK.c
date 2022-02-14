
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ major; scalar_t__ minor; } ;
struct TYPE_7__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_8__ {scalar_t__ major; scalar_t__ minor; } ;
typedef TYPE_3__ _GLFWctxconfig ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 () ;

GLboolean FUNC_2(const _GLFWctxconfig* VAR_3)
{
    _GLFWwindow* VAR_4 = FUNC_1();

    if (VAR_4->context.major < VAR_3->major ||
        (VAR_4->context.major == VAR_3->major &&
         VAR_4->context.minor < VAR_3->minor))
    {







        FUNC_0(VAR_0, ((void*)0));
        return VAR_1;
    }

    return VAR_2;
}
