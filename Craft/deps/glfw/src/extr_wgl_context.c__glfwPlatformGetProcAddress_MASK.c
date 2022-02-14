
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int instance; } ;
struct TYPE_5__ {TYPE_1__ opengl32; } ;
struct TYPE_6__ {TYPE_2__ wgl; } ;
typedef scalar_t__ const GLFWglproc ;


 int FUNC_0 (int ,char const*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (char const*) ;

GLFWglproc FUNC_2(const char* VAR_1)
{
    const GLFWglproc VAR_2 = (GLFWglproc) FUNC_1(VAR_1);
    if (VAR_2)
        return VAR_2;

    return (GLFWglproc) FUNC_0(VAR_0.wgl.opengl32.instance, VAR_1);
}
