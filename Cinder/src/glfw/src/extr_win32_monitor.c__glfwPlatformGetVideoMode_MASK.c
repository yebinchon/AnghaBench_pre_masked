
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int adapterName; } ;
struct TYPE_10__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
struct TYPE_12__ {int dmSize; int dmBitsPerPel; int dmDisplayFrequency; int dmPelsHeight; int dmPelsWidth; } ;
struct TYPE_11__ {int blueBits; int greenBits; int redBits; int refreshRate; int height; int width; } ;
typedef TYPE_3__ GLFWvidmode ;
typedef TYPE_4__ DEVMODEW ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int *,int *,int *) ;

void FUNC_3(_GLFWmonitor* VAR_1, GLFWvidmode* VAR_2)
{
    DEVMODEW VAR_3;

    FUNC_1(&VAR_3, sizeof(DEVMODEW));
    VAR_3.dmSize = sizeof(DEVMODEW);

    FUNC_0(VAR_1->win32.adapterName, VAR_0, &VAR_3);

    VAR_2->width = VAR_3.dmPelsWidth;
    VAR_2->height = VAR_3.dmPelsHeight;
    VAR_2->refreshRate = VAR_3.dmDisplayFrequency;
    FUNC_2(VAR_3.dmBitsPerPel,
                  &VAR_2->redBits,
                  &VAR_2->greenBits,
                  &VAR_2->blueBits);
}
