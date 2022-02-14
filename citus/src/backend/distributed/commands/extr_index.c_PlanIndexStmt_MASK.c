
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char* schemaname; } ;
struct TYPE_11__ {char const* commandString; int taskList; scalar_t__ concurrentIndexCmd; int targetRelationId; } ;
struct TYPE_10__ {char* idxname; scalar_t__ concurrent; TYPE_5__* relation; } ;
typedef int * Relation ;
typedef int Oid ;
typedef int * MemoryContext ;
typedef int List ;
typedef int LOCKMODE ;
typedef TYPE_1__ IndexStmt ;
typedef TYPE_2__ DDLJob ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int *,char*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (TYPE_5__*,int ) ;
 int * FUNC_13 (TYPE_2__*) ;
 TYPE_2__* FUNC_14 (int) ;

List *
FUNC_15(IndexStmt *VAR_5, const char *VAR_6)
{
 List *VAR_7 = VAR_1;






 if (VAR_5->relation != ((void*)0))
 {
  Relation VAR_8 = ((void*)0);
  Oid VAR_9 = VAR_0;
  bool VAR_10 = 0;
  LOCKMODE VAR_11 = VAR_3;
  MemoryContext VAR_12 = ((void*)0);






  if (VAR_5->concurrent)
  {
   VAR_11 = VAR_4;
  }







  VAR_8 = FUNC_12(VAR_5->relation, VAR_11);
  VAR_9 = FUNC_7(VAR_8);

  VAR_10 = FUNC_3(VAR_9);

  if (VAR_5->relation->schemaname == ((void*)0))
  {







   char *VAR_13 = FUNC_8(FUNC_6(VAR_8));


   VAR_12 = FUNC_2(VAR_5->relation);
   VAR_5->relation->schemaname = FUNC_4(
    VAR_12, VAR_13);
  }

  FUNC_11(VAR_8, VAR_2);

  if (VAR_10)
  {
   Oid VAR_14 = VAR_0;
   Oid VAR_15 = VAR_0;
   char *VAR_16 = VAR_5->idxname;
   char *VAR_17 = VAR_5->relation->schemaname;

   FUNC_1(VAR_5);

   VAR_14 = FUNC_9(VAR_17, 0);
   VAR_15 = FUNC_10(VAR_16, VAR_14);


   if (!FUNC_5(VAR_15))
   {
    DDLJob *VAR_18 = FUNC_14(sizeof(DDLJob));
    VAR_18->targetRelationId = VAR_9;
    VAR_18->concurrentIndexCmd = VAR_5->concurrent;
    VAR_18->commandString = VAR_6;
    VAR_18->taskList = FUNC_0(VAR_9, VAR_5);

    VAR_7 = FUNC_13(VAR_18);
   }
  }
 }

 return VAR_7;
}
