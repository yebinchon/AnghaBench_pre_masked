
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int phase; } ;
struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_4__ SCp; TYPE_2__* device; } ;
struct TYPE_11__ {scalar_t__ working_srl; } ;
struct TYPE_13__ {int * state; struct scsi_cmnd** srb; TYPE_3__ tw_compat_info; int flags; } ;
struct TYPE_10__ {scalar_t__ lun; TYPE_1__* host; } ;
struct TYPE_9__ {scalar_t__ hostdata; } ;
typedef TYPE_5__ TW_Device_Extension ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int*) ;
 int FUNC_3 (TYPE_5__*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_6, void (*VAR_7)(struct scsi_cmnd *))
{
 int VAR_8, VAR_9;
 TW_Device_Extension *VAR_10 = (TW_Device_Extension *)VAR_6->device->host->hostdata;


 if (FUNC_0(VAR_3, &VAR_10->flags)) {
  VAR_9 = 128;
  goto out;
 }


 if ((VAR_6->device->lun != 0) && (VAR_10->tw_compat_info.working_srl < VAR_2)) {
  VAR_6->result = (VAR_0 << 16);
  VAR_7(VAR_6);
  VAR_9 = 0;
  goto out;
 }


 VAR_6->scsi_done = VAR_7;


 FUNC_2(VAR_10, &VAR_8);


 VAR_10->srb[VAR_8] = VAR_6;


 VAR_6->SCp.phase = VAR_4;

 VAR_9 = FUNC_3(VAR_10, VAR_8, ((void*)0), 0, ((void*)0));
 switch (VAR_9) {
 case 128:
  FUNC_1(VAR_10, VAR_8);
  break;
 case 1:
  VAR_10->state[VAR_8] = VAR_5;
  FUNC_1(VAR_10, VAR_8);
  VAR_6->result = (VAR_1 << 16);
  VAR_7(VAR_6);
  VAR_9 = 0;
 }
out:
 return VAR_9;
}
