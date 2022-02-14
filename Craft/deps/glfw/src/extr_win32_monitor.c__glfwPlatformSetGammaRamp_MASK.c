
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int adapterName; } ;
struct TYPE_7__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
typedef int WORD ;
struct TYPE_8__ {int size; int blue; int green; int red; } ;
typedef int HDC ;
typedef TYPE_3__ GLFWgammaramp ;


 int FUNC_0 (char*,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ,int) ;

void FUNC_5(_GLFWmonitor* VAR_1, const GLFWgammaramp* VAR_2)
{
    HDC VAR_3;
    WORD VAR_4[768];

    if (VAR_2->size != 256)
    {
        FUNC_3(VAR_0,
                        "Win32: Gamma ramp size must be 256");
        return;
    }

    FUNC_4(VAR_4 + 0, VAR_2->red, 256 * sizeof(unsigned short));
    FUNC_4(VAR_4 + 256, VAR_2->green, 256 * sizeof(unsigned short));
    FUNC_4(VAR_4 + 512, VAR_2->blue, 256 * sizeof(unsigned short));

    VAR_3 = FUNC_0(L"DISPLAY", VAR_1->win32.adapterName, ((void*)0), ((void*)0));
    FUNC_2(VAR_3, VAR_4);
    FUNC_1(VAR_3);
}
