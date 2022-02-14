
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


struct TYPE_14__ {int field_flags; int base_byte_offset; int start_field_bit_offset; int bit_length; } ;
struct TYPE_13__ {scalar_t__ type; int flags; } ;
struct TYPE_12__ {scalar_t__ value; } ;
struct TYPE_11__ {void* pointer; } ;
struct TYPE_10__ {int attribute; int bit_length; TYPE_2__* region_obj; } ;
union acpi_operand_object {TYPE_7__ common_field; TYPE_6__ common; TYPE_5__ integer; TYPE_4__ buffer; TYPE_3__ field; } ;
typedef int u32 ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;
struct TYPE_8__ {scalar_t__ space_id; } ;
struct TYPE_9__ {TYPE_1__ region; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,void*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (union acpi_operand_object*,int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (union acpi_operand_object*,void*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 union acpi_operand_object* FUNC_10 (scalar_t__) ;
 union acpi_operand_object* FUNC_11 (int ) ;
 int FUNC_12 (union acpi_operand_object*) ;
 int VAR_15 ;
 int FUNC_13 (int ) ;

acpi_status
FUNC_14(struct acpi_walk_state *VAR_16,
        union acpi_operand_object *VAR_17,
        union acpi_operand_object **VAR_18)
{
 acpi_status VAR_19;
 union acpi_operand_object *VAR_20;
 acpi_size VAR_21;
 void *VAR_22;
 u32 VAR_23;

 FUNC_3(VAR_15, VAR_17);



 if (!VAR_17) {
  FUNC_13(VAR_9);
 }
 if (!VAR_18) {
  FUNC_13(VAR_10);
 }

 if (VAR_17->common.type == VAR_6) {




  if (!(VAR_17->common.flags & VAR_12)) {
   VAR_19 = FUNC_5(VAR_17);
   if (FUNC_2(VAR_19)) {
    FUNC_13(VAR_19);
   }
  }
 } else if ((VAR_17->common.type == VAR_8) &&
     (VAR_17->field.region_obj->region.space_id ==
      VAR_1
      || VAR_17->field.region_obj->region.space_id ==
      VAR_0)) {






  if (VAR_17->field.region_obj->region.space_id ==
      VAR_1) {
   VAR_21 = VAR_5;
   VAR_23 =
       VAR_4 | (VAR_17->field.attribute << 16);
  } else {

   VAR_21 = VAR_3;
   VAR_23 = VAR_4;
  }

  VAR_20 = FUNC_10(VAR_21);
  if (!VAR_20) {
   FUNC_13(VAR_11);
  }



  FUNC_7(VAR_17->common_field.field_flags);



  VAR_19 = FUNC_6(VAR_17, 0,
            FUNC_0(VAR_14,
            VAR_20->
            buffer.pointer),
            VAR_23);
  FUNC_9(VAR_17->common_field.field_flags);
  goto exit;
 }
 VAR_21 =
     (acpi_size) FUNC_4(VAR_17->field.bit_length);
 if (VAR_21 > VAR_13) {



  VAR_20 = FUNC_10(VAR_21);
  if (!VAR_20) {
   FUNC_13(VAR_11);
  }
  VAR_22 = VAR_20->buffer.pointer;
 } else {


  VAR_20 = FUNC_11(VAR_7);
  if (!VAR_20) {
   FUNC_13(VAR_11);
  }

  VAR_21 = VAR_13;
  VAR_20->integer.value = 0;
  VAR_22 = &VAR_20->integer.value;
 }

 FUNC_1((VAR_2,
     "FieldRead [TO]:   Obj %p, Type %X, Buf %p, ByteLen %X\n",
     VAR_17, VAR_17->common.type, VAR_22,
     (u32) VAR_21));
 FUNC_1((VAR_2,
     "FieldRead [FROM]: BitLen %X, BitOff %X, ByteOff %X\n",
     VAR_17->common_field.bit_length,
     VAR_17->common_field.start_field_bit_offset,
     VAR_17->common_field.base_byte_offset));



 FUNC_7(VAR_17->common_field.field_flags);



 VAR_19 = FUNC_8(VAR_17, VAR_22, (u32) VAR_21);
 FUNC_9(VAR_17->common_field.field_flags);

      exit:
 if (FUNC_2(VAR_19)) {
  FUNC_12(VAR_20);
 } else {
  *VAR_18 = VAR_20;
 }

 FUNC_13(VAR_19);
}
