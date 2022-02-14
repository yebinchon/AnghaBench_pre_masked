
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int blueBits; int greenBits; int redBits; int refreshRate; } ;
typedef int GLFWwindow ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int,int,char*,int *,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static GLFWwindow* FUNC_5(GLFWmonitor* VAR_5)
{
    int VAR_6, VAR_7;
    GLFWwindow* VAR_8;

    if (VAR_5)
    {
        const GLFWvidmode* VAR_9 = FUNC_2(VAR_5);

        FUNC_4(VAR_4, VAR_9->refreshRate);
        FUNC_4(VAR_3, VAR_9->redBits);
        FUNC_4(VAR_2, VAR_9->greenBits);
        FUNC_4(VAR_1, VAR_9->blueBits);

        VAR_6 = VAR_9->width;
        VAR_7 = VAR_9->height;
    }
    else
    {
        VAR_6 = 640;
        VAR_7 = 480;
    }

    VAR_8 = FUNC_1(VAR_6, VAR_7, "Iconify", VAR_5, ((void*)0));
    if (!VAR_8)
    {
        FUNC_3();
        FUNC_0(VAR_0);
    }

    return VAR_8;
}
