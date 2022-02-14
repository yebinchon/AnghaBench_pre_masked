
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fast_task_info {scalar_t__ arg; } ;
struct TYPE_3__ {int filename; } ;
struct TYPE_4__ {TYPE_1__ file_context; } ;
typedef TYPE_1__ StorageFileContext ;
typedef TYPE_2__ StorageClientInfo ;


 int FUNC_0 (int ) ;

int FUNC_1(struct fast_task_info *VAR_0)
{
 StorageFileContext *VAR_1;

 VAR_1 = &(((StorageClientInfo *)VAR_0->arg)->file_context);
 return FUNC_0(VAR_1->filename);
}
