
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ type; TYPE_10__* schema; int tagVal; int meterId; } ;
struct TYPE_19__ {int name; } ;
struct TYPE_18__ {int meterId; } ;
struct TYPE_17__ {int name; int type; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SDbObj ;
typedef TYPE_3__ SAlterTableMsg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ,int ,...) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_10__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_10__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int VAR_11 ;

int FUNC_11(SDbObj *VAR_12, SAlterTableMsg *VAR_13) {
  STabObj *VAR_14;

  VAR_14 = FUNC_2(VAR_13->meterId);
  if (VAR_14 == ((void*)0)) {
    return VAR_7;
  }


  if (FUNC_1(VAR_12->name, VAR_11)) return VAR_8;

  if (VAR_13->type == VAR_5) {
    if (!FUNC_3(VAR_14) || !FUNC_6(VAR_14)) {
      return VAR_9;
    }
  }



  if (VAR_13->type == VAR_1) {
    FUNC_0("alter table %s to add tag column:%s, type:%d", VAR_14->meterId, VAR_13->schema[0].name,
           VAR_13->schema[0].type);
    return FUNC_5(VAR_14, VAR_13->schema, 1);
  } else if (VAR_13->type == VAR_4) {
    FUNC_0("alter table %s to drop tag column:%s", VAR_14->meterId, VAR_13->schema[0].name);
    return FUNC_8(VAR_14, VAR_13->schema[0].name);
  } else if (VAR_13->type == VAR_2) {
    FUNC_0("alter table %s to change tag column name, old: %s, new: %s", VAR_14->meterId, VAR_13->schema[0].name,
           VAR_13->schema[1].name);
    return FUNC_9(VAR_14, VAR_13->schema[0].name, VAR_13->schema[1].name);
  } else if (VAR_13->type == VAR_5) {
    FUNC_0("alter table %s to modify tag value, tag name:%s", VAR_14->meterId, VAR_13->schema[0].name);
    return FUNC_10(VAR_14, VAR_13->schema[0].name, VAR_13->tagVal);
  } else if (VAR_13->type == VAR_0) {
    FUNC_0("alter table %s to add column:%s, type:%d", VAR_14->meterId, VAR_13->schema[0].name, VAR_13->schema[0].type);
    return FUNC_4(VAR_14, VAR_13->schema, 1);
  } else if (VAR_13->type == VAR_3) {
    FUNC_0("alter table %s to drop column:%s", VAR_14->meterId, VAR_13->schema[0].name);
    return FUNC_7(VAR_14, VAR_13->schema[0].name);
  } else {
    return VAR_6;
  }

  return VAR_10;
}
