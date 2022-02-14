
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int dm ;
struct TYPE_16__ {int modeChanged; int adapterName; } ;
struct TYPE_17__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
struct TYPE_19__ {int dmSize; int dmFields; int dmBitsPerPel; int dmDisplayFrequency; int dmPelsHeight; int dmPelsWidth; } ;
struct TYPE_18__ {int redBits; int greenBits; int blueBits; int refreshRate; int height; int width; } ;
typedef TYPE_3__ GLFWvidmode ;
typedef int GLFWbool ;
typedef TYPE_4__ DEVMODEW ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*,int *,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,int) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,TYPE_3__ const*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__ const*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;

GLFWbool FUNC_6(_GLFWmonitor* VAR_9, const GLFWvidmode* VAR_10)
{
    GLFWvidmode VAR_11;
    const GLFWvidmode* VAR_12;
    DEVMODEW VAR_13;

    VAR_12 = FUNC_2(VAR_9, VAR_10);
    FUNC_5(VAR_9, &VAR_11);
    if (FUNC_3(&VAR_11, VAR_12) == 0)
        return VAR_8;

    FUNC_1(&VAR_13, sizeof(VAR_13));
    VAR_13.dmSize = sizeof(DEVMODEW);
    VAR_13.dmFields = VAR_5 | VAR_4 | VAR_2 |
                            VAR_3;
    VAR_13.dmPelsWidth = VAR_12->width;
    VAR_13.dmPelsHeight = VAR_12->height;
    VAR_13.dmBitsPerPel = VAR_12->redBits + VAR_12->greenBits + VAR_12->blueBits;
    VAR_13.dmDisplayFrequency = VAR_12->refreshRate;

    if (VAR_13.dmBitsPerPel < 15 || VAR_13.dmBitsPerPel >= 24)
        VAR_13.dmBitsPerPel = 32;

    if (FUNC_0(VAR_9->win32.adapterName,
                                 &VAR_13,
                                 ((void*)0),
                                 VAR_0,
                                 ((void*)0)) != VAR_1)
    {
        FUNC_4(VAR_7, "Win32: Failed to set video mode");
        return VAR_6;
    }

    VAR_9->win32.modeChanged = VAR_8;
    return VAR_8;
}
