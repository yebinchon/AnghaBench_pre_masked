
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fast_task_info {scalar_t__ arg; } ;
struct TYPE_3__ {int fd; int done_callback; int log_callback; int op; int dio_thread_index; } ;
struct TYPE_4__ {TYPE_1__ file_context; } ;
typedef TYPE_1__ StorageFileContext ;
typedef TYPE_2__ StorageClientInfo ;
typedef int FileDealDoneCallback ;
typedef int DeleteFileLogCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fast_task_info*,int const,int ) ;
 int FUNC_1 (struct fast_task_info*) ;

__attribute__((used)) static int FUNC_2(struct fast_task_info *VAR_2, DeleteFileLogCallback VAR_3, FileDealDoneCallback VAR_4, const int VAR_5)



{
 StorageClientInfo *VAR_6;
 StorageFileContext *VAR_7;
 int VAR_8;

 VAR_6 = (StorageClientInfo *)VAR_2->arg;
 VAR_7 = &(VAR_6->file_context);

 VAR_7->fd = -1;
 VAR_7->op = VAR_0;
 VAR_7->dio_thread_index = FUNC_0( VAR_2, VAR_5, VAR_7->op);

 VAR_7->log_callback = VAR_3;
 VAR_7->done_callback = VAR_4;

 if ((VAR_8=FUNC_1(VAR_2)) != 0)
 {
  return VAR_8;
 }

 return VAR_1;
}
