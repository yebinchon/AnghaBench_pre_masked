
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {TYPE_3__* device; } ;
struct aic_dev_data {int dummy; } ;
struct aic7xxx_scb {struct scsi_cmnd* cmd; } ;
struct aic7xxx_host {int flags; int features; TYPE_4__* host; scalar_t__ msg_len; scalar_t__ msg_index; int msg_type; TYPE_2__* scb_data; } ;
struct TYPE_8__ {int host_lock; } ;
struct TYPE_7__ {int channel; TYPE_1__* host; } ;
struct TYPE_6__ {size_t numscbs; struct aic7xxx_scb** scb_array; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aic_dev_data* FUNC_0 (struct scsi_cmnd*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct aic7xxx_host*) ;
 int FUNC_2 (struct aic7xxx_host*) ;
 int FUNC_3 (struct aic7xxx_host*) ;
 int FUNC_4 (struct aic7xxx_host*,struct scsi_cmnd*) ;
 scalar_t__ VAR_12 ;
 size_t FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct aic7xxx_host*,int,int ) ;
 int FUNC_7 (struct aic7xxx_host*,int ) ;
 int FUNC_8 (struct aic7xxx_host*,int ) ;
 int FUNC_9 (struct aic7xxx_host*,int,int ) ;
 int FUNC_10 (struct aic7xxx_host*) ;
 int FUNC_11 (struct aic7xxx_host*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct aic7xxx_host*,int ) ;

__attribute__((used)) static int FUNC_16(struct scsi_cmnd *VAR_13)
{
  struct aic7xxx_scb *VAR_14;
  struct aic7xxx_host *VAR_15;
  struct aic_dev_data *VAR_16;

  VAR_15 = (struct aic7xxx_host *) VAR_13->device->host->hostdata;
  FUNC_12(VAR_15->host->host_lock);

  VAR_16 = FUNC_0(VAR_13);
  if(FUNC_5(VAR_13) < VAR_15->scb_data->numscbs)
  {
    VAR_14 = (VAR_15->scb_data->scb_array[FUNC_5(VAR_13)]);
    if (VAR_14->cmd != VAR_13)
      VAR_14 = ((void*)0);
  }
  else
  {
    VAR_14 = ((void*)0);
  }
  if (VAR_12)
    FUNC_4(VAR_15, VAR_13);

  FUNC_10(VAR_15);

  while((FUNC_8(VAR_15, VAR_6) & VAR_7) && !(VAR_15->flags & VAR_1))
  {
    FUNC_3(VAR_15);
    FUNC_10(VAR_15);
  }
  FUNC_2(VAR_15);

  if(VAR_14 && (VAR_14->cmd == ((void*)0)))
  {




    FUNC_15(VAR_15, VAR_5);
    FUNC_13(VAR_15->host->host_lock);
    return VAR_10;
  }





  FUNC_6(VAR_15, VAR_13->device->channel, VAR_11);
  if (VAR_15->features & VAR_2)
  {
    FUNC_6(VAR_15, VAR_13->device->channel ^ 0x01, VAR_11);
    FUNC_11(VAR_15);
  }
  FUNC_9(VAR_15, FUNC_8(VAR_15, VAR_9) & ~(VAR_4|VAR_3), VAR_9);
  FUNC_1(VAR_15);
  VAR_15->flags &= ~VAR_0;
  VAR_15->msg_type = VAR_8;
  VAR_15->msg_index = 0;
  VAR_15->msg_len = 0;
  FUNC_7(VAR_15, VAR_11);
  FUNC_15(VAR_15, VAR_5);
  FUNC_13(VAR_15->host->host_lock);
  FUNC_14(2);
  return VAR_10;
}
