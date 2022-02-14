
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_object_type ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long long VAR_4 ;





 int VAR_5 ;
 int FUNC_1 (int ,unsigned long long*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_6, int *VAR_7,
        unsigned long long *VAR_8)
{
 acpi_status VAR_9;
 acpi_object_type VAR_10;

 VAR_9 = FUNC_2(VAR_6, &VAR_10);
 if (FUNC_0(VAR_9))
  return -VAR_5;

 switch (VAR_10) {
 case 132:
 case 131:
  *VAR_7 = VAR_0;
  VAR_9 = FUNC_1(VAR_6, VAR_8);
  if (FUNC_0(VAR_9))
   return -VAR_5;
  break;
 case 129:
  *VAR_7 = VAR_2;
  VAR_9 = FUNC_1(VAR_6, VAR_8);
  if (FUNC_0(VAR_9))
   return -VAR_5;
  break;
 case 128:
  *VAR_7 = VAR_3;
  *VAR_8 = VAR_4;
  break;
 case 130:
  *VAR_7 = VAR_1;
  *VAR_8 = VAR_4;
  break;
 default:
  return -VAR_5;
 }

 return 0;
}
