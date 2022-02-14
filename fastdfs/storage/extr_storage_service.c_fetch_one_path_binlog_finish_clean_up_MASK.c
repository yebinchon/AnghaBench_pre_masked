
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fast_task_info {scalar_t__ arg; } ;
struct TYPE_2__ {int * extra_arg; } ;
typedef TYPE_1__ StorageClientInfo ;
typedef int StorageBinLogReader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct fast_task_info *VAR_1)
{
 StorageClientInfo *VAR_2;
 StorageBinLogReader *VAR_3;
 char VAR_4[VAR_0];

 VAR_2 = (StorageClientInfo *)VAR_1->arg;
 VAR_3 = (StorageBinLogReader *)VAR_2->extra_arg;
 if (VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_2->extra_arg = ((void*)0);

    FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3, VAR_4);
 if (FUNC_0(VAR_4))
 {
  FUNC_5(VAR_4);
 }

 FUNC_1(VAR_3);
}
