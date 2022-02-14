
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int result; TYPE_4__* device; } ;
struct request {struct scsi_cmnd* special; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_8__ {TYPE_3__* host; } ;
struct TYPE_7__ {TYPE_2__* hostt; TYPE_1__* transportt; } ;
struct TYPE_6__ {int (* eh_timed_out ) (struct scsi_cmnd*) ;} ;
struct TYPE_5__ {int (* eh_timed_out ) (struct scsi_cmnd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_cmnd*,int ) ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_5 (int) ;

enum blk_eh_timer_return FUNC_6(struct request *VAR_5)
{
 struct scsi_cmnd *VAR_6 = VAR_5->special;
 enum blk_eh_timer_return VAR_7 = VAR_1;

 FUNC_4(VAR_6);
 FUNC_1(VAR_6, VAR_4);

 if (VAR_6->device->host->transportt->eh_timed_out)
  VAR_7 = VAR_6->device->host->transportt->eh_timed_out(VAR_6);
 else if (VAR_6->device->host->hostt->eh_timed_out)
  VAR_7 = VAR_6->device->host->hostt->eh_timed_out(VAR_6);

 if (FUNC_5(VAR_7 == VAR_1 &&
       !FUNC_0(VAR_6, VAR_3))) {
  VAR_6->result |= VAR_2 << 16;
  VAR_7 = VAR_0;
 }

 return VAR_7;
}
