
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; } ;
struct TYPE_7__ {TYPE_1__ win32; int monitor; int videoMode; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_8__ {int height; int width; } ;
typedef int GLboolean ;
typedef TYPE_3__ GLFWvidmode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int ,int ,int ) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static GLboolean FUNC_4(_GLFWwindow* VAR_2)
{
    GLFWvidmode VAR_3;
    GLboolean VAR_4;
    int VAR_5, VAR_6;

    VAR_4 = FUNC_3(VAR_2->monitor, &VAR_2->videoMode);

    FUNC_2(VAR_2->monitor, &VAR_3);
    FUNC_1(VAR_2->monitor, &VAR_5, &VAR_6);

    FUNC_0(VAR_2->win32.handle, VAR_0,
                 VAR_5, VAR_6, VAR_3.width, VAR_3.height, VAR_1);

    return VAR_4;
}
