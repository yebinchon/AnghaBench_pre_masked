
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int int32 ;
struct TYPE_8__ {int relationId; int shardId; } ;
struct TYPE_7__ {char* nodeName; scalar_t__ shardState; int placementId; int groupId; int nodePort; } ;
typedef TYPE_1__ ShardPlacement ;
typedef TYPE_2__ ShardInterval ;
typedef int List ;


 int * FUNC_0 (TYPE_2__*,char*,int ,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,scalar_t__,int ,int ) ;
 int VAR_1 ;
 char* FUNC_6 (int ,int ,scalar_t__,int ,int ) ;
 TYPE_1__* FUNC_7 (int *,char*,int,int) ;
 int FUNC_8 (char*,int,char*,int *) ;
 int FUNC_9 (int ,char*) ;
 int * FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int ,char*,int) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17(ShardInterval *VAR_3, char *VAR_4, int VAR_5)
{
 uint64 VAR_6 = VAR_3->shardId;

 bool VAR_7 = 0;
 ShardPlacement *VAR_8 = FUNC_2(VAR_6, VAR_7);
 char *VAR_9 = VAR_8->nodeName;
 uint32 VAR_10 = VAR_8->nodePort;
 bool VAR_11 = 1;
 List *VAR_12 =
  FUNC_0(VAR_3, VAR_9, VAR_10, VAR_11);

 List *VAR_13 = FUNC_10(VAR_6);
 bool VAR_14 = 1;
 ShardPlacement *VAR_15 = FUNC_7(VAR_13,
                 VAR_4, VAR_5,
                 VAR_14);
 char *VAR_16 = FUNC_12(VAR_3->relationId);
 if (VAR_15 == ((void*)0) || VAR_15->shardState != VAR_0)
 {
  uint64 VAR_17 = 0;
  int32 VAR_18 = 0;

  FUNC_14(VAR_1, (FUNC_15("Replicating reference table \"%s\" to the node %s:%d",
        FUNC_16(VAR_3->relationId), VAR_4,
        VAR_5)));

  FUNC_1();
  FUNC_8(VAR_4, VAR_5, VAR_16,
               VAR_12);
  if (VAR_15 == ((void*)0))
  {
   VAR_18 = FUNC_4(VAR_4, VAR_5);

   VAR_17 = FUNC_3();
   FUNC_5(VAR_6, VAR_17, VAR_0, 0, VAR_18);
  }
  else
  {
   VAR_18 = VAR_15->groupId;
   VAR_17 = VAR_15->placementId;
   FUNC_13(VAR_17, VAR_0);
  }
  if (FUNC_11(VAR_3->relationId))
  {
   char *VAR_19 = FUNC_6(VAR_6, VAR_17,
               VAR_0, 0,
               VAR_18);

   FUNC_9(VAR_2, VAR_19);
  }
 }
}
