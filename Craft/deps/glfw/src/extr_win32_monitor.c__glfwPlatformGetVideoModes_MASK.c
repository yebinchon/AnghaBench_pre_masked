
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int adapterName; scalar_t__ modesPruned; } ;
struct TYPE_14__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
struct TYPE_16__ {int dmSize; int dmBitsPerPel; int dmDisplayFrequency; int dmPelsHeight; int dmPelsWidth; } ;
struct TYPE_15__ {int blueBits; int greenBits; int redBits; int refreshRate; int height; int width; } ;
typedef TYPE_3__ GLFWvidmode ;
typedef TYPE_4__ DEVMODEW ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*,int *,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int,int *,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int) ;

GLFWvidmode* FUNC_6(_GLFWmonitor* VAR_2, int* VAR_3)
{
    int VAR_4 = 0, VAR_5 = 0;
    GLFWvidmode* VAR_6 = ((void*)0);

    *VAR_3 = 0;

    for (;;)
    {
        int VAR_7;
        GLFWvidmode VAR_8;
        DEVMODEW VAR_9;

        FUNC_2(&VAR_9, sizeof(DEVMODEW));
        VAR_9.dmSize = sizeof(DEVMODEW);

        if (!FUNC_1(VAR_2->win32.adapterName, VAR_4, &VAR_9))
            break;

        VAR_4++;


        if (VAR_9.dmBitsPerPel < 15)
            continue;

        VAR_8.width = VAR_9.dmPelsWidth;
        VAR_8.height = VAR_9.dmPelsHeight;
        VAR_8.refreshRate = VAR_9.dmDisplayFrequency;
        FUNC_4(VAR_9.dmBitsPerPel,
                      &VAR_8.redBits,
                      &VAR_8.greenBits,
                      &VAR_8.blueBits);

        for (VAR_7 = 0; VAR_7 < *VAR_3; VAR_7++)
        {
            if (FUNC_3(VAR_6 + VAR_7, &VAR_8) == 0)
                break;
        }


        if (VAR_7 < *VAR_3)
            continue;

        if (VAR_2->win32.modesPruned)
        {

            if (FUNC_0(VAR_2->win32.adapterName,
                                         &VAR_9,
                                         ((void*)0),
                                         VAR_0,
                                         ((void*)0)) != VAR_1)
            {
                continue;
            }
        }

        if (*VAR_3 == VAR_5)
        {
            if (*VAR_3)
                VAR_5 *= 2;
            else
                VAR_5 = 128;

            VAR_6 = (GLFWvidmode*) FUNC_5(VAR_6, VAR_5 * sizeof(GLFWvidmode));
        }

        (*VAR_3)++;
        VAR_6[*VAR_3 - 1] = VAR_8;
    }

    return VAR_6;
}
