
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fast_task_info {scalar_t__ arg; } ;
struct TYPE_5__ {int trunk_info; } ;
struct TYPE_6__ {TYPE_1__ upload; } ;
struct TYPE_7__ {int (* done_callback ) (struct fast_task_info*,int) ;int (* log_callback ) (struct fast_task_info*,int) ;TYPE_2__ extra_info; int filename; } ;
struct TYPE_8__ {TYPE_3__ file_context; } ;
typedef TYPE_3__ StorageFileContext ;
typedef TYPE_4__ StorageClientInfo ;


 int FUNC_0 (struct fast_task_info*,int) ;
 int FUNC_1 (struct fast_task_info*,int) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct fast_task_info *VAR_0)
{
 StorageFileContext *VAR_1;
 int VAR_2;

 VAR_1 = &(((StorageClientInfo *)VAR_0->arg)->file_context);

 if ((VAR_2=FUNC_2(VAR_1->filename, &(VAR_1->extra_info.upload.trunk_info))) != 0)

 {
  VAR_1->log_callback(VAR_0, VAR_2);
 }

 VAR_1->done_callback(VAR_0, VAR_2);
 return VAR_2;
}
