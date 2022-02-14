
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct nvram {TYPE_7__* bus; } ;
struct scsi_qla_host {TYPE_8__* host; TYPE_2__* bus_settings; struct nvram nvram; } ;
struct scsi_device {int channel; int id; scalar_t__ ppr; scalar_t__ wdtr; scalar_t__ sdtr; scalar_t__ tagged_supported; TYPE_1__* host; } ;
struct TYPE_18__ {int sync_mask; int wide_mask; int ppr_mask; scalar_t__ no_ppr; scalar_t__ no_wide; scalar_t__ no_sync; } ;
struct TYPE_17__ {int host_lock; } ;
struct TYPE_16__ {TYPE_6__* target; } ;
struct TYPE_14__ {scalar_t__ enable_sync; scalar_t__ enable_wide; } ;
struct TYPE_12__ {scalar_t__ enable_ppr; } ;
struct TYPE_13__ {TYPE_3__ flags; } ;
struct TYPE_15__ {TYPE_5__ parameter; TYPE_4__ ppr_1x160; } ;
struct TYPE_11__ {int qtag_enables; int hiwat; } ;
struct TYPE_10__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*,int) ;
 int FUNC_2 (struct scsi_qla_host*,struct scsi_device*) ;
 int FUNC_3 (struct scsi_qla_host*,int,int) ;
 int FUNC_4 (struct scsi_device*,int ,int) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct scsi_device *VAR_3)
{
 struct scsi_qla_host *VAR_4;
 int VAR_5 = 3;
 int VAR_6 = VAR_3->channel;
 int VAR_7 = VAR_3->id;
 int VAR_8 = 0;
 struct nvram *VAR_9;
 unsigned long VAR_10;

 VAR_4 = (struct scsi_qla_host *)VAR_3->host->hostdata;
 VAR_9 = &VAR_4->nvram;

 if (FUNC_1(VAR_4, VAR_6))
  return 1;

 if (VAR_3->tagged_supported &&
     (VAR_4->bus_settings[VAR_6].qtag_enables & (VAR_0 << VAR_7))) {
  FUNC_4(VAR_3, VAR_1,
     VAR_4->bus_settings[VAR_6].hiwat);
 } else {
  FUNC_4(VAR_3, 0, VAR_5);
 }

 VAR_9->bus[VAR_6].target[VAR_7].parameter.enable_sync = VAR_3->sdtr;
 VAR_9->bus[VAR_6].target[VAR_7].parameter.enable_wide = VAR_3->wdtr;
 VAR_9->bus[VAR_6].target[VAR_7].ppr_1x160.flags.enable_ppr = VAR_3->ppr;

 if (VAR_2.no_sync ||
     (VAR_2.sync_mask &&
      (~VAR_2.sync_mask & (1 << VAR_7))))
  VAR_9->bus[VAR_6].target[VAR_7].parameter.enable_sync = 0;
 if (VAR_2.no_wide ||
     (VAR_2.wide_mask &&
      (~VAR_2.wide_mask & (1 << VAR_7))))
  VAR_9->bus[VAR_6].target[VAR_7].parameter.enable_wide = 0;
 if (FUNC_0(VAR_4)) {
  if (VAR_2.no_ppr ||
      (VAR_2.ppr_mask &&
       (~VAR_2.ppr_mask & (1 << VAR_7))))
   VAR_9->bus[VAR_6].target[VAR_7].ppr_1x160.flags.enable_ppr = 0;
 }

 FUNC_5(VAR_4->host->host_lock, VAR_10);
 if (VAR_9->bus[VAR_6].target[VAR_7].parameter.enable_sync)
  VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_7);
 FUNC_2(VAR_4, VAR_3);
 FUNC_6(VAR_4->host->host_lock, VAR_10);
 return VAR_8;
}
