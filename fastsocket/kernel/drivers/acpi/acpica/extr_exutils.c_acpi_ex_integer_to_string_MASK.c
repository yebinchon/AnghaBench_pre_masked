
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int acpi_integer ;


 int FUNC_0 () ;
 size_t FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int *,size_t*) ;

void FUNC_3(char *VAR_0, acpi_integer VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4;

 FUNC_0();

 VAR_3 = FUNC_1(VAR_1, 10);
 VAR_0[VAR_3] = 0;

 for (VAR_2 = VAR_3; VAR_2 > 0; VAR_2--) {
  (void)FUNC_2(VAR_1, 10, &VAR_1, &VAR_4);
  VAR_0[VAR_2 - 1] = (char)('0' + VAR_4);
 }
}
