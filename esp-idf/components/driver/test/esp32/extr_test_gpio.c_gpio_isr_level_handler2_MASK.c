
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(void* VAR_2)
{
    uint32_t VAR_3 = (uint32_t) VAR_2;
    VAR_1++;
    FUNC_0("GPIO[%d] intr, val: %d\n", VAR_3, FUNC_1(VAR_3));
    if(FUNC_1(VAR_3)) {
        FUNC_2(VAR_0, 0);
    }else{
        FUNC_2(VAR_0, 1);
    }
    FUNC_0("GPIO[%d] intr, val: %d, level_intr_times = %d\n", VAR_0, FUNC_1(VAR_0), VAR_1);
    FUNC_0("GPIO[%d] intr, val: %d, level_intr_times = %d\n", VAR_3, FUNC_1(VAR_3), VAR_1);
}
