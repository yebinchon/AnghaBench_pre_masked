
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int concurrentIndexCmd; char const* commandString; int taskList; int targetRelationId; } ;
struct TYPE_10__ {int renameType; int missing_ok; int relation; } ;
typedef TYPE_1__ RenameStmt ;
typedef int Oid ;
typedef int List ;
typedef TYPE_2__ DDLJob ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int * VAR_2 ;






 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int * FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int) ;

List *
FUNC_11(RenameStmt *VAR_3, const char *VAR_4)
{
 Oid VAR_5 = VAR_1;
 Oid VAR_6 = VAR_1;
 bool VAR_7 = 0;
 DDLJob *VAR_8 = ((void*)0);





 if (!FUNC_3(VAR_3) &&
  !FUNC_5(VAR_3) &&
  !FUNC_6(VAR_3))
 {
  return VAR_2;
 }






 VAR_5 = FUNC_8(VAR_3->relation,
          VAR_0,
          VAR_3->missing_ok);





 if (!FUNC_7(VAR_5))
 {
  return VAR_2;
 }


 switch (VAR_3->renameType)
 {
  case 128:
  case 132:
  case 133:
  case 129:
  case 130:
  {

   VAR_6 = VAR_5;
   break;
  }

  case 131:
  {





   VAR_6 = FUNC_2(VAR_5, 0);
   break;
  }

  default:






   return VAR_2;
 }

 VAR_7 = FUNC_4(VAR_6);
 if (!VAR_7)
 {
  return VAR_2;
 }






 FUNC_1(VAR_3);

 VAR_8 = FUNC_10(sizeof(DDLJob));
 VAR_8->targetRelationId = VAR_6;
 VAR_8->concurrentIndexCmd = 0;
 VAR_8->commandString = VAR_4;
 VAR_8->taskList = FUNC_0(VAR_6, VAR_4);

 return FUNC_9(VAR_8);
}
