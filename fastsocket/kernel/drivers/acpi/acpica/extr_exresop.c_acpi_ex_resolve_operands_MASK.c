
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int const class; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ reference; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct acpi_walk_state {int num_operands; int operands; } ;
struct acpi_opcode_info {scalar_t__ class; scalar_t__ runtime_args; int name; } ;
struct acpi_namespace_node {int type; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int const FUNC_5 (union acpi_operand_object*) ;
 int VAR_1 ;







 int VAR_2 ;



 int VAR_3 ;

 int VAR_4 ;




 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int,union acpi_operand_object*) ;
 int FUNC_9 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_10 (union acpi_operand_object*,union acpi_operand_object**,int) ;
 int FUNC_11 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_12 (union acpi_operand_object**,struct acpi_walk_state*) ;
 int VAR_17 ;
 union acpi_operand_object* FUNC_13 (struct acpi_namespace_node*) ;
 struct acpi_opcode_info* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (union acpi_operand_object*) ;
 int FUNC_17 (union acpi_operand_object*) ;
 int FUNC_18 (union acpi_operand_object*) ;
 int FUNC_19 (union acpi_operand_object*) ;
 int FUNC_20 (int) ;
 int VAR_18 ;
 int FUNC_21 (int ) ;

acpi_status
FUNC_22(u16 VAR_19,
    union acpi_operand_object ** VAR_20,
    struct acpi_walk_state * VAR_21)
{
 union acpi_operand_object *VAR_22;
 acpi_status VAR_23 = VAR_11;
 u8 VAR_24;
 u32 VAR_25;
 const struct acpi_opcode_info *VAR_26;
 u32 VAR_27;
 acpi_object_type VAR_28;
 u16 VAR_29 = 0;

 FUNC_4(VAR_18, VAR_19);

 VAR_26 = FUNC_14(VAR_19);
 if (VAR_26->class == VAR_13) {
  FUNC_21(VAR_6);
 }

 VAR_25 = VAR_26->runtime_args;
 if (VAR_25 == VAR_16) {
  FUNC_2((VAR_10, "Unknown AML opcode %X", VAR_19));

  FUNC_21(VAR_7);
 }

 FUNC_0((VAR_0,
     "Opcode %X [%s] RequiredOperandTypes=%8.8X\n",
     VAR_19, VAR_26->name, VAR_25));
 while (FUNC_6(VAR_25)) {
  if (!VAR_20 || !*VAR_20) {
   FUNC_2((VAR_10, "Null stack entry at %p",
        VAR_20));

   FUNC_21(VAR_7);
  }



  VAR_22 = *VAR_20;



  switch (FUNC_5(VAR_22)) {
  case 169:



   VAR_24 =
       ((struct acpi_namespace_node *)VAR_22)->type;






   if (VAR_24 == VAR_4) {
    VAR_22 =
        FUNC_13((struct
         acpi_namespace_node
         *)VAR_22);
    *VAR_20 = VAR_22;
    VAR_24 =
        ((struct acpi_namespace_node *)VAR_22)->
        type;
   }
   break;

  case 168:



   VAR_24 = VAR_22->common.type;



   if (!FUNC_20(VAR_24)) {
    FUNC_2((VAR_10,
         "Bad operand object type [%X]",
         VAR_24));

    FUNC_21(VAR_8);
   }

   if (VAR_24 == (u8) 154) {



    switch (VAR_22->reference.class) {
    case 166:

     VAR_29 = VAR_14;



    case 167:
    case 164:
    case 165:
    case 162:
    case 161:
    case 163:

     FUNC_0((VAR_0,
         "Operand is a Reference, Class [%s] %2.2X\n",
         FUNC_18
         (VAR_22),
         VAR_22->reference.
         class));
     break;

    default:

     FUNC_2((VAR_10,
          "Unknown Reference Class %2.2X in %p",
          VAR_22->reference.class,
          VAR_22));

     FUNC_21(VAR_8);
    }
   }
   break;

  default:



   FUNC_2((VAR_10, "Invalid descriptor %p [%s]",
        VAR_22,
        FUNC_16(VAR_22)));

   FUNC_21(VAR_8);
  }



  VAR_27 = FUNC_6(VAR_25);
  FUNC_7(VAR_25);





  switch (VAR_27) {
  case 132:

   if ((FUNC_5(VAR_22) ==
        168)
       && (VAR_22->common.type == 150)) {




    goto next_operand;
   }







  case 133:
  case 137:
  case 135:
  case 141:
  case 128:
  case 139:
  case 130:





   if (FUNC_5(VAR_22) ==
       169) {
    goto next_operand;
   }

   VAR_23 =
       FUNC_8(154,
            VAR_24, VAR_22);
   if (FUNC_3(VAR_23)) {
    FUNC_21(VAR_23);
   }
   goto next_operand;

  case 143:







   if ((VAR_19 == VAR_15) &&
       ((*VAR_20)->common.type ==
        154)
       && ((*VAR_20)->reference.class == 165)) {
    goto next_operand;
   }
   break;

  default:

   break;
  }




  VAR_23 = FUNC_12(VAR_20, VAR_21);
  if (FUNC_3(VAR_23)) {
   FUNC_21(VAR_23);
  }



  VAR_22 = *VAR_20;




  switch (VAR_27) {




  case 136:



   VAR_28 = VAR_5;
   break;

  case 140:



   VAR_28 = VAR_3;
   break;

  case 134:



   VAR_28 = 152;
   break;

  case 149:



   VAR_28 = VAR_2;
   break;

  case 142:



   VAR_28 = 154;
   break;




  case 138:






   VAR_23 =
       FUNC_10(VAR_22, VAR_20, 16);
   if (FUNC_3(VAR_23)) {
    if (VAR_23 == VAR_12) {
     FUNC_2((VAR_10,
          "Needed [Integer/String/Buffer], found [%s] %p",
          FUNC_17
          (VAR_22), VAR_22));

     FUNC_21(VAR_8);
    }

    FUNC_21(VAR_23);
   }

   if (VAR_22 != *VAR_20) {
    FUNC_19(VAR_22);
   }
   goto next_operand;

  case 148:






   VAR_23 = FUNC_9(VAR_22, VAR_20);
   if (FUNC_3(VAR_23)) {
    if (VAR_23 == VAR_12) {
     FUNC_2((VAR_10,
          "Needed [Integer/String/Buffer], found [%s] %p",
          FUNC_17
          (VAR_22), VAR_22));

     FUNC_21(VAR_8);
    }

    FUNC_21(VAR_23);
   }

   if (VAR_22 != *VAR_20) {
    FUNC_19(VAR_22);
   }
   goto next_operand;

  case 129:






   VAR_23 = FUNC_11(VAR_22, VAR_20,
          VAR_1);
   if (FUNC_3(VAR_23)) {
    if (VAR_23 == VAR_12) {
     FUNC_2((VAR_10,
          "Needed [Integer/String/Buffer], found [%s] %p",
          FUNC_17
          (VAR_22), VAR_22));

     FUNC_21(VAR_8);
    }

    FUNC_21(VAR_23);
   }

   if (VAR_22 != *VAR_20) {
    FUNC_19(VAR_22);
   }
   goto next_operand;

  case 145:



   switch (VAR_22->common.type) {
   case 157:
   case 150:
   case 160:


    break;

   default:
    FUNC_2((VAR_10,
         "Needed [Integer/String/Buffer], found [%s] %p",
         FUNC_17
         (VAR_22), VAR_22));

    FUNC_21(VAR_8);
   }
   goto next_operand;

  case 147:



   switch (VAR_22->common.type) {
   case 150:
   case 160:


    break;

   case 157:



    VAR_23 =
        FUNC_9(VAR_22,
             VAR_20);
    if (FUNC_3(VAR_23)) {
     FUNC_21(VAR_23);
    }

    if (VAR_22 != *VAR_20) {
     FUNC_19(VAR_22);
    }
    break;

   default:
    FUNC_2((VAR_10,
         "Needed [Integer/String/Buffer], found [%s] %p",
         FUNC_17
         (VAR_22), VAR_22));

    FUNC_21(VAR_8);
   }
   goto next_operand;

  case 144:







   switch (VAR_22->common.type) {
   case 152:
   case 150:
   case 160:
   case 154:


    break;

   default:
    FUNC_2((VAR_10,
         "Needed [Buffer/String/Package/Reference], found [%s] %p",
         FUNC_17
         (VAR_22), VAR_22));

    FUNC_21(VAR_8);
   }
   goto next_operand;

  case 146:



   switch (VAR_22->common.type) {
   case 152:
   case 150:
   case 160:


    break;

   default:
    FUNC_2((VAR_10,
         "Needed [Buffer/String/Package], found [%s] %p",
         FUNC_17
         (VAR_22), VAR_22));

    FUNC_21(VAR_8);
   }
   goto next_operand;

  case 131:



   switch (VAR_22->common.type) {
   case 160:
   case 151:


    break;

   default:
    FUNC_2((VAR_10,
         "Needed [Region/Buffer], found [%s] %p",
         FUNC_17
         (VAR_22), VAR_22));

    FUNC_21(VAR_8);
   }
   goto next_operand;

  case 143:



   switch (VAR_22->common.type) {
   case 157:
   case 152:
   case 150:
   case 160:
   case 159:
   case 154:
   case 153:
   case 156:
   case 155:
   case 158:


    break;

   default:

    if (VAR_17) {





     break;
    }

    if (VAR_29 == VAR_14) {



     break;
    }

    FUNC_2((VAR_10,
         "Needed Integer/Buffer/String/Package/Ref/Ddb], found [%s] %p",
         FUNC_17
         (VAR_22), VAR_22));

    FUNC_21(VAR_8);
   }
   goto next_operand;

  default:



   FUNC_2((VAR_10,
        "Internal - Unknown ARGI (required operand) type %X",
        VAR_27));

   FUNC_21(VAR_9);
  }





  VAR_23 = FUNC_8(VAR_28,
         (*VAR_20)->common.type,
         *VAR_20);
  if (FUNC_3(VAR_23)) {
   FUNC_21(VAR_23);
  }

       next_operand:




  if (FUNC_6(VAR_25)) {
   VAR_20--;
  }
 }

 FUNC_1(VAR_21->operands,
      FUNC_15(VAR_19),
      VAR_21->num_operands);

 FUNC_21(VAR_23);
}
