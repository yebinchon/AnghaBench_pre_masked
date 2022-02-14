
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int access_byte_width; } ;
struct TYPE_13__ {int type; int flags; } ;
struct TYPE_12__ {scalar_t__ value; int data_obj; int index_obj; } ;
struct TYPE_11__ {scalar_t__ value; int bank_obj; } ;
struct TYPE_10__ {scalar_t__ base_byte_offset; TYPE_2__* buffer_obj; } ;
union acpi_operand_object {TYPE_7__ common_field; TYPE_6__ common; TYPE_5__ index_field; TYPE_4__ bank_field; TYPE_3__ buffer_field; } ;
typedef scalar_t__ u32 ;
typedef int field_datum_byte_offset ;
typedef int acpi_status ;
typedef scalar_t__ acpi_integer ;
struct TYPE_8__ {scalar_t__ pointer; } ;
struct TYPE_9__ {TYPE_1__ buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (union acpi_operand_object*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__*,int) ;
 int FUNC_10 (int ,scalar_t__*,int) ;
 int FUNC_11 (int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static acpi_status
FUNC_13(union acpi_operand_object *VAR_8,
         u32 VAR_9,
         acpi_integer * VAR_10, u32 VAR_11)
{
 acpi_status VAR_12;
 acpi_integer VAR_13;

 FUNC_4(VAR_7, VAR_9);

 if (VAR_11 == VAR_1) {
  if (!VAR_10) {
   VAR_13 = 0;


   VAR_10 = &VAR_13;
  }



  *VAR_10 = 0;
 }
 switch (VAR_8->common.type) {
 case 131:




  if (!(VAR_8->common.flags & VAR_6)) {
   VAR_12 = FUNC_7(VAR_8);
   if (FUNC_2(VAR_12)) {
    FUNC_12(VAR_12);
   }
  }

  if (VAR_11 == VAR_1) {




   FUNC_5(*VAR_10,
        (VAR_8->buffer_field.buffer_obj)->buffer.
        pointer +
        VAR_8->buffer_field.base_byte_offset +
        VAR_9,
        VAR_8->common_field.access_byte_width);
  } else {




   FUNC_5((VAR_8->buffer_field.buffer_obj)->buffer.
        pointer +
        VAR_8->buffer_field.base_byte_offset +
        VAR_9, VAR_10,
        VAR_8->common_field.access_byte_width);
  }

  VAR_12 = VAR_5;
  break;

 case 130:





  if (FUNC_11(VAR_8->bank_field.bank_obj,
           (acpi_integer) VAR_8->
           bank_field.value)) {
   FUNC_12(VAR_3);
  }





  VAR_12 =
      FUNC_10(VAR_8->bank_field.bank_obj,
           &VAR_8->bank_field.value,
           sizeof(VAR_8->bank_field.
           value));
  if (FUNC_2(VAR_12)) {
   FUNC_12(VAR_12);
  }
 case 128:




  VAR_12 =
      FUNC_8(VAR_8, VAR_9,
       VAR_10, VAR_11);
  break;

 case 129:





  if (FUNC_11(VAR_8->index_field.index_obj,
           (acpi_integer) VAR_8->
           index_field.value)) {
   FUNC_12(VAR_3);
  }



  VAR_9 += VAR_8->index_field.value;

  FUNC_0((VAR_0,
      "Write to Index Register: Value %8.8X\n",
      VAR_9));

  VAR_12 =
      FUNC_10(VAR_8->index_field.index_obj,
           &VAR_9,
           sizeof(VAR_9));
  if (FUNC_2(VAR_12)) {
   FUNC_12(VAR_12);
  }

  if (VAR_11 == VAR_1) {



   FUNC_0((VAR_0,
       "Read from Data Register\n"));

   VAR_12 =
       FUNC_9(VAR_8->index_field.
             data_obj, VAR_10,
             sizeof(acpi_integer));
  } else {


   FUNC_0((VAR_0,
       "Write to Data Register: Value %8.8X%8.8X\n",
       FUNC_3(*VAR_10)));

   VAR_12 =
       FUNC_10(VAR_8->index_field.
            data_obj, VAR_10,
            sizeof(acpi_integer));
  }
  break;

 default:

  FUNC_1((VAR_4, "Wrong object type in field I/O %X",
       VAR_8->common.type));
  VAR_12 = VAR_2;
  break;
 }

 if (FUNC_6(VAR_12)) {
  if (VAR_11 == VAR_1) {
   FUNC_0((VAR_0,
       "Value Read %8.8X%8.8X, Width %d\n",
       FUNC_3(*VAR_10),
       VAR_8->common_field.
       access_byte_width));
  } else {
   FUNC_0((VAR_0,
       "Value Written %8.8X%8.8X, Width %d\n",
       FUNC_3(*VAR_10),
       VAR_8->common_field.
       access_byte_width));
  }
 }

 FUNC_12(VAR_12);
}
