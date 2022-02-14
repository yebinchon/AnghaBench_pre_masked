
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int use_10_for_rw; int manage_start_stop; scalar_t__ type; int use_10_for_ms; int skip_ms_page_8; int fix_capacity; int start_stop_pwr_cond; int request_queue; struct sbp2_logical_unit* hostdata; } ;
struct sbp2_logical_unit {TYPE_1__* tgt; } ;
struct TYPE_2__ {int workarounds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_8)
{
 struct sbp2_logical_unit *VAR_9 = VAR_8->hostdata;

 VAR_8->use_10_for_rw = 1;

 if (VAR_7)
  VAR_8->manage_start_stop = 1;

 if (VAR_8->type == VAR_6)
  VAR_8->use_10_for_ms = 1;

 if (VAR_8->type == VAR_5 &&
     VAR_9->tgt->workarounds & VAR_3)
  VAR_8->skip_ms_page_8 = 1;

 if (VAR_9->tgt->workarounds & VAR_2)
  VAR_8->fix_capacity = 1;

 if (VAR_9->tgt->workarounds & VAR_4)
  VAR_8->start_stop_pwr_cond = 1;

 if (VAR_9->tgt->workarounds & VAR_1)
  FUNC_0(VAR_8->request_queue, 128 * 1024 / 512);

 FUNC_1(VAR_8->request_queue, VAR_0);

 return 0;
}
