
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_6__ {int partitionColumnIndex; int tableMetadata; int distributedRelationId; int * columnCoercionPaths; } ;
struct TYPE_5__ {int shardId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef int Datum ;
typedef int CopyCoercionData ;
typedef TYPE_2__ CitusCopyDestReceiver ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static uint64
FUNC_9(CitusCopyDestReceiver *VAR_4, Datum *VAR_5, bool *VAR_6)
{
 int VAR_7 = VAR_4->partitionColumnIndex;
 Datum VAR_8 = 0;
 CopyCoercionData *VAR_9 = VAR_4->columnCoercionPaths;
 ShardInterval *VAR_10 = ((void*)0);
 if (VAR_7 != VAR_3)
 {
  CopyCoercionData *VAR_11 = &VAR_9[VAR_7];

  if (VAR_6[VAR_7])
  {
   Oid VAR_12 = VAR_4->distributedRelationId;
   char *VAR_13 = FUNC_6(VAR_12);
   Oid VAR_14 = FUNC_7(VAR_12);
   char *VAR_15 = FUNC_5(VAR_14);
   char *VAR_16 = FUNC_8(VAR_15,
                  VAR_13);

   FUNC_2(VAR_2, (FUNC_3(VAR_0),
       FUNC_4("the partition column of table %s cannot be NULL",
           VAR_16)));
  }


  VAR_8 = VAR_5[VAR_7];


  VAR_8 = FUNC_0(VAR_8, VAR_11);
 }
 VAR_10 = FUNC_1(VAR_8, VAR_4->tableMetadata);
 if (VAR_10 == ((void*)0))
 {
  FUNC_2(VAR_2, (FUNC_3(VAR_1),
      FUNC_4("could not find shard for partition column "
          "value")));
 }

 return VAR_10->shardId;
}
