
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int thrd_t ;
struct TYPE_5__ {double t; float dt; int d_done; int p_done; int particles_lock; scalar_t__ d_frame; scalar_t__ p_frame; } ;
struct TYPE_4__ {int width; int height; int refreshRate; int blueBits; int greenBits; int redBits; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int * FUNC_12 (int,int,char*,int *,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (int *,int*,int*) ;
 int * FUNC_16 () ;
 int FUNC_17 () ;
 TYPE_1__* FUNC_18 (int *) ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 (int *,int (*) (int *,int,int)) ;
 int FUNC_23 (int *,int ,int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (double) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int) ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int *) ;
 int VAR_29 ;
 int FUNC_31 (int *,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_32 (int *,int,int) ;
 int VAR_34 ;
 scalar_t__ FUNC_33 (int *,int ,int *) ;
 int FUNC_34 (int ,int *) ;
 scalar_t__ VAR_35 ;
 TYPE_2__ VAR_36 ;
 int FUNC_35 () ;
 scalar_t__ VAR_37 ;

int FUNC_36(int VAR_38, char** VAR_39)
{
    int VAR_40, VAR_41, VAR_42;
    thrd_t VAR_43 = 0;
    GLFWwindow* VAR_44;
    GLFWmonitor* VAR_45 = ((void*)0);

    if (!FUNC_19())
    {
        FUNC_3(VAR_34, "Failed to initialize GLFW\n");
        FUNC_2(VAR_0);
    }

    while ((VAR_40 = FUNC_4(VAR_38, VAR_39, "fh")) != -1)
    {
        switch (VAR_40)
        {
            case 'f':
                VAR_45 = FUNC_16();
                break;
            case 'h':
                FUNC_35();
                FUNC_2(VAR_1);
        }
    }

    if (VAR_45)
    {
        const GLFWvidmode* VAR_46 = FUNC_18(VAR_45);

        FUNC_29(VAR_8, VAR_46->redBits);
        FUNC_29(VAR_7, VAR_46->greenBits);
        FUNC_29(VAR_4, VAR_46->blueBits);
        FUNC_29(VAR_9, VAR_46->refreshRate);

        VAR_41 = VAR_46->width;
        VAR_42 = VAR_46->height;
    }
    else
    {
        VAR_41 = 640;
        VAR_42 = 480;
    }

    VAR_44 = FUNC_12(VAR_41, VAR_42, "Particle Engine", VAR_45, ((void*)0));
    if (!VAR_44)
    {
        FUNC_3(VAR_34, "Failed to create GLFW window\n");
        FUNC_28();
        FUNC_2(VAR_0);
    }

    if (VAR_45)
        FUNC_23(VAR_44, VAR_5, VAR_6);

    FUNC_20(VAR_44);
    FUNC_27(1);

    FUNC_22(VAR_44, FUNC_32);
    FUNC_24(VAR_44, VAR_29);


    FUNC_15(VAR_44, &VAR_41, &VAR_42);
    FUNC_32(VAR_44, VAR_41, VAR_42);


    FUNC_6(1, &VAR_31);
    FUNC_5(VAR_18, VAR_31);
    FUNC_8(VAR_23, 1);
    FUNC_11(VAR_18, VAR_21, VAR_10);
    FUNC_11(VAR_18, VAR_22, VAR_10);
    FUNC_11(VAR_18, VAR_19, VAR_14);
    FUNC_11(VAR_18, VAR_20, VAR_14);
    FUNC_10(VAR_18, 0, VAR_15, VAR_26, VAR_25,
                 0, VAR_15, VAR_24, VAR_32);


    FUNC_6(1, &VAR_27);
    FUNC_5(VAR_18, VAR_27);
    FUNC_8(VAR_23, 1);
    FUNC_11(VAR_18, VAR_21, VAR_16);
    FUNC_11(VAR_18, VAR_22, VAR_16);
    FUNC_11(VAR_18, VAR_19, VAR_14);
    FUNC_11(VAR_18, VAR_20, VAR_14);
    FUNC_10(VAR_18, 0, VAR_15, VAR_3, VAR_2,
                 0, VAR_15, VAR_24, VAR_28);

    if (FUNC_14("GL_EXT_separate_specular_color"))
    {
        FUNC_7(VAR_13,
                      VAR_17);
    }


    FUNC_9(VAR_12, VAR_11);
    VAR_37 = 0;


    VAR_36.t = 0.0;
    VAR_36.dt = 0.001f;
    VAR_36.p_frame = 0;
    VAR_36.d_frame = 0;

    FUNC_31(&VAR_36.particles_lock, VAR_30);
    FUNC_0(&VAR_36.p_done);
    FUNC_0(&VAR_36.d_done);

    if (FUNC_33(&VAR_43, VAR_33, VAR_44) != VAR_35)
    {
        FUNC_28();
        FUNC_2(VAR_0);
    }

    FUNC_25(0.0);

    while (!FUNC_30(VAR_44))
    {
        FUNC_1(VAR_44, FUNC_17());

        FUNC_26(VAR_44);
        FUNC_21();
    }

    FUNC_34(VAR_43, ((void*)0));

    FUNC_13(VAR_44);
    FUNC_28();

    FUNC_2(VAR_1);
}
