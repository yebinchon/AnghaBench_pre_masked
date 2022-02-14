
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irb {int dummy; } ;
struct dasd_eckd_private {struct alias_lcu* lcu; } ;
struct dasd_device {int alias_list; scalar_t__ private; } ;
struct TYPE_2__ {char reason; int worker; struct dasd_device* device; } ;
struct alias_lcu {int flags; TYPE_1__ suc_data; int lock; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct alias_lcu*,struct dasd_device*) ;
 char* FUNC_2 (struct irb*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct dasd_device *VAR_4,
       struct irb *VAR_5)
{
 struct alias_lcu *VAR_6;
 char VAR_7;
 struct dasd_eckd_private *VAR_8;
 char *VAR_9;

 VAR_8 = (struct dasd_eckd_private *) VAR_4->private;

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9) {
  VAR_7 = VAR_9[8];
  FUNC_0(VAR_0, VAR_4, "%s %x",
       "eckd handle summary unit check: reason", VAR_7);
 } else {
  FUNC_0(VAR_1, VAR_4, "%s",
       "eckd handle summary unit check:"
       " no reason code available");
  return;
 }

 VAR_6 = VAR_8->lcu;
 if (!VAR_6) {
  FUNC_0(VAR_1, VAR_4, "%s",
       "device not ready to handle summary"
       " unit check (no lcu structure)");
  return;
 }
 FUNC_5(&VAR_6->lock);
 FUNC_1(VAR_6, VAR_4);

 VAR_8->lcu->flags |= VAR_2 | VAR_3;



 if (FUNC_3(&VAR_4->alias_list)) {
  FUNC_0(VAR_1, VAR_4, "%s",
       "device is in offline processing,"
       " don't do summary unit check handling");
  FUNC_6(&VAR_6->lock);
  return;
 }
 if (VAR_6->suc_data.device) {

  FUNC_0(VAR_1, VAR_4, "%s",
       "previous instance of summary unit check worker"
       " still pending");
  FUNC_6(&VAR_6->lock);
  return ;
 }
 VAR_6->suc_data.reason = VAR_7;
 VAR_6->suc_data.device = VAR_4;
 FUNC_6(&VAR_6->lock);
 FUNC_4(&VAR_6->suc_data.worker);
}
