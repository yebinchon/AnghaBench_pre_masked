
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t acpi_object_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_2 (size_t) ;
 int VAR_4 ;
 int FUNC_3 (int) ;

u32 FUNC_4(acpi_object_type VAR_5)
{
 FUNC_0(VAR_4);

 if (!FUNC_2(VAR_5)) {



  FUNC_1((VAR_2, "Invalid Object Type %X", VAR_5));
  FUNC_3(VAR_1);
 }

 FUNC_3((u32) VAR_3[VAR_5] & VAR_0);
}
