
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int phase; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; TYPE_3__ SCp; TYPE_2__* device; } ;
struct TYPE_11__ {int * state; struct scsi_cmnd** srb; int flags; } ;
struct TYPE_9__ {TYPE_1__* host; } ;
struct TYPE_8__ {scalar_t__ hostdata; } ;
typedef TYPE_4__ TW_Device_Extension ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int*) ;
 int FUNC_3 (TYPE_4__*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_5, void (*VAR_6)(struct scsi_cmnd *))
{
 int VAR_7, VAR_8;
 TW_Device_Extension *VAR_9 = (TW_Device_Extension *)VAR_5->device->host->hostdata;


 if (FUNC_0(VAR_2, &VAR_9->flags)) {
  VAR_8 = VAR_1;
  goto out;
 }


 VAR_5->scsi_done = VAR_6;


 FUNC_2(VAR_9, &VAR_7);


 VAR_9->srb[VAR_7] = VAR_5;


 VAR_5->SCp.phase = VAR_3;

 VAR_8 = FUNC_3(VAR_9, VAR_7, ((void*)0), 0, ((void*)0));
 if (VAR_8) {
  VAR_9->state[VAR_7] = VAR_4;
  FUNC_1(VAR_9, VAR_7);
  VAR_5->result = (VAR_0 << 16);
  VAR_6(VAR_5);
  VAR_8 = 0;
 }
out:
 return VAR_8;
}
