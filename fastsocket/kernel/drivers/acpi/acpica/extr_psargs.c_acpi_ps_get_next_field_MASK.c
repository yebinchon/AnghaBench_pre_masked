
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int integer; void* size; } ;
struct TYPE_4__ {int aml_offset; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_2__ common; } ;
typedef int u32 ;
typedef int u16 ;
struct acpi_parse_state {int aml; int aml_start; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;



 union acpi_parse_object* FUNC_4 (int) ;
 void* FUNC_5 (struct acpi_parse_state*) ;
 int FUNC_6 (union acpi_parse_object*,int) ;
 int VAR_1 ;
 int FUNC_7 (union acpi_parse_object*) ;

__attribute__((used)) static union acpi_parse_object *FUNC_8(struct acpi_parse_state
             *VAR_2)
{
 u32 VAR_3 = (u32)
     FUNC_3(VAR_2->aml,
     VAR_2->aml_start);
 union acpi_parse_object *VAR_4;
 u16 VAR_5;
 u32 VAR_6;

 FUNC_0(VAR_1);



 switch (FUNC_1(VAR_2->aml)) {
 default:

  VAR_5 = 129;
  break;

 case 0x00:

  VAR_5 = 128;
  VAR_2->aml++;
  break;

 case 0x01:

  VAR_5 = 130;
  VAR_2->aml++;
  break;
 }



 VAR_4 = FUNC_4(VAR_5);
 if (!VAR_4) {
  FUNC_7(((void*)0));
 }

 VAR_4->common.aml_offset = VAR_3;



 switch (VAR_5) {
 case 129:



  FUNC_2(&VAR_6, VAR_2->aml);
  FUNC_6(VAR_4, VAR_6);
  VAR_2->aml += VAR_0;



  VAR_4->common.value.size =
      FUNC_5(VAR_2);
  break;

 case 128:



  VAR_4->common.value.size =
      FUNC_5(VAR_2);
  break;

 case 130:





  VAR_4->common.value.integer =
      (((u32) FUNC_1(VAR_2->aml) << 8));
  VAR_2->aml++;
  VAR_4->common.value.integer |= FUNC_1(VAR_2->aml);
  VAR_2->aml++;
  break;

 default:


  break;
 }

 FUNC_7(VAR_4);
}
