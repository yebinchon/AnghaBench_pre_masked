
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
    int VAR_2 = 0;
    int VAR_3 = FUNC_5(VAR_1);


    if (!VAR_3)
        if (FUNC_2(VAR_1) == -1)
        {
            FUNC_0(VAR_0, "Couldn't init SDL joystick subsystem: %s", FUNC_1() );
            return 0;
        }


    VAR_2 = FUNC_3();


    if (!VAR_3)
        FUNC_4(VAR_1);

    return VAR_2;
}
