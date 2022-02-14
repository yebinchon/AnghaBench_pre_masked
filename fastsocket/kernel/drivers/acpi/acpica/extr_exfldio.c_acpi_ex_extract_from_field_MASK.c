
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bit_length; int access_bit_width; scalar_t__ start_field_bit_offset; scalar_t__ access_byte_width; } ;
union acpi_operand_object {TYPE_1__ common_field; } ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef int acpi_integer ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int*,int ) ;
 int FUNC_5 (void*,int ,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (union acpi_operand_object*,scalar_t__,int*,int ) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(union acpi_operand_object *VAR_6,
      void *VAR_7, u32 VAR_8)
{
 acpi_status VAR_9;
 acpi_integer VAR_10;
 acpi_integer VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;

 FUNC_2(VAR_5);



 if (VAR_8 <
     FUNC_7(VAR_6->common_field.bit_length)) {
  FUNC_0((VAR_3,
       "Field size %X (bits) is too large for buffer (%X)",
       VAR_6->common_field.bit_length, VAR_8));

  FUNC_10(VAR_2);
 }
 FUNC_5(VAR_7, 0, VAR_8);



 VAR_15 = FUNC_8(VAR_6->common_field.bit_length,
           VAR_6->common_field.access_bit_width);
 VAR_16 = FUNC_8(VAR_6->common_field.bit_length +
          VAR_6->common_field.
          start_field_bit_offset,
          VAR_6->common_field.
          access_bit_width);



 VAR_9 =
     FUNC_9(VAR_6, VAR_12, &VAR_10,
       VAR_1);
 if (FUNC_1(VAR_9)) {
  FUNC_10(VAR_9);
 }
 VAR_11 =
     VAR_10 >> VAR_6->common_field.start_field_bit_offset;



 for (VAR_17 = 1; VAR_17 < VAR_16; VAR_17++) {



  VAR_12 += VAR_6->common_field.access_byte_width;
  VAR_9 = FUNC_9(VAR_6, VAR_12,
      &VAR_10, VAR_1);
  if (FUNC_1(VAR_9)) {
   FUNC_10(VAR_9);
  }
  if ((VAR_6->common_field.access_bit_width -
       VAR_6->common_field.start_field_bit_offset) <
      VAR_0) {
   VAR_11 |=
       VAR_10 << (VAR_6->common_field.
       access_bit_width -
       VAR_6->common_field.
       start_field_bit_offset);
  }

  if (VAR_17 == VAR_15) {
   break;
  }



  FUNC_4(((char *)VAR_7) + VAR_13, &VAR_11,
       FUNC_6(VAR_6->common_field.access_byte_width,
         VAR_8 - VAR_13));

  VAR_13 += VAR_6->common_field.access_byte_width;
  VAR_11 =
      VAR_10 >> VAR_6->common_field.start_field_bit_offset;
 }



 VAR_14 = VAR_6->common_field.bit_length %
     VAR_6->common_field.access_bit_width;
 if (VAR_14) {
  VAR_11 &= FUNC_3(VAR_14);
 }



 FUNC_4(((char *)VAR_7) + VAR_13, &VAR_11,
      FUNC_6(VAR_6->common_field.access_byte_width,
        VAR_8 - VAR_13));

 FUNC_10(VAR_4);
}
