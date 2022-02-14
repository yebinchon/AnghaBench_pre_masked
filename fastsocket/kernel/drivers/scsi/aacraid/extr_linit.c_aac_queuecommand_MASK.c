
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_7__ {scalar_t__ phase; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_3__ SCp; TYPE_4__* device; } ;
struct fib {struct scsi_cmnd* callback_data; TYPE_2__* hw_fib_va; } ;
struct aac_dev {struct fib* fibs; } ;
struct Scsi_Host {size_t can_queue; scalar_t__ hostdata; } ;
struct TYPE_8__ {struct Scsi_Host* host; } ;
struct TYPE_5__ {scalar_t__ XferState; } ;
struct TYPE_6__ {TYPE_1__ header; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd *VAR_4, void (*VAR_5)(struct scsi_cmnd *))
{
 struct Scsi_Host *VAR_6 = VAR_4->device->host;
 struct aac_dev *VAR_7 = (struct aac_dev *)VAR_6->hostdata;
 u32 VAR_8 = 0;
 VAR_4->scsi_done = VAR_5;
 for (; VAR_8 < (VAR_6->can_queue + VAR_0); ++VAR_8) {
  struct fib * VAR_9 = &VAR_7->fibs[VAR_8];
  struct scsi_cmnd * VAR_10;
  if (VAR_9->hw_fib_va->header.XferState &&
      ((VAR_10 = VAR_9->callback_data)) &&
      (VAR_10 == VAR_4) &&
      (VAR_4->SCp.phase == VAR_1))
   return 0;
 }
 VAR_4->SCp.phase = VAR_2;
 return (FUNC_0(VAR_4) ? VAR_3 : 0);
}
