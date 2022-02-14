
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
    FUNC_0(VAR_1, "Initializing SDL audio subsystem...");

    if(FUNC_1(VAR_2 | VAR_3) < 0)
    {
        FUNC_0(VAR_0, "Failed to initialize SDL audio subsystem; forcing exit.\n");
        VAR_4 = 1;
        return;
    }
    VAR_4 = 0;

}
