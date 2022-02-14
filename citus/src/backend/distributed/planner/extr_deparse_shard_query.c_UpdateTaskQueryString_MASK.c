
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int queryString; int * relationShardList; int anchorShardId; int * rowValuesLists; } ;
typedef TYPE_1__ Task ;
struct TYPE_16__ {scalar_t__ commandType; } ;
struct TYPE_15__ {scalar_t__ rtekind; int * values_lists; } ;
struct TYPE_14__ {int data; } ;
typedef TYPE_2__* StringInfo ;
typedef TYPE_3__ RangeTblEntry ;
typedef TYPE_4__ Query ;
typedef int Oid ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_4__*,int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(Query *VAR_3, Oid VAR_4, RangeTblEntry *VAR_5,
       Task *VAR_6)
{
 StringInfo VAR_7 = FUNC_3();
 List *VAR_8 = VAR_1;

 if (VAR_5 != ((void*)0))
 {
  FUNC_0(VAR_5->rtekind == VAR_2);
  FUNC_0(VAR_6->rowValuesLists != ((void*)0));

  VAR_8 = VAR_5->values_lists;
  VAR_5->values_lists = VAR_6->rowValuesLists;
 }







 if (VAR_3->commandType == VAR_0)
 {
  FUNC_2(VAR_3, VAR_4, VAR_6->anchorShardId, VAR_7);
 }
 else
 {
  List *VAR_9 = VAR_6->relationShardList;
  FUNC_1((Node *) VAR_3, VAR_9);

  FUNC_4(VAR_3, VAR_7);
 }

 if (VAR_5 != ((void*)0))
 {
  VAR_5->values_lists = VAR_8;
 }

 VAR_6->queryString = VAR_7->data;
}
