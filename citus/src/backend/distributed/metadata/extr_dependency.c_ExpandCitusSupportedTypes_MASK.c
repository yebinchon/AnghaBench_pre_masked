
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int classid; int refclassid; void* deptype; int refobjsubid; int refobjid; int objsubid; int objid; } ;
struct TYPE_6__ {int classId; int objectId; int objectSubId; } ;
typedef int ObjectAddressCollector ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;
typedef TYPE_2__* Form_pg_depend ;
typedef int FormData_pg_depend ;


 void* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static List *
FUNC_6(ObjectAddressCollector *VAR_4, const ObjectAddress *VAR_5)
{
 List *VAR_6 = VAR_1;

 switch (VAR_5->classId)
 {
  case 128:
  {





   if (FUNC_2(VAR_5->objectId) == VAR_3)
   {
    Form_pg_depend VAR_7 = FUNC_4(sizeof(FormData_pg_depend));
    VAR_7->classid = VAR_5->classId;
    VAR_7->objid = VAR_5->objectId;
    VAR_7->objsubid = VAR_5->objectSubId;


    VAR_7->refclassid = VAR_2;
    VAR_7->refobjid = FUNC_1(VAR_5->objectId);
    VAR_7->refobjsubid = 0;

    VAR_7->deptype = VAR_0;

    VAR_6 = FUNC_3(VAR_6, VAR_7);
   }







   if (FUNC_5(VAR_5->objectId))
   {
    Form_pg_depend VAR_8 = FUNC_4(sizeof(FormData_pg_depend));
    VAR_8->classid = VAR_5->classId;
    VAR_8->objid = VAR_5->objectId;
    VAR_8->objsubid = VAR_5->objectSubId;


    VAR_8->refclassid = 128;
    VAR_8->refobjid = FUNC_0(VAR_5->objectId);
    VAR_8->refobjsubid = 0;

    VAR_8->deptype = VAR_0;

    VAR_6 = FUNC_3(VAR_6, VAR_8);
   }

   break;
  }

  default:
  {

   break;
  }
 }
 return VAR_6;
}
