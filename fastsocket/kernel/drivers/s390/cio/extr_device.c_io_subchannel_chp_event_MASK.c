
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int opm; int lpm; int ssd_info; } ;
struct chp_link {int dummy; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {int path_gone_mask; int path_new_mask; } ;






 int VAR_0 ;
 int FUNC_0 (int *,struct chp_link*) ;
 int FUNC_1 (struct subchannel*) ;
 int FUNC_2 (struct subchannel*,int) ;
 int FUNC_3 (struct subchannel*) ;
 struct ccw_device* FUNC_4 (struct subchannel*) ;

__attribute__((used)) static int FUNC_5(struct subchannel *VAR_1,
       struct chp_link *VAR_2, int VAR_3)
{
 struct ccw_device *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_1->ssd_info, VAR_2);
 if (!VAR_5)
  return 0;
 switch (VAR_3) {
 case 129:
  VAR_1->opm &= ~VAR_5;
  VAR_1->lpm &= ~VAR_5;
  if (VAR_4)
   VAR_4->private->path_gone_mask |= VAR_5;
  FUNC_2(VAR_1, VAR_5);
  break;
 case 128:
  VAR_1->opm |= VAR_5;
  VAR_1->lpm |= VAR_5;
  if (VAR_4)
   VAR_4->private->path_new_mask |= VAR_5;
  FUNC_3(VAR_1);
  break;
 case 131:
  if (FUNC_1(VAR_1))
   return -VAR_0;
  if (VAR_4)
   VAR_4->private->path_gone_mask |= VAR_5;
  FUNC_2(VAR_1, VAR_5);
  break;
 case 130:
  if (FUNC_1(VAR_1))
   return -VAR_0;
  VAR_1->lpm |= VAR_5 & VAR_1->opm;
  if (VAR_4)
   VAR_4->private->path_new_mask |= VAR_5;
  FUNC_3(VAR_1);
  break;
 }
 return 0;
}
