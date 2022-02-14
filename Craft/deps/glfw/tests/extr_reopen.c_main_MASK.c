
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
typedef float GLfloat ;
typedef int GLFWwindow ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float,float,float,float,float,float) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (float,float,float,float) ;
 int FUNC_8 (float,float,float,float) ;
 int ** FUNC_9 (int*) ;
 double FUNC_10 () ;
 TYPE_1__* FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (double) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int *) ;
 int * FUNC_19 (int,int,int *) ;
 int FUNC_20 (char*) ;
 int FUNC_21 () ;
 int FUNC_22 (unsigned int) ;
 scalar_t__ FUNC_23 (int *) ;

int FUNC_24(int VAR_6, char** VAR_7)
{
    int VAR_8 = 0;
    GLFWwindow* VAR_9;

    FUNC_22((unsigned int) FUNC_23(((void*)0)));

    FUNC_14(VAR_5);

    if (!FUNC_12())
        FUNC_1(VAR_0);

    for (;;)
    {
        int VAR_10, VAR_11;
        GLFWmonitor* VAR_12 = ((void*)0);

        if (VAR_8 % 2 == 0)
        {
            int VAR_13;
            GLFWmonitor** VAR_14 = FUNC_9(&VAR_13);
            VAR_12 = VAR_14[FUNC_21() % VAR_13];
        }

        if (VAR_12)
        {
            const GLFWvidmode* VAR_15 = FUNC_11(VAR_12);
            VAR_10 = VAR_15->width;
            VAR_11 = VAR_15->height;
        }
        else
        {
            VAR_10 = 640;
            VAR_11 = 480;
        }

        VAR_9 = FUNC_19(VAR_10, VAR_11, VAR_12);
        if (!VAR_9)
        {
            FUNC_17();
            FUNC_1(VAR_0);
        }

        FUNC_3(VAR_4);
        FUNC_4(-1.f, 1.f, -1.f, 1.f, 1.f, -1.f);
        FUNC_3(VAR_3);

        FUNC_15(0.0);

        while (FUNC_10() < 5.0)
        {
            FUNC_2(VAR_2);

            FUNC_6();
            FUNC_8((GLfloat) FUNC_10() * 100.f, 0.f, 0.f, 1.f);
            FUNC_7(-0.5f, -0.5f, 1.f, 1.f);
            FUNC_5();

            FUNC_16(VAR_9);
            FUNC_13();

            if (FUNC_18(VAR_9))
            {
                FUNC_0(VAR_9);
                FUNC_20("User closed window\n");

                FUNC_17();
                FUNC_1(VAR_1);
            }
        }

        FUNC_20("Closing window\n");
        FUNC_0(VAR_9);

        VAR_8++;
    }

    FUNC_17();
}
