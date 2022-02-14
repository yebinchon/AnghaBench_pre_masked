
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fast_task_info {scalar_t__ length; scalar_t__ arg; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ buff_offset; scalar_t__ end; int (* continue_callback ) (struct fast_task_info*) ;int (* done_callback ) (struct fast_task_info*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ file_context; } ;
typedef TYPE_1__ StorageFileContext ;
typedef TYPE_2__ StorageClientInfo ;


 int FUNC_0 (struct fast_task_info*,int ) ;
 int FUNC_1 (struct fast_task_info*) ;

int FUNC_2(struct fast_task_info *VAR_0)
{
 StorageFileContext *VAR_1;

 VAR_1 = &(((StorageClientInfo *)VAR_0->arg)->file_context);
 VAR_1->offset+=VAR_0->length - VAR_1->buff_offset;
 if (VAR_1->offset >= VAR_1->end)
 {
  VAR_1->done_callback(VAR_0, 0);
 }
 else
 {
  VAR_1->buff_offset = 0;
        VAR_1->continue_callback(VAR_0);
 }

 return 0;
}
