
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
struct TYPE_7__ {int fd; scalar_t__ offset; scalar_t__ start; scalar_t__ end; TYPE_2__ extra_info; int filename; } ;
struct TYPE_8__ {TYPE_3__ file_context; } ;
typedef TYPE_3__ StorageFileContext ;
typedef TYPE_4__ StorageClientInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct fast_task_info *VAR_0)
{
 StorageFileContext *VAR_1;
 int VAR_2;

 VAR_1 = &(((StorageClientInfo *)VAR_0->arg)->file_context);
 if (VAR_1->fd > 0)
 {
  FUNC_0(VAR_1->fd);
  VAR_1->fd = -1;




  if (VAR_1->offset > VAR_1->start && VAR_1->offset < VAR_1->end)

  {
   if ((VAR_2=FUNC_1(VAR_1->filename, &(VAR_1->extra_info.upload.trunk_info))) != 0)

   {
   }
  }
 }
}
