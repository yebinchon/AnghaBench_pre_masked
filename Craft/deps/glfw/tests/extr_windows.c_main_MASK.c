
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int b; int g; int r; } ;
typedef scalar_t__ GLboolean ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,float) ;
 int * FUNC_3 (int,int,int ,int *,int *) ;
 int FUNC_4 (int *,int*,int*,int*,int*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int *) ;
 int VAR_9 ;
 int * VAR_10 ;

int FUNC_16(int VAR_11, char** VAR_12)
{
    int VAR_13;
    GLboolean VAR_14 = VAR_6;
    GLFWwindow* VAR_15[4];

    FUNC_8(VAR_8);

    if (!FUNC_5())
        FUNC_0(VAR_0);

    FUNC_14(VAR_2, VAR_5);
    FUNC_14(VAR_3, VAR_5);

    for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
    {
        int VAR_16, VAR_17, VAR_18, VAR_19;

        VAR_15[VAR_13] = FUNC_3(200, 200, VAR_10[VAR_13], ((void*)0), ((void*)0));
        if (!VAR_15[VAR_13])
        {
            FUNC_13();
            FUNC_0(VAR_0);
        }

        FUNC_9(VAR_15[VAR_13], VAR_9);

        FUNC_6(VAR_15[VAR_13]);
        FUNC_2(VAR_7[VAR_13].r, VAR_7[VAR_13].g, VAR_7[VAR_13].b, 1.f);

        FUNC_4(VAR_15[VAR_13], &VAR_16, &VAR_17, &VAR_18, &VAR_19);
        FUNC_10(VAR_15[VAR_13],
                         100 + (VAR_13 & 1) * (200 + VAR_16 + VAR_18),
                         100 + (VAR_13 >> 1) * (200 + VAR_17 + VAR_19));
    }

    for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
        FUNC_11(VAR_15[VAR_13]);

    while (VAR_14)
    {
        for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
        {
            FUNC_6(VAR_15[VAR_13]);
            FUNC_1(VAR_4);
            FUNC_12(VAR_15[VAR_13]);

            if (FUNC_15(VAR_15[VAR_13]))
                VAR_14 = VAR_5;
        }

        FUNC_7();
    }

    FUNC_13();
    FUNC_0(VAR_1);
}
