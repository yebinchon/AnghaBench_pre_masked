
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_7__ {char* nodeName; int nodeId; int nodePort; int placementId; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ ShardPlacement ;
typedef int PGresult ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*) ;
 int * FUNC_13 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_14 () ;
 int VAR_4 ;
 scalar_t__ FUNC_15 (int) ;
 char* FUNC_16 (char*) ;

__attribute__((used)) static List *
FUNC_17(uint64 VAR_5)
{
 List *VAR_6 = VAR_2;
 PGresult *VAR_7 = ((void*)0);
 bool VAR_8 = 1;

 StringInfo VAR_9 = FUNC_14();
 FUNC_8(VAR_9, VAR_1, VAR_5);

 if (!FUNC_7(VAR_4, VAR_9->data))
 {
  FUNC_6(VAR_4, VAR_0);
 }
 VAR_7 = FUNC_1(VAR_4, VAR_8);
 if (FUNC_5(VAR_7) == VAR_3)
 {
  int VAR_10 = FUNC_4(VAR_7);
  int VAR_11 = 0;

  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  {
   char *VAR_12 = FUNC_3(VAR_7, VAR_11, 0);
   char *VAR_13 = FUNC_16(FUNC_3(VAR_7, VAR_11, 1));
   char *VAR_14 = FUNC_16(FUNC_3(VAR_7, VAR_11, 2));
   uint32 VAR_15 = FUNC_9(VAR_14);
   uint64 VAR_16 = FUNC_10(VAR_12);

   ShardPlacement *VAR_17 =
    (ShardPlacement *) FUNC_15(sizeof(ShardPlacement));

   VAR_17->placementId = VAR_16;
   VAR_17->nodeName = VAR_13;
   VAR_17->nodePort = VAR_15;






   VAR_17->nodeId = -1;

   VAR_6 = FUNC_13(VAR_6, VAR_17);
  }
 }
 else
 {
  FUNC_11(VAR_0, (FUNC_12("could not get shard placements from the master node")));
 }

 FUNC_2(VAR_7);
 VAR_7 = FUNC_1(VAR_4, VAR_8);
 FUNC_0(!VAR_7);

 return VAR_6;
}
