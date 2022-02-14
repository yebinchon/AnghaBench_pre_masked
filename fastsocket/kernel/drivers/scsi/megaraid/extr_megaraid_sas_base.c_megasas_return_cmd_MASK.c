
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct megasas_instance {int cmd_pool_lock; int cmd_pool; TYPE_1__* pdev; } ;
struct megasas_cmd {int list; TYPE_3__* frame; scalar_t__ frame_count; int * scmd; } ;
struct TYPE_5__ {int cmd; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
struct TYPE_4__ {scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

inline void
FUNC_3(struct megasas_instance *VAR_5, struct megasas_cmd *VAR_6)
{
 unsigned long VAR_7;

 FUNC_1(&VAR_5->cmd_pool_lock, VAR_7);

 VAR_6->scmd = ((void*)0);
 VAR_6->frame_count = 0;
 if ((VAR_5->pdev->device != VAR_2) &&
     (VAR_5->pdev->device != VAR_3) &&
     (VAR_5->pdev->device != VAR_1) &&
     (VAR_4))
  VAR_6->frame->hdr.cmd = VAR_0;
 FUNC_0(&VAR_6->list, &VAR_5->cmd_pool);

 FUNC_2(&VAR_5->cmd_pool_lock, VAR_7);
}
