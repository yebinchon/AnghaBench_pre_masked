
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int adapterName; } ;
struct TYPE_8__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
typedef int WORD ;
struct TYPE_9__ {int blue; int green; int red; } ;
typedef int HDC ;
typedef TYPE_3__ GLFWgammaramp ;


 int FUNC_0 (char*,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,int *,int) ;

void FUNC_5(_GLFWmonitor* VAR_0, GLFWgammaramp* VAR_1)
{
    HDC VAR_2;
    WORD VAR_3[768];

    VAR_2 = FUNC_0(L"DISPLAY", VAR_0->win32.adapterName, ((void*)0), ((void*)0));
    FUNC_2(VAR_2, VAR_3);
    FUNC_1(VAR_2);

    FUNC_3(VAR_1, 256);

    FUNC_4(VAR_1->red, VAR_3 + 0, 256 * sizeof(unsigned short));
    FUNC_4(VAR_1->green, VAR_3 + 256, 256 * sizeof(unsigned short));
    FUNC_4(VAR_1->blue, VAR_3 + 512, 256 * sizeof(unsigned short));
}
