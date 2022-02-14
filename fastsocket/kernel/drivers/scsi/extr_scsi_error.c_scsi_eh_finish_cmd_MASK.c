
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int eh_entry; scalar_t__ eh_eflags; TYPE_2__* device; } ;
struct list_head {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_failed; } ;


 int FUNC_0 (int *,struct list_head*) ;

void FUNC_1(struct scsi_cmnd *VAR_0, struct list_head *VAR_1)
{
 VAR_0->device->host->host_failed--;
 VAR_0->eh_eflags = 0;
 FUNC_0(&VAR_0->eh_entry, VAR_1);
}
