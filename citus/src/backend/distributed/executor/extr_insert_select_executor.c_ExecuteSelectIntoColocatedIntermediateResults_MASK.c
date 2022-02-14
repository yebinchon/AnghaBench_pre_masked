
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * shardStateHash; int tuplesSent; } ;
struct TYPE_6__ {int es_processed; int es_param_list_info; } ;
typedef int Query ;
typedef int ParamListInfo ;
typedef int Oid ;
typedef int List ;
typedef int HTAB ;
typedef TYPE_1__ EState ;
typedef int DestReceiver ;
typedef TYPE_2__ CitusCopyDestReceiver ;


 int * FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 (int ,int *,int,TYPE_1__*,int,char*) ;
 char VAR_0 ;
 int FUNC_2 (int *,int ,int *) ;
 int * VAR_1 ;
 int FUNC_3 (int ,int *) ;
 char FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static HTAB *
FUNC_6(Oid VAR_4,
             List *VAR_5,
             Query *VAR_6, EState *VAR_7,
             char *VAR_8)
{
 ParamListInfo VAR_9 = VAR_7->es_param_list_info;
 int VAR_10 = -1;
 List *VAR_11 = VAR_1;
 bool VAR_12 = 0;
 char VAR_13 = 0;
 CitusCopyDestReceiver *VAR_14 = ((void*)0);
 Query *VAR_15 = ((void*)0);

 VAR_13 = FUNC_4(VAR_4);
 if (VAR_13 == VAR_0)
 {
  VAR_12 = 1;
 }


 VAR_11 = FUNC_0(VAR_4,
                VAR_5);
 VAR_10 = FUNC_3(VAR_4,
                 VAR_11);


 VAR_14 = FUNC_1(VAR_4, VAR_11,
             VAR_10, VAR_7,
             VAR_12, VAR_8);






 VAR_15 = FUNC_5(VAR_6);

 FUNC_2(VAR_15, VAR_9, (DestReceiver *) VAR_14);

 VAR_7->es_processed = VAR_14->tuplesSent;

 VAR_3 = VAR_2;

 return VAR_14->shardStateHash;
}
