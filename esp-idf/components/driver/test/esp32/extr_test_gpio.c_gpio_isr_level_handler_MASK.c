
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void* VAR_1)
{
    uint32_t VAR_2 = (uint32_t) VAR_1;
    VAR_0++;
    FUNC_0("GPIO[%d] intr, val: %d, disable_intr_times = %d\n", VAR_2, FUNC_1(VAR_2), VAR_0);
    FUNC_2(VAR_2);
}
