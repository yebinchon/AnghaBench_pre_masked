
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ client; } ;
struct TYPE_6__ {TYPE_1__ egl; } ;
struct TYPE_7__ {TYPE_2__ context; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef scalar_t__ GLFWglproc ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (scalar_t__,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static GLFWglproc FUNC_3(const char* VAR_0)
{
    _GLFWwindow* VAR_1 = FUNC_0();

    if (VAR_1->context.egl.client)
    {
        GLFWglproc VAR_2 = (GLFWglproc) FUNC_1(VAR_1->context.egl.client,
                                                   VAR_0);
        if (VAR_2)
            return VAR_2;
    }

    return FUNC_2(VAR_0);
}
