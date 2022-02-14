
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


struct TYPE_14__ {union acpi_operand_object* object; union acpi_operand_object* node; int value; int class; } ;
struct TYPE_13__ {int ascii; } ;
struct TYPE_12__ {scalar_t__ count; union acpi_operand_object** elements; } ;
struct TYPE_11__ {int pointer; int length; } ;
struct TYPE_10__ {int length; int pointer; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_8__ {int type; } ;
union acpi_operand_object {TYPE_7__ reference; union acpi_operand_object* object; int type; TYPE_6__ name; TYPE_5__ package; TYPE_4__ string; TYPE_3__ buffer; TYPE_2__ integer; TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
struct acpi_namespace_node {union acpi_operand_object* object; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_4 (union acpi_operand_object*) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_10(union acpi_operand_object *VAR_7,
   u32 VAR_8, u32 VAR_9)
{
 u32 VAR_10;

 FUNC_3(VAR_5, VAR_7);



 if (!((VAR_8 > 0) && VAR_9 == 0)) {
  FUNC_0((VAR_0, "[ACPI Debug] %*s",
          VAR_8, " "));
 }



 if (VAR_9 > 0) {
  FUNC_0((VAR_0,
          "(%.2u) ", VAR_9 - 1));
 }

 if (!VAR_7) {
  FUNC_0((VAR_0, "[Null Object]\n"));
  VAR_6;
 }

 if (FUNC_4(VAR_7) == VAR_3) {
  FUNC_0((VAR_0, "%s ",
          FUNC_6
          (VAR_7)));

  if (!FUNC_9(VAR_7)) {
   FUNC_0((VAR_0,
           "%p, Invalid Internal Object!\n",
           VAR_7));
   VAR_6;
  }
 } else if (FUNC_4(VAR_7) ==
     VAR_2) {
  FUNC_0((VAR_0, "%s: %p\n",
          FUNC_8(((struct
             acpi_namespace_node
             *)VAR_7)->
           type),
          VAR_7));
  VAR_6;
 } else {
  VAR_6;
 }



 switch (VAR_7->common.type) {
 case 132:



  if (VAR_4 == 4) {
   FUNC_0((VAR_0, "0x%8.8X\n",
           (u32) VAR_7->integer.
           value));
  } else {
   FUNC_0((VAR_0,
           "0x%8.8X%8.8X\n",
           FUNC_2(VAR_7->
         integer.
         value)));
  }
  break;

 case 134:

  FUNC_0((VAR_0, "[0x%.2X]\n",
          (u32) VAR_7->buffer.length));
  FUNC_1(VAR_7->buffer.pointer,
     (VAR_7->buffer.length <
      256) ? VAR_7->buffer.length : 256);
  break;

 case 129:

  FUNC_0((VAR_0, "[0x%.2X] \"%s\"\n",
          VAR_7->string.length,
          VAR_7->string.pointer));
  break;

 case 130:

  FUNC_0((VAR_0,
          "[Contains 0x%.2X Elements]\n",
          VAR_7->package.count));



  for (VAR_10 = 0; VAR_10 < VAR_7->package.count; VAR_10++) {
   FUNC_10(VAR_7->package.
      elements[VAR_10], VAR_8 + 4, VAR_10 + 1);
  }
  break;

 case 131:

  FUNC_0((VAR_0, "[%s] ",
          FUNC_7(VAR_7)));



  switch (VAR_7->reference.class) {
  case 136:

   FUNC_0((VAR_0, "0x%X\n",
           VAR_7->reference.value));
   break;

  case 135:



   FUNC_0((VAR_0,
           "Table Index 0x%X\n",
           VAR_7->reference.value));
   return;

  default:
   break;
  }

  FUNC_0((VAR_0, "  "));



  if (VAR_7->reference.node) {
   if (FUNC_4
       (VAR_7->reference.node) !=
       VAR_2) {
    FUNC_0((VAR_0,
            " %p - Not a valid namespace node\n",
            VAR_7->reference.
            node));
   } else {
    FUNC_0((VAR_0,
            "Node %p [%4.4s] ",
            VAR_7->reference.
            node,
            (VAR_7->reference.
             node)->name.ascii));

    switch ((VAR_7->reference.node)->type) {



    case 133:
     FUNC_5("Device\n");
     break;

    case 128:
     FUNC_5("Thermal Zone\n");
     break;

    default:
     FUNC_10((VAR_7->
         reference.
         node)->object,
        VAR_8 + 4, 0);
     break;
    }
   }
  } else if (VAR_7->reference.object) {
   if (FUNC_4
       (VAR_7->reference.object) ==
       VAR_2) {
    FUNC_10(((struct
         acpi_namespace_node *)
        VAR_7->reference.
        object)->object,
       VAR_8 + 4, 0);
   } else {
    FUNC_10(VAR_7->reference.
       object, VAR_8 + 4, 0);
   }
  }
  break;

 default:

  FUNC_0((VAR_0, "%p\n",
          VAR_7));
  break;
 }

 FUNC_0((VAR_1, "\n"));
 VAR_6;
}
