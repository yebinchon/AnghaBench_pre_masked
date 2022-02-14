
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (float,float,float,int ) ;
 int FUNC_4 (float,float,float) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (float,float,float,float,float,float) ;
 int FUNC_7 (float,float,float,float) ;
 int * FUNC_8 (int,int,char*,int *,int *) ;
 int * FUNC_9 () ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int *) ;
 int VAR_11 ;
 int FUNC_22 (int *,float) ;
 int FUNC_23 () ;

int FUNC_24(int VAR_12, char** VAR_13)
{
    int VAR_14, VAR_15, VAR_16;
    GLFWmonitor* VAR_17 = ((void*)0);
    GLFWwindow* VAR_18;

    FUNC_13(VAR_9);

    if (!FUNC_11())
        FUNC_0(VAR_0);

    while ((VAR_16 = FUNC_1(VAR_12, VAR_13, "fh")) != -1)
    {
        switch (VAR_16)
        {
            case 'h':
                FUNC_23();
                FUNC_0(VAR_1);

            case 'f':
                VAR_17 = FUNC_9();
                break;

            default:
                FUNC_23();
                FUNC_0(VAR_0);
        }
    }

    if (VAR_17)
    {
        const GLFWvidmode* VAR_19 = FUNC_10(VAR_17);

        FUNC_20(VAR_5, VAR_19->refreshRate);
        FUNC_20(VAR_4, VAR_19->redBits);
        FUNC_20(VAR_3, VAR_19->greenBits);
        FUNC_20(VAR_2, VAR_19->blueBits);

        VAR_14 = VAR_19->width;
        VAR_15 = VAR_19->height;
    }
    else
    {
        VAR_14 = 200;
        VAR_15 = 200;
    }

    VAR_18 = FUNC_8(VAR_14, VAR_15, "Gamma Test", VAR_17, ((void*)0));
    if (!VAR_18)
    {
        FUNC_18();
        FUNC_0(VAR_0);
    }

    FUNC_22(VAR_18, 1.f);

    FUNC_12(VAR_18);
    FUNC_17(1);

    FUNC_15(VAR_18, VAR_11);
    FUNC_14(VAR_18, VAR_10);

    FUNC_5(VAR_8);
    FUNC_6(-1.f, 1.f, -1.f, 1.f, -1.f, 1.f);
    FUNC_5(VAR_7);

    FUNC_3(0.5f, 0.5f, 0.5f, 0);

    while (!FUNC_21(VAR_18))
    {
        FUNC_2(VAR_6);

        FUNC_4(0.8f, 0.2f, 0.4f);
        FUNC_7(-0.5f, -0.5f, 0.5f, 0.5f);

        FUNC_16(VAR_18);
        FUNC_19();
    }

    FUNC_18();
    FUNC_0(VAR_1);
}
