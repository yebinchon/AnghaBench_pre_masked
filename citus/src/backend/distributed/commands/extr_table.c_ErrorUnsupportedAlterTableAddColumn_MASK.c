
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ def; } ;
struct TYPE_11__ {char* colname; } ;
struct TYPE_10__ {scalar_t__ contype; scalar_t__ fk_del_action; scalar_t__ fk_upd_action; int pk_attrs; int * pktable; } ;
struct TYPE_9__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int RangeVar ;
typedef int Oid ;
typedef TYPE_2__ Constraint ;
typedef TYPE_3__ ColumnDef ;
typedef TYPE_4__ AlterTableCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 () ;
 char* FUNC_11 (int ) ;

void
FUNC_12(Oid VAR_11, AlterTableCmd *VAR_12,
         Constraint *VAR_13)
{
 ColumnDef *VAR_14 = (ColumnDef *) VAR_12->def;
 char *VAR_15 = VAR_14->colname;
 char *VAR_16 =
  "cannot execute ADD COLUMN command with PRIMARY KEY, UNIQUE, FOREIGN and CHECK constraints";
 StringInfo VAR_17 = FUNC_10();
 FUNC_1(VAR_17, "You can issue each command separately such as ");
 FUNC_1(VAR_17,
      "ALTER TABLE %s ADD COLUMN %s data_type; ALTER TABLE %s ADD CONSTRAINT constraint_name ",
      FUNC_7(VAR_11),
      VAR_15, FUNC_7(VAR_11));

 if (VAR_13->contype == VAR_3)
 {
  FUNC_1(VAR_17, "UNIQUE (%s)", VAR_15);
 }
 else if (VAR_13->contype == VAR_2)
 {
  FUNC_1(VAR_17, "PRIMARY KEY (%s)", VAR_15);
 }
 else if (VAR_13->contype == VAR_0)
 {
  FUNC_1(VAR_17, "CHECK (check_expression)");
 }
 else if (VAR_13->contype == VAR_1)
 {
  RangeVar *VAR_18 = VAR_13->pktable;
  char *VAR_19 = FUNC_11(FUNC_8(FUNC_9(VAR_13->pk_attrs)));
  Oid VAR_20 = FUNC_0(VAR_18, VAR_10, 0);

  FUNC_1(VAR_17, "FOREIGN KEY (%s) REFERENCES %s(%s)", VAR_15,
       FUNC_7(VAR_20), VAR_19);

  if (VAR_13->fk_del_action == VAR_9)
  {
   FUNC_1(VAR_17, " %s", "ON DELETE SET NULL");
  }
  else if (VAR_13->fk_del_action == VAR_6)
  {
   FUNC_1(VAR_17, " %s", "ON DELETE CASCADE");
  }
  else if (VAR_13->fk_del_action == VAR_8)
  {
   FUNC_1(VAR_17, " %s", "ON DELETE SET DEFAULT");
  }
  else if (VAR_13->fk_del_action == VAR_7)
  {
   FUNC_1(VAR_17, " %s", "ON DELETE RESTRICT");
  }

  if (VAR_13->fk_upd_action == VAR_9)
  {
   FUNC_1(VAR_17, " %s", "ON UPDATE SET NULL");
  }
  else if (VAR_13->fk_upd_action == VAR_6)
  {
   FUNC_1(VAR_17, " %s", "ON UPDATE CASCADE");
  }
  else if (VAR_13->fk_upd_action == VAR_8)
  {
   FUNC_1(VAR_17, " %s", "ON UPDATE SET DEFAULT");
  }
  else if (VAR_13->fk_upd_action == VAR_7)
  {
   FUNC_1(VAR_17, " %s", "ON UPDATE RESTRICT");
  }
 }

 FUNC_1(VAR_17, "%s", ";");

 FUNC_2(VAR_5, (FUNC_3(VAR_4),
     FUNC_6("%s", VAR_16),
     FUNC_5("%s", VAR_17->data),
     FUNC_4("Adding a column with a constraint in "
         "one command is not supported because "
         "all constraints in Citus must have "
         "explicit names")));
}
