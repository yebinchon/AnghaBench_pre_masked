
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int GLuint ;
typedef int GLint ;
typedef int GLFWwindow ;
typedef int GLADloadproc ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 float VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (float,float,float,float) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (unsigned int,char*) ;
 int FUNC_5 (int ,int,int,float*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int,int,char*,int *,int *) ;
 scalar_t__ VAR_19 ;
 double FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 () ;
 int VAR_20 ;
 int FUNC_21 (unsigned int) ;
 unsigned int FUNC_22 (int ,int ) ;
 float* VAR_21 ;
 float* VAR_22 ;
 float FUNC_23 (float) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 () ;
 int VAR_23 ;
 float VAR_24 ;
 float VAR_25 ;
 float VAR_26 ;

int FUNC_26(int VAR_27, char** VAR_28)
{
    GLFWwindow* VAR_29;
    int VAR_30;
    double VAR_31;
    double VAR_32;
    int VAR_33;
    float VAR_34;
    GLint VAR_35;
    GLint VAR_36;

    GLuint VAR_37;

    FUNC_14(VAR_17);

    if (!FUNC_11())
        FUNC_0(VAR_0);

    FUNC_18(VAR_7, VAR_9);
    FUNC_18(VAR_2, 3);
    FUNC_18(VAR_3, 2);
    FUNC_18(VAR_6, VAR_4);
    FUNC_18(VAR_5, VAR_11);

    VAR_29 = FUNC_9(800, 600, "GLFW OpenGL3 Heightmap demo", ((void*)0), ((void*)0));
    if (! VAR_29 )
    {
        FUNC_17();
        FUNC_0(VAR_0);
    }


    FUNC_15(VAR_29, VAR_20);

    FUNC_12(VAR_29);
    FUNC_8((GLADloadproc) VAR_19);


    VAR_37 = FUNC_22(VAR_23, VAR_18);

    if (VAR_37 == 0u)
    {
        FUNC_17();
        FUNC_0(VAR_0);
    }

    FUNC_6(VAR_37);
    VAR_36 = FUNC_4(VAR_37, "project");
    VAR_35 = FUNC_4(VAR_37, "modelview");


    VAR_34 = 1.0f / FUNC_23(VAR_24 / 2.0f);
    VAR_22[0] = VAR_34 / VAR_16;
    VAR_22[5] = VAR_34;
    VAR_22[10] = (VAR_25 + VAR_26)/ (VAR_26 - VAR_25);
    VAR_22[11] = -1.0f;
    VAR_22[14] = 2.0f * (VAR_25 * VAR_26) / (VAR_26 - VAR_25);
    FUNC_5(VAR_36, 1, VAR_9, VAR_22);


    VAR_21[12] = -5.0f;
    VAR_21[13] = -5.0f;
    VAR_21[14] = -20.0f;
    FUNC_5(VAR_35, 1, VAR_9, VAR_21);


    FUNC_20();
    FUNC_21(VAR_37);





    FUNC_7(0, 0, 800, 600);
    FUNC_2(0.0f, 0.0f, 0.0f, 0.0f);


    VAR_33 = 0;
    VAR_30 = 0;
    VAR_32 = FUNC_10();

    while (!FUNC_19(VAR_29))
    {
        ++VAR_33;

        FUNC_1(VAR_8);
        FUNC_3(VAR_10, 2* VAR_13 , VAR_12, 0);


        FUNC_16(VAR_29);
        FUNC_13();

        VAR_31 = FUNC_10();
        if ((VAR_31 - VAR_32) > 0.2)
        {

            if (VAR_30 < VAR_14)
            {
                FUNC_24(VAR_15);
                FUNC_25();
                VAR_30 += VAR_15;
            }
            VAR_32 = VAR_31;
            VAR_33 = 0;
        }
    }

    FUNC_17();
    FUNC_0(VAR_1);
}
