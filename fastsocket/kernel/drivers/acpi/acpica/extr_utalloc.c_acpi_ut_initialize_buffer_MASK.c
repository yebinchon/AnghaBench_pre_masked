
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {int length; int pointer; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 int FUNC_0 (int) ;


 int FUNC_1 (int ,int ,int) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;

acpi_status
FUNC_3(struct acpi_buffer * VAR_4,
     acpi_size VAR_5)
{
 acpi_size VAR_6;



 if (!VAR_4 || !VAR_5) {
  return (VAR_0);
 }





 VAR_6 = VAR_4->length;
 VAR_4->length = VAR_5;





 switch (VAR_6) {
 case 128:



  return (VAR_1);

 case 130:



  VAR_4->pointer = FUNC_2(VAR_5);
  break;

 case 129:



  VAR_4->pointer = FUNC_0(VAR_5);
  break;

 default:



  if (VAR_6 < VAR_5) {
   return (VAR_1);
  }
  break;
 }



 if (!VAR_4->pointer) {
  return (VAR_2);
 }



 FUNC_1(VAR_4->pointer, 0, VAR_5);
 return (VAR_3);
}
