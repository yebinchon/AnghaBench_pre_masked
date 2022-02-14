
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ client; } ;
struct TYPE_5__ {TYPE_1__ egl; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef scalar_t__ GLFWglproc ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (scalar_t__,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

GLFWglproc FUNC_3(const char* VAR_0)
{
    _GLFWwindow* VAR_1 = FUNC_0();

    if (VAR_1->egl.client)
    {
        GLFWglproc VAR_2 = (GLFWglproc) FUNC_1(VAR_1->egl.client, VAR_0);
        if (VAR_2)
            return VAR_2;
    }

    return FUNC_2(VAR_0);
}
