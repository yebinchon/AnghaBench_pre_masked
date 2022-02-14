
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int objects; int buttons; int axes; int name; scalar_t__ device; } ;
typedef TYPE_1__ _GLFWjoystickWin32 ;
struct TYPE_6__ {TYPE_1__* win32_js; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_5(_GLFWjoystickWin32* VAR_2)
{
    if (VAR_2->device)
    {
        FUNC_1(VAR_2->device);
        FUNC_0(VAR_2->device);
    }

    FUNC_3(VAR_2->name);
    FUNC_3(VAR_2->axes);
    FUNC_3(VAR_2->buttons);
    FUNC_3(VAR_2->objects);
    FUNC_4(VAR_2, 0, sizeof(_GLFWjoystickWin32));

    FUNC_2((int) (VAR_2 - VAR_1.win32_js), VAR_0);
}
