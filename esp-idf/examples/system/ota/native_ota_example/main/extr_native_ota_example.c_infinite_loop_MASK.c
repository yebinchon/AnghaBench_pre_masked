
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_2 = 0;
    FUNC_0(VAR_0, "When a new firmware is available on the server, press the reset button to download it");
    while(1) {
        FUNC_0(VAR_0, "Waiting for a new firmware ... %d", ++VAR_2);
        FUNC_1(2000 / VAR_1);
    }
}
