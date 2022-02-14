
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int refreshRate; int blueBits; int greenBits; int redBits; } ;
typedef scalar_t__ GLboolean ;
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
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 float FUNC_0 (float) ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 double VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (float,float,float,float,float,float) ;
 int FUNC_6 (float,float,float,float) ;
 int * FUNC_7 (int,int,char*,int *,int *) ;
 scalar_t__ FUNC_8 (char*) ;
 int * FUNC_9 () ;
 double FUNC_10 () ;
 TYPE_1__* FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int *) ;
 int VAR_14 ;
 int FUNC_22 (int *,int ) ;
 int VAR_15 ;
 int FUNC_23 (int *) ;
 int FUNC_24 () ;

int FUNC_25(int VAR_16, char** VAR_17)
{
    int VAR_18, VAR_19, VAR_20;
    float VAR_21;
    unsigned long VAR_22 = 0;
    double VAR_23, VAR_24;
    GLboolean VAR_25 = VAR_7;
    GLFWmonitor* VAR_26 = ((void*)0);
    GLFWwindow* VAR_27;

    while ((VAR_18 = FUNC_2(VAR_16, VAR_17, "fh")) != -1)
    {
        switch (VAR_18)
        {
            case 'h':
                FUNC_24();
                FUNC_1(VAR_1);

            case 'f':
                VAR_25 = VAR_10;
                break;
        }
    }

    FUNC_15(VAR_11);

    if (!FUNC_12())
        FUNC_1(VAR_0);

    if (VAR_25)
    {
        const GLFWvidmode* VAR_28;

        VAR_26 = FUNC_9();
        VAR_28 = FUNC_11(VAR_26);

        FUNC_20(VAR_4, VAR_28->redBits);
        FUNC_20(VAR_3, VAR_28->greenBits);
        FUNC_20(VAR_2, VAR_28->blueBits);
        FUNC_20(VAR_5, VAR_28->refreshRate);

        VAR_19 = VAR_28->width;
        VAR_20 = VAR_28->height;
    }
    else
    {
        VAR_19 = 640;
        VAR_20 = 480;
    }

    VAR_27 = FUNC_7(VAR_19, VAR_20, "", VAR_26, ((void*)0));
    if (!VAR_27)
    {
        FUNC_19();
        FUNC_1(VAR_0);
    }

    FUNC_13(VAR_27);
    FUNC_22(VAR_27, 0);

    VAR_23 = FUNC_10();
    VAR_12 = 0.0;
    VAR_15 = (FUNC_8("WGL_EXT_swap_control_tear") ||
                 FUNC_8("GLX_EXT_swap_control_tear"));

    FUNC_16(VAR_27, VAR_13);
    FUNC_17(VAR_27, VAR_14);

    FUNC_4(VAR_9);
    FUNC_5(-1.f, 1.f, -1.f, 1.f, 1.f, -1.f);
    FUNC_4(VAR_8);

    while (!FUNC_21(VAR_27))
    {
        FUNC_3(VAR_6);

        VAR_21 = FUNC_0((float) FUNC_10() * 4.f) * 0.75f;
        FUNC_6(VAR_21 - 0.25f, -1.f, VAR_21 + 0.25f, 1.f);

        FUNC_18(VAR_27);
        FUNC_14();

        VAR_22++;

        VAR_24 = FUNC_10();
        if (VAR_24 - VAR_23 > 1.0)
        {
            VAR_12 = VAR_22 / (VAR_24 - VAR_23);
            VAR_22 = 0;
            VAR_23 = VAR_24;
            FUNC_23(VAR_27);
        }
    }

    FUNC_19();
    FUNC_1(VAR_1);
}
