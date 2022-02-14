
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; scalar_t__ jiffies_at_alloc; } ;
struct megasas_instance {int flag; TYPE_3__* host; int last_time; int throttlequeuedepth; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_6__ {int host_lock; int can_queue; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static enum
blk_eh_timer_return FUNC_3(struct scsi_cmnd *VAR_6)
{
 struct megasas_instance *VAR_7;
 unsigned long VAR_8;

 if (FUNC_2(VAR_5, VAR_6->jiffies_at_alloc +
    (VAR_3 * 2) * VAR_2)) {
  return VAR_0;
 }

 VAR_7 = (struct megasas_instance *)VAR_6->device->host->hostdata;
 if (!(VAR_7->flag & VAR_4)) {

  FUNC_0(VAR_7->host->host_lock, VAR_8);

  VAR_7->host->can_queue = VAR_7->throttlequeuedepth;
  VAR_7->last_time = VAR_5;
  VAR_7->flag |= VAR_4;

  FUNC_1(VAR_7->host->host_lock, VAR_8);
 }
 return VAR_1;
}
