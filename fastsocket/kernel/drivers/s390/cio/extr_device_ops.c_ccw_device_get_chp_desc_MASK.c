
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * chpid; } ;
struct TYPE_6__ {TYPE_2__ pmcw; } ;
struct subchannel {TYPE_3__ schib; } ;
struct chp_id {int id; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_1__ dev; } ;


 void* FUNC_0 (struct chp_id) ;
 int FUNC_1 (struct chp_id*) ;
 struct subchannel* FUNC_2 (int ) ;

void *FUNC_3(struct ccw_device *VAR_0, int VAR_1)
{
 struct subchannel *VAR_2;
 struct chp_id VAR_3;

 VAR_2 = FUNC_2(VAR_0->dev.parent);
 FUNC_1(&VAR_3);
 VAR_3.id = VAR_2->schib.pmcw.chpid[VAR_1];
 return FUNC_0(VAR_3);
}
