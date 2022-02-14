
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int cbcrWrPmStats1; int cbcrWrPmStats0; int yWrPmStats1; int yWrPmStats0; } ;
struct TYPE_7__ {int cbcrWrPmStats1; int cbcrWrPmStats0; int yWrPmStats1; int yWrPmStats0; } ;
struct TYPE_10__ {TYPE_4__ viewPathPmInfo; TYPE_2__ encPathPmInfo; } ;
struct vfe_irq_thread_msg {TYPE_5__ pmInfo; } ;
struct TYPE_8__ {int cbcrWrPmStats1; int cbcrWrPmStats0; int yWrPmStats1; int yWrPmStats0; } ;
struct TYPE_6__ {int cbcrWrPmStats1; int cbcrWrPmStats0; int yWrPmStats1; int yWrPmStats0; } ;
struct vfe_bus_performance_monitor {TYPE_3__ viewPathPmInfo; TYPE_1__ encPathPmInfo; } ;
typedef int rc ;


 int FUNC_0 (struct vfe_bus_performance_monitor*,int ,int) ;

__attribute__((used)) static struct vfe_bus_performance_monitor
FUNC_1(struct vfe_irq_thread_msg *VAR_0)
{
 struct vfe_bus_performance_monitor VAR_1;
 FUNC_0(&VAR_1, 0, sizeof(VAR_1));

 VAR_1.encPathPmInfo.yWrPmStats0 =
  VAR_0->pmInfo.encPathPmInfo.yWrPmStats0;
 VAR_1.encPathPmInfo.yWrPmStats1 =
  VAR_0->pmInfo.encPathPmInfo.yWrPmStats1;
 VAR_1.encPathPmInfo.cbcrWrPmStats0 =
  VAR_0->pmInfo.encPathPmInfo.cbcrWrPmStats0;
 VAR_1.encPathPmInfo.cbcrWrPmStats1 =
  VAR_0->pmInfo.encPathPmInfo.cbcrWrPmStats1;
 VAR_1.viewPathPmInfo.yWrPmStats0 =
  VAR_0->pmInfo.viewPathPmInfo.yWrPmStats0;
 VAR_1.viewPathPmInfo.yWrPmStats1 =
  VAR_0->pmInfo.viewPathPmInfo.yWrPmStats1;
 VAR_1.viewPathPmInfo.cbcrWrPmStats0 =
  VAR_0->pmInfo.viewPathPmInfo.cbcrWrPmStats0;
 VAR_1.viewPathPmInfo.cbcrWrPmStats1 =
  VAR_0->pmInfo.viewPathPmInfo.cbcrWrPmStats1;

 return VAR_1;
}
