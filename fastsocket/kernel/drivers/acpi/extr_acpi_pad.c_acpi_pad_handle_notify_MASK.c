
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int acpi_handle ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(acpi_handle VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 uint32_t VAR_4;

 FUNC_4(&VAR_0);
 if (FUNC_3(VAR_1, &VAR_2)) {
  FUNC_5(&VAR_0);
  return;
 }
 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1();
 if (!VAR_3)
  FUNC_2(VAR_1, 0, VAR_4);
 else
  FUNC_2(VAR_1, 1, 0);
 FUNC_5(&VAR_0);
}
