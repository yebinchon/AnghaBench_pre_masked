
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ lpum; } ;
struct TYPE_5__ {TYPE_1__ pmcw; int scsw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct ccw_device {TYPE_3__* private; } ;
struct TYPE_6__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ccw_device*) ;
 scalar_t__ FUNC_1 (struct subchannel*) ;
 scalar_t__ FUNC_2 (struct subchannel*) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 struct ccw_device* FUNC_4 (struct subchannel*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct subchannel *VAR_3, u8 VAR_4)
{
 struct ccw_device *VAR_5;

 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5)
  return;
 if (FUNC_2(VAR_3))
  goto err;

 if (FUNC_5(&VAR_3->schib.scsw) == 0 || VAR_3->schib.pmcw.lpum != VAR_4)
  goto out;
 if (VAR_5->private->state == VAR_2) {
  FUNC_0(VAR_5);
  goto out;
 }
 if (FUNC_1(VAR_3))
  goto err;
out:

 FUNC_3(VAR_5, VAR_1);
 return;

err:
 FUNC_3(VAR_5, VAR_0);
}
