
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
typedef int TaskTracker ;
struct TYPE_7__ {int currentNodeIndex; } ;
typedef TYPE_1__ TaskExecution ;
struct TYPE_8__ {int * taskPlacementList; } ;
typedef TYPE_2__ Task ;
struct TYPE_9__ {char* nodeName; int nodePort; } ;
typedef TYPE_3__ ShardPlacement ;
typedef int List ;
typedef int HTAB ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char*,int ) ;
 TYPE_3__* FUNC_2 (int *,int ) ;

__attribute__((used)) static TaskTracker *
FUNC_3(HTAB *VAR_0, Task *VAR_1, TaskExecution *VAR_2)
{
 List *VAR_3 = VAR_1->taskPlacementList;
 uint32 VAR_4 = VAR_2->currentNodeIndex;

 ShardPlacement *VAR_5 = FUNC_2(VAR_3, VAR_4);
 char *VAR_6 = VAR_5->nodeName;
 uint32 VAR_7 = VAR_5->nodePort;


 TaskTracker *VAR_8 = FUNC_1(VAR_0, VAR_6, VAR_7);
 FUNC_0(VAR_8 != ((void*)0));

 return VAR_8;
}
