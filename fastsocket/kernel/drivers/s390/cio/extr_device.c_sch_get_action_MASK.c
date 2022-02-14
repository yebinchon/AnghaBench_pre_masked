
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dev; int pam; } ;
struct TYPE_9__ {TYPE_3__ pmcw; } ;
struct subchannel {int opm; TYPE_4__ schib; } ;
struct ccw_device {TYPE_2__* private; scalar_t__ online; } ;
typedef enum io_sch_action { ____Placeholder_io_sch_action } io_sch_action ;
struct TYPE_10__ {scalar_t__ devno; } ;
struct TYPE_6__ {int resuming; } ;
struct TYPE_7__ {TYPE_1__ flags; TYPE_5__ dev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct ccw_device*,int ) ;
 scalar_t__ FUNC_1 (struct subchannel*) ;
 scalar_t__ FUNC_2 (struct ccw_device*) ;
 struct ccw_device* FUNC_3 (struct subchannel*) ;

__attribute__((used)) static enum io_sch_action FUNC_4(struct subchannel *VAR_12)
{
 struct ccw_device *VAR_13;

 VAR_13 = FUNC_3(VAR_12);
 if (FUNC_1(VAR_12)) {

  if (!VAR_13)
   return VAR_8;
  if (FUNC_0(VAR_13, VAR_0) != VAR_11)
   return VAR_8;
  return VAR_6;
 }

 if (!VAR_13)
  return VAR_2;
 if (VAR_12->schib.pmcw.dev != VAR_13->private->dev_id.devno) {
  if (FUNC_0(VAR_13, VAR_0) != VAR_11)
   return VAR_9;
  return VAR_5;
 }
 if ((VAR_12->schib.pmcw.pam & VAR_12->opm) == 0) {
  if (FUNC_0(VAR_13, VAR_1) != VAR_11)
   return VAR_8;
  return VAR_3;
 }
 if (FUNC_2(VAR_13))
  return VAR_7;
 if (VAR_13->online && !VAR_13->private->flags.resuming)
  return VAR_10;
 return VAR_4;
}
