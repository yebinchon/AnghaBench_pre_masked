
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_port_modify {scalar_t__ clr_port_cap_mask; scalar_t__ set_port_cap_mask; } ;
struct ib_mad_reg_req {int method_mask; int mgmt_class_version; int mgmt_class; } ;
struct ib_device {int phys_port_cnt; int name; int dev; int node_type; } ;
struct cm_port {int port_num; int mad_agent; struct cm_device* cm_dev; } ;
struct cm_device {int device; struct cm_port** port; int list; struct ib_device* ib_device; } ;
struct TYPE_2__ {int device_lock; int device_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct cm_port*) ;
 int FUNC_3 (struct cm_device*) ;
 int VAR_10 ;
 int FUNC_4 (struct cm_port*) ;
 int VAR_11 ;
 int FUNC_5 (int *,int *,int ,int *,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ib_device*,int,int ,struct ib_port_modify*) ;
 int FUNC_8 (struct ib_device*,int,int ,struct ib_mad_reg_req*,int ,int ,int ,struct cm_port*) ;
 int FUNC_9 (struct ib_device*,int *,struct cm_device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct cm_device*) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_18(struct ib_device *VAR_12)
{
 struct cm_device *VAR_13;
 struct cm_port *VAR_14;
 struct ib_mad_reg_req VAR_15 = {
  .mgmt_class = VAR_2,
  .mgmt_class_version = VAR_1
 };
 struct ib_port_modify VAR_16 = {
  .set_port_cap_mask = VAR_4
 };
 unsigned long VAR_17;
 int VAR_18;
 u8 VAR_19;

 if (FUNC_14(VAR_12->node_type) != VAR_6)
  return;

 VAR_13 = FUNC_12(sizeof(*VAR_13) + sizeof(*VAR_14) *
    VAR_12->phys_port_cnt, VAR_0);
 if (!VAR_13)
  return;

 VAR_13->ib_device = VAR_12;
 FUNC_3(VAR_13);

 VAR_13->device = FUNC_5(&VAR_8, &VAR_12->dev,
           FUNC_1(0, 0), ((void*)0),
           "%s", VAR_12->name);
 if (FUNC_0(VAR_13->device)) {
  FUNC_11(VAR_13);
  return;
 }

 FUNC_15(VAR_3, VAR_15.method_mask);
 for (VAR_19 = 1; VAR_19 <= VAR_12->phys_port_cnt; VAR_19++) {
  VAR_14 = FUNC_12(sizeof *VAR_14, VAR_0);
  if (!VAR_14)
   goto error1;

  VAR_13->port[VAR_19-1] = VAR_14;
  VAR_14->cm_dev = VAR_13;
  VAR_14->port_num = VAR_19;

  VAR_18 = FUNC_2(VAR_14);
  if (VAR_18)
   goto error1;

  VAR_14->mad_agent = FUNC_8(VAR_12, VAR_19,
       VAR_5,
       &VAR_15,
       0,
       VAR_11,
       VAR_10,
       VAR_14);
  if (FUNC_0(VAR_14->mad_agent))
   goto error2;

  VAR_18 = FUNC_7(VAR_12, VAR_19, 0, &VAR_16);
  if (VAR_18)
   goto error3;
 }
 FUNC_9(VAR_12, &VAR_9, VAR_13);

 FUNC_16(&VAR_7.device_lock, VAR_17);
 FUNC_13(&VAR_13->list, &VAR_7.device_list);
 FUNC_17(&VAR_7.device_lock, VAR_17);
 return;

error3:
 FUNC_10(VAR_14->mad_agent);
error2:
 FUNC_4(VAR_14);
error1:
 VAR_16.set_port_cap_mask = 0;
 VAR_16.clr_port_cap_mask = VAR_4;
 while (--VAR_19) {
  VAR_14 = VAR_13->port[VAR_19-1];
  FUNC_7(VAR_12, VAR_14->port_num, 0, &VAR_16);
  FUNC_10(VAR_14->mad_agent);
  FUNC_4(VAR_14);
 }
 FUNC_6(VAR_13->device);
 FUNC_11(VAR_13);
}
