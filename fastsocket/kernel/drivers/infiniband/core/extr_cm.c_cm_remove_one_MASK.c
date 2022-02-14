
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_port_modify {int clr_port_cap_mask; } ;
struct ib_device {int phys_port_cnt; } ;
struct cm_port {int mad_agent; int port_num; } ;
struct cm_device {int device; struct cm_port** port; int list; } ;
struct TYPE_2__ {int wq; int device_lock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cm_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct cm_device* FUNC_3 (struct ib_device*,int *) ;
 int FUNC_4 (struct ib_device*,int ,int ,struct ib_port_modify*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct cm_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct ib_device *VAR_3)
{
 struct cm_device *VAR_4;
 struct cm_port *VAR_5;
 struct ib_port_modify VAR_6 = {
  .clr_port_cap_mask = VAR_0
 };
 unsigned long VAR_7;
 int VAR_8;

 VAR_4 = FUNC_3(VAR_3, &VAR_2);
 if (!VAR_4)
  return;

 FUNC_8(&VAR_1.device_lock, VAR_7);
 FUNC_7(&VAR_4->list);
 FUNC_9(&VAR_1.device_lock, VAR_7);

 for (VAR_8 = 1; VAR_8 <= VAR_3->phys_port_cnt; VAR_8++) {
  VAR_5 = VAR_4->port[VAR_8-1];
  FUNC_4(VAR_3, VAR_5->port_num, 0, &VAR_6);
  FUNC_5(VAR_5->mad_agent);
  FUNC_2(VAR_1.wq);
  FUNC_0(VAR_5);
 }
 FUNC_1(VAR_4->device);
 FUNC_6(VAR_4);
}
