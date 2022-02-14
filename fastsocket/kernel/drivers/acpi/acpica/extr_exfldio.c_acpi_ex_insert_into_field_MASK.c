
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bit_length; scalar_t__ access_bit_width; scalar_t__ start_field_bit_offset; scalar_t__ access_byte_width; } ;
union acpi_operand_object {TYPE_1__ common_field; } ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef char acpi_integer ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 char VAR_1 ;
 char FUNC_4 (scalar_t__) ;
 char FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_10 (union acpi_operand_object*,char,char,scalar_t__) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;

acpi_status
FUNC_12(union acpi_operand_object *VAR_4,
     void *VAR_5, u32 VAR_6)
{
 acpi_status VAR_7;
 acpi_integer VAR_8;
 acpi_integer VAR_9;
 acpi_integer VAR_10;
 acpi_integer VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 void *VAR_19;

 FUNC_3(VAR_3);



 VAR_19 = ((void*)0);
 VAR_18 =
     FUNC_8(VAR_4->common_field.bit_length);






 if (VAR_6 < VAR_18) {



  VAR_19 = FUNC_0(VAR_18);
  if (!VAR_19) {
   FUNC_11(VAR_2);
  }






  FUNC_6((char *)VAR_19, (char *)VAR_5, VAR_6);
  VAR_5 = VAR_19;
  VAR_6 = VAR_18;
 }






 if (VAR_4->common_field.access_bit_width == VAR_0) {
  VAR_9 = VAR_1;
 } else {
  VAR_9 =
      FUNC_4(VAR_4->common_field.
      access_bit_width);
 }

 VAR_8 = VAR_9 &
     FUNC_5(VAR_4->common_field.start_field_bit_offset);



 VAR_15 = FUNC_9(VAR_4->common_field.bit_length,
           VAR_4->common_field.access_bit_width);

 VAR_16 = FUNC_9(VAR_4->common_field.bit_length +
          VAR_4->common_field.
          start_field_bit_offset,
          VAR_4->common_field.
          access_bit_width);



 FUNC_6(&VAR_11, VAR_5,
      FUNC_7(VAR_4->common_field.access_byte_width,
        VAR_6 - VAR_13));

 VAR_10 =
     VAR_11 << VAR_4->common_field.start_field_bit_offset;



 for (VAR_17 = 1; VAR_17 < VAR_16; VAR_17++) {



  VAR_10 &= VAR_8;
  VAR_7 = FUNC_10(VAR_4, VAR_8,
       VAR_10,
       VAR_12);
  if (FUNC_1(VAR_7)) {
   goto exit;
  }

  VAR_12 += VAR_4->common_field.access_byte_width;
  if ((VAR_4->common_field.access_bit_width -
       VAR_4->common_field.start_field_bit_offset) <
      VAR_0) {
   VAR_10 =
       VAR_11 >> (VAR_4->common_field.
       access_bit_width -
       VAR_4->common_field.
       start_field_bit_offset);
  } else {
   VAR_10 = 0;
  }

  VAR_8 = VAR_9;

  if (VAR_17 == VAR_15) {
   break;
  }



  VAR_13 += VAR_4->common_field.access_byte_width;
  FUNC_6(&VAR_11, ((char *)VAR_5) + VAR_13,
       FUNC_7(VAR_4->common_field.access_byte_width,
         VAR_6 - VAR_13));
  VAR_10 |=
      VAR_11 << VAR_4->common_field.start_field_bit_offset;
 }



 VAR_14 = (VAR_4->common_field.bit_length +
       VAR_4->common_field.start_field_bit_offset) %
     VAR_4->common_field.access_bit_width;
 if (VAR_14) {
  VAR_8 &= FUNC_4(VAR_14);
 }



 VAR_10 &= VAR_8;
 VAR_7 = FUNC_10(VAR_4,
      VAR_8, VAR_10,
      VAR_12);

      exit:


 if (VAR_19) {
  FUNC_2(VAR_19);
 }
 FUNC_11(VAR_7);
}
