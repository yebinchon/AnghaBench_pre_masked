
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {int type; } ;
struct TYPE_16__ {int resource_order; int system_level; } ;
struct TYPE_14__ {int length; int address; int proc_id; } ;
struct TYPE_25__ {int node; int class; } ;
struct TYPE_23__ {int value; } ;
struct TYPE_21__ {int length; scalar_t__ pointer; } ;
struct TYPE_20__ {int length; scalar_t__ pointer; } ;
union acpi_operand_object {TYPE_13__ common; TYPE_12__ power_resource; TYPE_10__ processor; TYPE_8__ reference; TYPE_6__ integer; TYPE_4__ buffer; TYPE_3__ string; } ;
struct TYPE_15__ {int resource_order; int system_level; } ;
struct TYPE_26__ {int pblk_length; int pblk_address; int proc_id; } ;
struct TYPE_24__ {int actual_type; int handle; } ;
struct TYPE_22__ {int value; } ;
struct TYPE_19__ {int length; int * pointer; } ;
struct TYPE_18__ {char* pointer; int length; } ;
union acpi_object {int type; TYPE_11__ power_resource; TYPE_9__ processor; TYPE_7__ reference; TYPE_5__ integer; TYPE_2__ buffer; TYPE_1__ string; } ;
typedef int u8 ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (union acpi_object*,int ,int) ;

 scalar_t__ FUNC_4 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static acpi_status
FUNC_8(union acpi_operand_object *VAR_5,
    union acpi_object *VAR_6,
    u8 * VAR_7, acpi_size * VAR_8)
{
 acpi_status VAR_9 = VAR_1;

 FUNC_1(VAR_4);

 *VAR_8 = 0;





 if (!VAR_5) {
  FUNC_7(VAR_1);
 }



 FUNC_3(VAR_6, 0, sizeof(union acpi_object));





 VAR_6->type = VAR_5->common.type;



 switch (VAR_5->common.type) {
 case 128:

  VAR_6->string.pointer = (char *)VAR_7;
  VAR_6->string.length = VAR_5->string.length;
  *VAR_8 = FUNC_4((acpi_size)
          VAR_5->
          string.
          length + 1);

  FUNC_2((void *)VAR_7,
       (void *)VAR_5->string.pointer,
       (acpi_size) VAR_5->string.length + 1);
  break;

 case 133:

  VAR_6->buffer.pointer = VAR_7;
  VAR_6->buffer.length = VAR_5->buffer.length;
  *VAR_8 =
      FUNC_4(VAR_5->string.
       length);

  FUNC_2((void *)VAR_7,
       (void *)VAR_5->buffer.pointer,
       VAR_5->buffer.length);
  break;

 case 132:

  VAR_6->integer.value = VAR_5->integer.value;
  break;

 case 131:



  switch (VAR_5->reference.class) {
  case 134:





   VAR_6->reference.handle =
       VAR_5->reference.node;
   VAR_6->reference.actual_type =
       FUNC_5(VAR_5->reference.node);
   break;

  default:



   FUNC_7(VAR_3);
  }
  break;

 case 129:

  VAR_6->processor.proc_id =
      VAR_5->processor.proc_id;
  VAR_6->processor.pblk_address =
      VAR_5->processor.address;
  VAR_6->processor.pblk_length =
      VAR_5->processor.length;
  break;

 case 130:

  VAR_6->power_resource.system_level =
      VAR_5->power_resource.system_level;

  VAR_6->power_resource.resource_order =
      VAR_5->power_resource.resource_order;
  break;

 default:



  FUNC_0((VAR_0,
       "Unsupported object type, cannot convert to external object: %s",
       FUNC_6(VAR_5->common.
        type)));

  FUNC_7(VAR_2);
 }

 FUNC_7(VAR_9);
}
