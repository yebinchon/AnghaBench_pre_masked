
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int field_flags; int base_byte_offset; int start_field_bit_offset; int bit_length; } ;
struct TYPE_15__ {int type; int flags; } ;
struct TYPE_14__ {scalar_t__ length; void* pointer; } ;
struct TYPE_13__ {scalar_t__ length; void* pointer; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int attribute; TYPE_2__* region_obj; } ;
union acpi_operand_object {TYPE_8__ common_field; TYPE_7__ common; TYPE_6__ string; TYPE_5__ buffer; TYPE_4__ integer; TYPE_3__ field; } ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef int acpi_integer ;
struct TYPE_9__ {scalar_t__ space_id; } ;
struct TYPE_10__ {TYPE_1__ region; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (void*,void*,scalar_t__) ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (union acpi_operand_object*,int ,int *,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (union acpi_operand_object*,void*,scalar_t__) ;
 int FUNC_9 (int ) ;
 union acpi_operand_object* FUNC_10 (scalar_t__) ;
 int FUNC_11 (union acpi_operand_object*) ;
 int FUNC_12 (int) ;
 int VAR_14 ;
 int FUNC_13 (int ) ;

acpi_status
FUNC_14(union acpi_operand_object *VAR_15,
       union acpi_operand_object *VAR_16,
       union acpi_operand_object **VAR_17)
{
 acpi_status VAR_18;
 u32 VAR_19;
 void *VAR_20;
 union acpi_operand_object *VAR_21;
 u32 VAR_22;

 FUNC_3(VAR_14, VAR_16);



 if (!VAR_15 || !VAR_16) {
  FUNC_13(VAR_9);
 }

 if (VAR_16->common.type == VAR_5) {




  if (!(VAR_16->common.flags & VAR_13)) {
   VAR_18 = FUNC_5(VAR_16);
   if (FUNC_2(VAR_18)) {
    FUNC_13(VAR_18);
   }
  }
 } else if ((VAR_16->common.type == VAR_6) &&
     (VAR_16->field.region_obj->region.space_id ==
      VAR_1
      || VAR_16->field.region_obj->region.space_id ==
      VAR_0)) {
  if (VAR_15->common.type != 130) {
   FUNC_1((VAR_11,
        "SMBus or IPMI write requires Buffer, found type %s",
        FUNC_11(VAR_15)));

   FUNC_13(VAR_10);
  }

  if (VAR_16->field.region_obj->region.space_id ==
      VAR_1) {
   VAR_19 = VAR_4;
   VAR_22 =
       VAR_7 | (VAR_16->field.attribute << 16);
  } else {

   VAR_19 = VAR_3;
   VAR_22 = VAR_7;
  }

  if (VAR_15->buffer.length < VAR_19) {
   FUNC_1((VAR_11,
        "SMBus or IPMI write requires Buffer of length %X, found length %X",
        VAR_19, VAR_15->buffer.length));

   FUNC_13(VAR_8);
  }



  VAR_21 = FUNC_10(VAR_19);
  if (!VAR_21) {
   FUNC_13(VAR_12);
  }

  VAR_20 = VAR_21->buffer.pointer;
  FUNC_4(VAR_20, VAR_15->buffer.pointer, VAR_19);



  FUNC_7(VAR_16->common_field.field_flags);





  VAR_18 = FUNC_6(VAR_16, 0,
            (acpi_integer *) VAR_20,
            VAR_22);
  FUNC_9(VAR_16->common_field.field_flags);

  *VAR_17 = VAR_21;
  FUNC_13(VAR_18);
 }



 switch (VAR_15->common.type) {
 case 129:
  VAR_20 = &VAR_15->integer.value;
  VAR_19 = sizeof(VAR_15->integer.value);
  break;

 case 130:
  VAR_20 = VAR_15->buffer.pointer;
  VAR_19 = VAR_15->buffer.length;
  break;

 case 128:
  VAR_20 = VAR_15->string.pointer;
  VAR_19 = VAR_15->string.length;
  break;

 default:
  FUNC_13(VAR_10);
 }

 FUNC_0((VAR_2,
     "FieldWrite [FROM]: Obj %p (%s:%X), Buf %p, ByteLen %X\n",
     VAR_15,
     FUNC_12(VAR_15->common.type),
     VAR_15->common.type, VAR_20, VAR_19));

 FUNC_0((VAR_2,
     "FieldWrite [TO]:   Obj %p (%s:%X), BitLen %X, BitOff %X, ByteOff %X\n",
     VAR_16,
     FUNC_12(VAR_16->common.type),
     VAR_16->common.type,
     VAR_16->common_field.bit_length,
     VAR_16->common_field.start_field_bit_offset,
     VAR_16->common_field.base_byte_offset));



 FUNC_7(VAR_16->common_field.field_flags);



 VAR_18 = FUNC_8(VAR_16, VAR_20, VAR_19);
 FUNC_9(VAR_16->common_field.field_flags);

 FUNC_13(VAR_18);
}
