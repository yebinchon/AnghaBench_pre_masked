
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ redBits; scalar_t__ greenBits; scalar_t__ blueBits; scalar_t__ refreshRate; int width; scalar_t__ height; } ;
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
 int FUNC_0 (int ) ;
 char* FUNC_1 (TYPE_1__ const*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int * FUNC_4 (int,scalar_t__,char*,int ,int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 () ;
 double FUNC_8 () ;
 TYPE_1__* FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int*,scalar_t__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (double) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 (int ,scalar_t__) ;
 scalar_t__ FUNC_20 (int *) ;
 int VAR_10 ;
 int FUNC_21 (char*,...) ;

__attribute__((used)) static void FUNC_22(GLFWmonitor* VAR_11)
{
    int VAR_12, VAR_13;
    GLFWwindow* VAR_14;
    const GLFWvidmode* VAR_15 = FUNC_9(VAR_11, &VAR_13);

    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
    {
        const GLFWvidmode* VAR_16 = VAR_15 + VAR_12;
        GLFWvidmode VAR_17;

        FUNC_19(VAR_3, VAR_16->redBits);
        FUNC_19(VAR_2, VAR_16->greenBits);
        FUNC_19(VAR_1, VAR_16->blueBits);
        FUNC_19(VAR_4, VAR_16->refreshRate);

        FUNC_21("Testing mode %u on monitor %s: %s\n",
               (unsigned int) VAR_12,
               FUNC_6(VAR_11),
               FUNC_1(VAR_16));

        VAR_14 = FUNC_4(VAR_16->width, VAR_16->height,
                                  "Video Mode Test",
                                  FUNC_7(),
                                  ((void*)0));
        if (!VAR_14)
        {
            FUNC_21("Failed to enter mode %u: %s\n",
                   (unsigned int) VAR_12,
                   FUNC_1(VAR_16));
            continue;
        }

        FUNC_13(VAR_14, VAR_9);
        FUNC_14(VAR_14, VAR_10);

        FUNC_11(VAR_14);
        FUNC_17(1);

        FUNC_15(0.0);

        while (FUNC_8() < 5.0)
        {
            FUNC_2(VAR_6);
            FUNC_16(VAR_14);
            FUNC_12();

            if (FUNC_20(VAR_14))
            {
                FUNC_21("User terminated program\n");

                FUNC_18();
                FUNC_0(VAR_0);
            }
        }

        FUNC_3(VAR_8, &VAR_17.redBits);
        FUNC_3(VAR_7, &VAR_17.greenBits);
        FUNC_3(VAR_5, &VAR_17.blueBits);

        FUNC_10(VAR_14, &VAR_17.width, &VAR_17.height);

        if (VAR_17.redBits != VAR_16->redBits ||
            VAR_17.greenBits != VAR_16->greenBits ||
            VAR_17.blueBits != VAR_16->blueBits)
        {
            FUNC_21("*** Color bit mismatch: (%i %i %i) instead of (%i %i %i)\n",
                   VAR_17.redBits, VAR_17.greenBits, VAR_17.blueBits,
                   VAR_16->redBits, VAR_16->greenBits, VAR_16->blueBits);
        }

        if (VAR_17.width != VAR_16->width || VAR_17.height != VAR_16->height)
        {
            FUNC_21("*** Size mismatch: %ix%i instead of %ix%i\n",
                   VAR_17.width, VAR_17.height,
                   VAR_16->width, VAR_16->height);
        }

        FUNC_21("Closing window\n");

        FUNC_5(VAR_14);
        VAR_14 = ((void*)0);

        FUNC_12();
    }
}
