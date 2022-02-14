
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int handle; } ;
struct TYPE_8__ {int monitor; TYPE_1__ win32; int videoMode; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_9__ {int height; int width; } ;
typedef TYPE_3__ GLFWvidmode ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,int ,int ,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static GLFWbool FUNC_5(_GLFWwindow* VAR_3)
{
    GLFWvidmode VAR_4;
    GLFWbool VAR_5;
    int VAR_6, VAR_7;

    VAR_5 = FUNC_4(VAR_3->monitor, &VAR_3->videoMode);

    FUNC_3(VAR_3->monitor, &VAR_4);
    FUNC_2(VAR_3->monitor, &VAR_6, &VAR_7);

    FUNC_0(VAR_3->win32.handle, VAR_0,
                 VAR_6, VAR_7, VAR_4.width, VAR_4.height,
                 VAR_1 | VAR_2);

    FUNC_1(VAR_3->monitor, VAR_3);
    return VAR_5;
}
