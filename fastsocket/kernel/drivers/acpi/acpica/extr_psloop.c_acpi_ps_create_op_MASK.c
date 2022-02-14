
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ aml_opcode; scalar_t__ arg_list_length; int flags; } ;
struct TYPE_5__ {scalar_t__* data; scalar_t__ length; } ;
union acpi_parse_object {TYPE_3__ common; TYPE_2__ named; } ;
typedef scalar_t__ u8 ;
struct acpi_walk_state {scalar_t__ opcode; scalar_t__ (* descending_callback ) (struct acpi_walk_state*,union acpi_parse_object**) ;union acpi_parse_object* op; int parser_state; TYPE_1__* op_info; } ;
struct acpi_opcode_info {int flags; int type; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct acpi_walk_state*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 union acpi_parse_object* FUNC_2 (scalar_t__) ;
 int FUNC_3 (union acpi_parse_object*,union acpi_parse_object*) ;
 scalar_t__ FUNC_4 (struct acpi_walk_state*,scalar_t__*,union acpi_parse_object*,union acpi_parse_object**) ;
 int FUNC_5 (union acpi_parse_object*) ;
 scalar_t__ FUNC_6 (struct acpi_walk_state*) ;
 scalar_t__ FUNC_7 (int ) ;
 void* FUNC_8 (scalar_t__) ;
 union acpi_parse_object* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__) ;
 int VAR_11 ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (struct acpi_walk_state*,union acpi_parse_object**) ;

__attribute__((used)) static acpi_status
FUNC_13(struct acpi_walk_state *VAR_12,
    u8 * VAR_13, union acpi_parse_object **VAR_14)
{
 acpi_status VAR_15 = VAR_5;
 union acpi_parse_object *VAR_16;
 union acpi_parse_object *VAR_17 = ((void*)0);
 union acpi_parse_object *VAR_18;
 u8 VAR_19;
 const struct acpi_opcode_info *VAR_20;

 FUNC_1(VAR_11, VAR_12);

 VAR_15 = FUNC_6(VAR_12);
 if (VAR_15 == VAR_1) {
  FUNC_11(VAR_1);
 }



 VAR_12->op_info = FUNC_8(VAR_12->opcode);
 VAR_16 = FUNC_2(VAR_12->opcode);
 if (!VAR_16) {
  FUNC_11(VAR_4);
 }

 if (VAR_12->op_info->flags & VAR_10) {
  VAR_15 =
      FUNC_4(VAR_12, VAR_13, VAR_16,
        &VAR_17);
  FUNC_5(VAR_16);
  if (FUNC_0(VAR_15)) {
   FUNC_11(VAR_15);
  }

  *VAR_14 = VAR_17;
  FUNC_11(VAR_5);
 }



 if (VAR_12->op_info->flags & VAR_7) {




  VAR_16->named.data = VAR_13;
  VAR_16->named.length = 0;
 }

 if (VAR_12->opcode == VAR_6) {




  VAR_16->named.data = VAR_13;
  VAR_16->named.length = 0;
 }

 VAR_18 = FUNC_9(&(VAR_12->parser_state));
 FUNC_3(VAR_18, VAR_16);

 if (VAR_18) {
  VAR_20 =
      FUNC_8(VAR_18->common.aml_opcode);
  if (VAR_20->flags & VAR_8) {
   VAR_19 =
       FUNC_7(VAR_20->type);
   if (VAR_18->common.arg_list_length >
       VAR_19) {
    VAR_16->common.flags |= VAR_0;
   }
  } else if (VAR_18->common.aml_opcode == VAR_9) {
   VAR_16->common.flags |= VAR_0;
  }
 }

 if (VAR_12->descending_callback != ((void*)0)) {




  VAR_12->op = *VAR_14 = VAR_16;

  VAR_15 = VAR_12->descending_callback(VAR_12, &VAR_16);
  VAR_15 = FUNC_10(VAR_12, VAR_16, VAR_15);
  if (VAR_15 == VAR_3) {
   VAR_15 = VAR_2;
  }
 }

 FUNC_11(VAR_15);
}
