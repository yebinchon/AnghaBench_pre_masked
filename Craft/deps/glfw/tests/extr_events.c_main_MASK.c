
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; int blueBits; int greenBits; int redBits; int refreshRate; } ;
struct TYPE_7__ {int number; int window; int closeable; } ;
typedef TYPE_1__ Slot ;
typedef TYPE_2__ GLFWvidmode ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_14 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int,int,char*,int *,int *) ;
 char* FUNC_7 (int *) ;
 int * FUNC_8 () ;
 TYPE_2__* FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,TYPE_1__*) ;
 int FUNC_30 (int) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 (int ,int ) ;
 scalar_t__ FUNC_34 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_35 (char*,...) ;
 int VAR_19 ;
 int FUNC_36 (int ,char*) ;
 int FUNC_37 (char*,char*,int) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_38 (int ,int *,int) ;
 int FUNC_39 () ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

int FUNC_40(int VAR_28, char** VAR_29)
{
    Slot* VAR_30;
    GLFWmonitor* VAR_31 = ((void*)0);
    int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36 = 1;

    FUNC_36(VAR_7, "");

    FUNC_17(VAR_13);

    if (!FUNC_10())
        FUNC_1(VAR_0);

    FUNC_35("Library initialized\n");

    FUNC_20(VAR_16);

    while ((VAR_32 = FUNC_5(VAR_28, VAR_29, "hfn:")) != -1)
    {
        switch (VAR_32)
        {
            case 'h':
                FUNC_39();
                FUNC_1(VAR_1);

            case 'f':
                VAR_31 = FUNC_8();
                break;

            case 'n':
                VAR_36 = (int) FUNC_38(VAR_18, ((void*)0), 10);
                break;

            default:
                FUNC_39();
                FUNC_1(VAR_0);
        }
    }

    if (VAR_31)
    {
        const GLFWvidmode* VAR_37 = FUNC_9(VAR_31);

        FUNC_33(VAR_5, VAR_37->refreshRate);
        FUNC_33(VAR_4, VAR_37->redBits);
        FUNC_33(VAR_3, VAR_37->greenBits);
        FUNC_33(VAR_2, VAR_37->blueBits);

        VAR_34 = VAR_37->width;
        VAR_35 = VAR_37->height;
    }
    else
    {
        VAR_34 = 640;
        VAR_35 = 480;
    }

    if (!VAR_36)
    {
        FUNC_3(VAR_20, "Invalid user\n");
        FUNC_1(VAR_0);
    }

    VAR_30 = FUNC_0(VAR_36, sizeof(Slot));

    for (VAR_33 = 0; VAR_33 < VAR_36; VAR_33++)
    {
        char VAR_38[128];

        VAR_30[VAR_33].closeable = VAR_6;
        VAR_30[VAR_33].number = VAR_33 + 1;

        FUNC_37(VAR_38, "Event Linter (Window %i)", VAR_30[VAR_33].number);

        if (VAR_31)
        {
            FUNC_35("Creating full screen window %i (%ix%i on %s)\n",
                   VAR_30[VAR_33].number,
                   VAR_34, VAR_35,
                   FUNC_7(VAR_31));
        }
        else
        {
            FUNC_35("Creating windowed mode window %i (%ix%i)\n",
                   VAR_30[VAR_33].number,
                   VAR_34, VAR_35);
        }

        VAR_30[VAR_33].window = FUNC_6(VAR_34, VAR_35, VAR_38, VAR_31, ((void*)0));
        if (!VAR_30[VAR_33].window)
        {
            FUNC_4(VAR_30);
            FUNC_31();
            FUNC_1(VAR_0);
        }

        FUNC_29(VAR_30[VAR_33].window, VAR_30 + VAR_33);

        FUNC_26(VAR_30[VAR_33].window, VAR_25);
        FUNC_28(VAR_30[VAR_33].window, VAR_27);
        FUNC_18(VAR_30[VAR_33].window, VAR_14);
        FUNC_23(VAR_30[VAR_33].window, VAR_22);
        FUNC_27(VAR_30[VAR_33].window, VAR_26);
        FUNC_24(VAR_30[VAR_33].window, VAR_23);
        FUNC_25(VAR_30[VAR_33].window, VAR_24);
        FUNC_21(VAR_30[VAR_33].window, VAR_17);
        FUNC_15(VAR_30[VAR_33].window, VAR_11);
        FUNC_14(VAR_30[VAR_33].window, VAR_10);
        FUNC_22(VAR_30[VAR_33].window, VAR_19);
        FUNC_19(VAR_30[VAR_33].window, VAR_15);
        FUNC_12(VAR_30[VAR_33].window, VAR_8);
        FUNC_13(VAR_30[VAR_33].window, VAR_9);
        FUNC_16(VAR_30[VAR_33].window, VAR_12);

        FUNC_11(VAR_30[VAR_33].window);
        FUNC_30(1);
    }

    FUNC_35("Main loop starting\n");

    for (;;)
    {
        for (VAR_33 = 0; VAR_33 < VAR_36; VAR_33++)
        {
            if (FUNC_34(VAR_30[VAR_33].window))
                break;
        }

        if (VAR_33 < VAR_36)
            break;

        FUNC_32();


        FUNC_2(VAR_21);
    }

    FUNC_4(VAR_30);
    FUNC_31();
    FUNC_1(VAR_1);
}
