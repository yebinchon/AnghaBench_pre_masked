
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ReindexIndexCallbackState {int concurrent; void* locked_table_oid; } ;
struct TYPE_12__ {int * schemaname; } ;
struct TYPE_11__ {int concurrentIndexCmd; char const* commandString; int taskList; void* targetRelationId; } ;
struct TYPE_10__ {int concurrent; scalar_t__ kind; TYPE_5__* relation; } ;
typedef int * Relation ;
typedef TYPE_1__ ReindexStmt ;
typedef void* Oid ;
typedef int * MemoryContext ;
typedef int List ;
typedef int LOCKMODE ;
typedef TYPE_2__ DDLJob ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,TYPE_1__*) ;
 int * FUNC_2 (TYPE_5__*) ;
 void* FUNC_3 (void*,int) ;
 void* VAR_1 ;
 int FUNC_4 (void*) ;
 int * FUNC_5 (int *,char*) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_6 (TYPE_5__*,int ,int ,int ,struct ReindexIndexCallbackState*) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int VAR_8 ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (void*,int ) ;
 int * FUNC_14 (TYPE_2__*) ;
 TYPE_2__* FUNC_15 (int) ;

List *
FUNC_16(ReindexStmt *VAR_9, const char *VAR_10)
{
 List *VAR_11 = VAR_2;






 if (VAR_9->relation != ((void*)0))
 {
  Relation VAR_12 = ((void*)0);
  Oid VAR_13 = VAR_1;
  bool VAR_14 = 0;




  LOCKMODE VAR_15 = VAR_0;

  MemoryContext VAR_16 = ((void*)0);

  FUNC_0(VAR_9->kind == VAR_4 ||
      VAR_9->kind == VAR_5);

  if (VAR_9->kind == VAR_4)
  {
   Oid VAR_17;
   struct ReindexIndexCallbackState VAR_18;



   VAR_18.locked_table_oid = VAR_1;

   VAR_17 = FUNC_6(VAR_9->relation,
             VAR_15, 0,
             VAR_6,
             &VAR_18);
   VAR_12 = FUNC_13(VAR_17, VAR_3);
   VAR_13 = FUNC_3(VAR_17, 0);
  }
  else
  {
   FUNC_6(VAR_9->relation, VAR_15, 0,
          VAR_7, ((void*)0));

   VAR_12 = FUNC_11(VAR_9->relation, VAR_3);
   VAR_13 = FUNC_8(VAR_12);
  }

  VAR_14 = FUNC_4(VAR_13);

  if (VAR_9->relation->schemaname == ((void*)0))
  {







   char *VAR_19 = FUNC_9(FUNC_7(VAR_12));


   VAR_16 = FUNC_2(VAR_9->relation);
   VAR_9->relation->schemaname = FUNC_5(VAR_16,
                   VAR_19);
  }

  if (VAR_9->kind == VAR_4)
  {
   FUNC_12(VAR_12, VAR_3);
  }
  else
  {
   FUNC_10(VAR_12, VAR_3);
  }

  if (VAR_14)
  {
   DDLJob *VAR_20 = FUNC_15(sizeof(DDLJob));
   VAR_20->targetRelationId = VAR_13;



   VAR_20->concurrentIndexCmd = 0;

   VAR_20->commandString = VAR_10;
   VAR_20->taskList = FUNC_1(VAR_13, VAR_9);

   VAR_11 = FUNC_14(VAR_20);
  }
 }

 return VAR_11;
}
