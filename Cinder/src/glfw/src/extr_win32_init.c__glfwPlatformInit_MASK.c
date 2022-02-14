
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int helperWindowHandle; int foregroundLockTimeout; } ;
struct TYPE_4__ {TYPE_1__ win32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int * FUNC_1 (int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;

int FUNC_12(void)
{
    if (!FUNC_3())
        return VAR_0;




    FUNC_0(VAR_4, 0,
                          &VAR_6.win32.foregroundLockTimeout, 0);
    FUNC_0(VAR_5, 0, FUNC_1(0),
                          VAR_3);

    if (!FUNC_11())
        return VAR_0;

    FUNC_10();

    if (&FUNC_8)
        FUNC_8(VAR_2);
    else if (&FUNC_7)
        FUNC_7();

    if (!FUNC_6())
        return VAR_0;

    VAR_6.win32.helperWindowHandle = FUNC_9();
    if (!VAR_6.win32.helperWindowHandle)
        return VAR_0;

    FUNC_5();

    FUNC_4();
    FUNC_2();

    return VAR_1;
}
