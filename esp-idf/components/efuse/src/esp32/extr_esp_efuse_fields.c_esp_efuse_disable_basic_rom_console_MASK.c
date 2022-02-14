
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(void)
{
    uint8_t VAR_2 = 0;
    FUNC_1(VAR_0, &VAR_2, 1);
    if (VAR_2 == 0) {
        FUNC_2(VAR_0, 1);
        FUNC_0(VAR_1, "Disable BASIC ROM Console fallback via efuse...");
    }
}
