
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fast_task_info {scalar_t__ arg; } ;
struct TYPE_3__ {int (* done_callback ) (struct fast_task_info*,int) ;int (* log_callback ) (struct fast_task_info*,int) ;int filename; } ;
struct TYPE_4__ {TYPE_1__ file_context; } ;
typedef TYPE_1__ StorageFileContext ;
typedef TYPE_2__ StorageClientInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fast_task_info*,int) ;
 int FUNC_1 (struct fast_task_info*,int) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct fast_task_info *VAR_2)
{
 StorageFileContext *VAR_3;
 int VAR_4;

 VAR_3 = &(((StorageClientInfo *)VAR_2->arg)->file_context);
 if (FUNC_2(VAR_3->filename) != 0)
 {
  VAR_4 = VAR_1 != 0 ? VAR_1 : VAR_0;
  VAR_3->log_callback(VAR_2, VAR_4);
 }
 else
 {
  VAR_4 = 0;
 }

 VAR_3->done_callback(VAR_2, VAR_4);
 return VAR_4;
}
