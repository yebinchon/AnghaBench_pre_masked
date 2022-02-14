
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct storage_dio_context {int queue; } ;
struct fast_task_info {scalar_t__ arg; } ;
struct TYPE_3__ {int dio_thread_index; } ;
struct TYPE_4__ {int stage; TYPE_1__ file_context; } ;
typedef TYPE_1__ StorageFileContext ;
typedef TYPE_2__ StorageClientInfo ;


 int VAR_0 ;
 int FUNC_0 (struct fast_task_info*) ;
 int FUNC_1 (int *,struct fast_task_info*) ;
 struct storage_dio_context* VAR_1 ;

int FUNC_2(struct fast_task_info *VAR_2)
{
    StorageClientInfo *VAR_3;
 StorageFileContext *VAR_4;
 struct storage_dio_context *VAR_5;
 int VAR_6;

    VAR_3 = (StorageClientInfo *)VAR_2->arg;
 VAR_4 = &(VAR_3->file_context);
 VAR_5 = VAR_1 + VAR_4->dio_thread_index;

 VAR_3->stage |= VAR_0;
 if ((VAR_6=FUNC_1(&(VAR_5->queue), VAR_2)) != 0)
 {
  FUNC_0(VAR_2);
  return VAR_6;
 }

 return 0;
}
