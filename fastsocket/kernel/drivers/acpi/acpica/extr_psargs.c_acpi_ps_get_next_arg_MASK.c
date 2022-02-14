
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct TYPE_6__ {int aml_opcode; TYPE_1__ value; union acpi_parse_object* next; } ;
struct TYPE_5__ {int data; } ;
union acpi_parse_object {TYPE_3__ common; TYPE_2__ named; } ;
typedef int u32 ;
struct acpi_walk_state {int arg_count; int opcode; } ;
struct acpi_parse_state {int pkg_end; int aml; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct acpi_parse_state*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 union acpi_parse_object* FUNC_3 (int ) ;
 int FUNC_4 (union acpi_parse_object*) ;
 union acpi_parse_object* FUNC_5 (struct acpi_parse_state*) ;
 int FUNC_6 (struct acpi_walk_state*,struct acpi_parse_state*,union acpi_parse_object*,int) ;
 int FUNC_7 (struct acpi_parse_state*) ;
 int FUNC_8 (struct acpi_parse_state*,int,union acpi_parse_object*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct acpi_parse_state*) ;
 int VAR_10 ;
 int FUNC_12 (int ) ;

acpi_status
FUNC_13(struct acpi_walk_state *VAR_11,
       struct acpi_parse_state *VAR_12,
       u32 VAR_13, union acpi_parse_object **VAR_14)
{
 union acpi_parse_object *VAR_15 = ((void*)0);
 union acpi_parse_object *VAR_16 = ((void*)0);
 union acpi_parse_object *VAR_17;
 u32 VAR_18;
 acpi_status VAR_19 = VAR_4;

 FUNC_1(VAR_10, VAR_12);

 switch (VAR_13) {
 case 144:
 case 128:
 case 139:
 case 142:
 case 137:
 case 136:



  VAR_15 = FUNC_3(VAR_5);
  if (!VAR_15) {
   FUNC_12(VAR_3);
  }
  FUNC_8(VAR_12, VAR_13, VAR_15);
  break;

 case 134:



  VAR_12->pkg_end =
      FUNC_7(VAR_12);
  break;

 case 138:

  if (VAR_12->aml < VAR_12->pkg_end) {



   while (VAR_12->aml < VAR_12->pkg_end) {
    VAR_17 = FUNC_5(VAR_12);
    if (!VAR_17) {
     FUNC_12(VAR_3);
    }

    if (VAR_16) {
     VAR_16->common.next = VAR_17;
    } else {
     VAR_15 = VAR_17;
    }
    VAR_16 = VAR_17;
   }



   VAR_12->aml = VAR_12->pkg_end;
  }
  break;

 case 143:

  if (VAR_12->aml < VAR_12->pkg_end) {



   VAR_15 = FUNC_3(VAR_6);
   if (!VAR_15) {
    FUNC_12(VAR_3);
   }



   VAR_15->common.value.size = (u32)
       FUNC_2(VAR_12->pkg_end,
       VAR_12->aml);
   VAR_15->named.data = VAR_12->aml;



   VAR_12->aml = VAR_12->pkg_end;
  }
  break;

 case 131:
 case 132:
 case 133:

  VAR_18 = FUNC_11(VAR_12);
  if (VAR_18 == 0 ||
      FUNC_9(VAR_18) ||
      FUNC_10(VAR_18)) {



   VAR_15 = FUNC_3(VAR_8);
   if (!VAR_15) {
    FUNC_12(VAR_3);
   }



   if (VAR_11->opcode == VAR_9) {
    VAR_19 =
        FUNC_6(VAR_11,
             VAR_12, VAR_15,
             1);





    if (VAR_15->common.aml_opcode ==
        VAR_7) {
     FUNC_4(VAR_15);
     VAR_15 = ((void*)0);
    }
   } else {
    VAR_19 =
        FUNC_6(VAR_11,
             VAR_12, VAR_15,
             0);
   }
  } else {


   VAR_11->arg_count = 1;
  }
  break;

 case 141:
 case 130:



  VAR_11->arg_count = 1;
  break;

 case 140:
 case 129:
 case 135:

  if (VAR_12->aml < VAR_12->pkg_end) {



   VAR_11->arg_count = VAR_0;
  }
  break;

 default:

  FUNC_0((VAR_2, "Invalid ArgType: %X", VAR_13));
  VAR_19 = VAR_1;
  break;
 }

 *VAR_14 = VAR_15;
 FUNC_12(VAR_19);
}
