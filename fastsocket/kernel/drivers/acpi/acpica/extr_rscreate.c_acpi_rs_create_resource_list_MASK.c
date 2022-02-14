
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pointer; int length; } ;
union acpi_operand_object {TYPE_1__ buffer; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_buffer {scalar_t__ length; void* pointer; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (struct acpi_buffer*,scalar_t__) ;
 int FUNC_5 (int *,int ,int ,void**) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_4,
        struct acpi_buffer *VAR_5)
{

 acpi_status VAR_6;
 u8 *VAR_7;
 acpi_size VAR_8 = 0;
 u32 VAR_9;
 void *VAR_10;

 FUNC_2(VAR_3);

 FUNC_0((VAR_0, "AmlBuffer = %p\n", VAR_4));



 VAR_9 = VAR_4->buffer.length;
 VAR_7 = VAR_4->buffer.pointer;





 VAR_6 = FUNC_3(VAR_7, VAR_9,
      &VAR_8);

 FUNC_0((VAR_0, "Status=%X ListSizeNeeded=%X\n",
     VAR_6, (u32) VAR_8));
 if (FUNC_1(VAR_6)) {
  FUNC_6(VAR_6);
 }



 VAR_6 = FUNC_4(VAR_5, VAR_8);
 if (FUNC_1(VAR_6)) {
  FUNC_6(VAR_6);
 }



 VAR_10 = VAR_5->pointer;
 VAR_6 = FUNC_5(VAR_7, VAR_9,
         VAR_2,
         &VAR_10);
 if (FUNC_1(VAR_6)) {
  FUNC_6(VAR_6);
 }

 FUNC_0((VAR_0, "OutputBuffer %p Length %X\n",
     VAR_5->pointer, (u32) VAR_5->length));
 FUNC_6(VAR_1);
}
