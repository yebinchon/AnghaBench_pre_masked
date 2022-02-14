
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int workerPort; int workerName; int isActive; } ;
typedef TYPE_1__ WorkerNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 TYPE_1__* FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,char*,int ) ;
 int FUNC_16 (char*,...) ;
 char* FUNC_17 (char*) ;

void
FUNC_18(char *VAR_4, int32 VAR_5)
{
 WorkerNode *VAR_6 = ((void*)0);
 char *VAR_7 = FUNC_17(VAR_4);


 bool VAR_8 = 1;

 FUNC_2();
 FUNC_4();
 FUNC_3();
 FUNC_0(VAR_1);

 FUNC_11(1, "start_metadata_sync_to_node");

 FUNC_6(FUNC_1(), VAR_2);

 VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
 {
  FUNC_13(VAR_1, (FUNC_14(VAR_0),
      FUNC_16("you cannot sync metadata to a non-existent node"),
      FUNC_15("First, add the node with SELECT master_add_node"
        "(%s,%d)", VAR_7, VAR_5)));
 }

 if (!VAR_6->isActive)
 {
  FUNC_13(VAR_1, (FUNC_14(VAR_0),
      FUNC_16("you cannot sync metadata to an inactive node"),
      FUNC_15("First, activate the node with "
        "SELECT master_activate_node(%s,%d)",
        VAR_7, VAR_5)));
 }

 if (FUNC_9(VAR_6))
 {
  FUNC_13(VAR_3, (FUNC_16("%s:%d is the coordinator and already contains "
        "metadata, skipping syncing the metadata",
        VAR_4, VAR_5)));
  return;
 }

 FUNC_7(VAR_4, VAR_5, 1);

 if (!FUNC_10(VAR_6))
 {




  return;
 }

 FUNC_12(VAR_6, VAR_8);
 FUNC_8(VAR_6->workerName, VAR_6->workerPort, 1);
}
