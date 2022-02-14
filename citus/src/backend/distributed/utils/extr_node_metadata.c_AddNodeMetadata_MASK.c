
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int int32 ;
struct TYPE_8__ {int nodeId; } ;
typedef TYPE_1__ WorkerNode ;
struct TYPE_9__ {scalar_t__ groupId; int shouldHaveShards; int hasMetadata; scalar_t__ nodeRole; int nodeCluster; } ;
typedef TYPE_2__ NodeMetadata ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int,char*,int ,TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,int ) ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (scalar_t__,int *) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,...) ;
 int * FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_17(char *VAR_8, int32 VAR_9,
    NodeMetadata *VAR_10,
    bool *VAR_11)
{
 int VAR_12 = 0;
 WorkerNode *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);
 uint32 VAR_15 = 0;

 FUNC_2();

 *VAR_11 = 0;






 FUNC_7(FUNC_1(), VAR_2);

 VAR_13 = FUNC_3(VAR_8, VAR_9);
 if (VAR_13 != ((void*)0))
 {

  *VAR_11 = 1;

  return VAR_13->nodeId;
 }


 if (VAR_10->groupId == VAR_3)
 {
  VAR_10->groupId = FUNC_4();
 }


 if (VAR_10->groupId == VAR_0)
 {
  VAR_10->shouldHaveShards = 0;
  VAR_10->hasMetadata = 1;
 }


 if (VAR_10->nodeRole != VAR_4 && VAR_10->nodeRole ==
  FUNC_11())
 {
  WorkerNode *VAR_16 = FUNC_10(VAR_10->groupId,
                 ((void*)0));

  if (VAR_16 != ((void*)0))
  {
   FUNC_13(VAR_1, (FUNC_14("group %d already has a primary node",
           VAR_10->groupId)));
  }
 }

 if (VAR_10->nodeRole == FUNC_11())
 {
  if (FUNC_16(VAR_10->nodeCluster,
     VAR_6,
     VAR_7) != 0)
  {
   FUNC_13(VAR_1, (FUNC_14("primaries must be added to the default cluster")));
  }
 }


 VAR_12 = FUNC_5();

 FUNC_6(VAR_12, VAR_8, VAR_9, VAR_10);

 VAR_13 = FUNC_3(VAR_8, VAR_9);


 VAR_14 = FUNC_8(VAR_13->nodeId);
 FUNC_12(VAR_5, VAR_14);


 VAR_15 = FUNC_0();
 if (VAR_15 != 0)
 {
  List *VAR_17 = FUNC_15(VAR_13);
  char *VAR_18 = FUNC_9(VAR_17);

  FUNC_12(VAR_5, VAR_18);
 }

 return VAR_13->nodeId;
}
