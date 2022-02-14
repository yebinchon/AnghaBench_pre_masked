
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_10__ {int kobj; int release; int * parent; } ;
struct zfcp_port {int d_id; int status; int list; TYPE_3__ sysfs_device; int refcount; int rport_task; scalar_t__ wwpn; struct zfcp_adapter* adapter; int rport_work; int test_link_work; int gid_pn_work; int unit_list_head; int remove_wq; } ;
struct zfcp_adapter {int port_list_head; TYPE_1__* ccw_device; } ;
struct TYPE_9__ {int config_lock; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zfcp_port* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (TYPE_3__*,struct zfcp_port*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char*,unsigned long long) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct zfcp_port*) ;
 struct zfcp_port* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct zfcp_adapter*) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_21 (struct zfcp_adapter*,scalar_t__) ;
 int FUNC_22 (struct zfcp_port*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

struct zfcp_port *FUNC_23(struct zfcp_adapter *VAR_12, u64 VAR_13,
         u32 VAR_14, u32 VAR_15)
{
 struct zfcp_port *VAR_16;

 FUNC_15(&VAR_6.config_lock);
 if (FUNC_21(VAR_12, VAR_13)) {
  FUNC_16(&VAR_6.config_lock);
  return FUNC_0(-VAR_0);
 }
 FUNC_16(&VAR_6.config_lock);

 VAR_16 = FUNC_12(sizeof(struct zfcp_port), VAR_2);
 if (!VAR_16)
  return FUNC_0(-VAR_1);

 FUNC_10(&VAR_16->remove_wq);
 FUNC_1(&VAR_16->unit_list_head);
 FUNC_2(&VAR_16->gid_pn_work, VAR_8);
 FUNC_2(&VAR_16->test_link_work, VAR_7);
 FUNC_2(&VAR_16->rport_work, VAR_9);

 VAR_16->adapter = VAR_12;
 VAR_16->d_id = VAR_15;
 VAR_16->wwpn = VAR_13;
 VAR_16->rport_task = VAR_3;


 FUNC_5(VAR_14 | VAR_4, &VAR_16->status);
 FUNC_4(&VAR_16->refcount, 0);

 if (FUNC_7(&VAR_16->sysfs_device, "0x%016llx",
    (unsigned long long)VAR_13)) {
  FUNC_11(VAR_16);
  return FUNC_0(-VAR_1);
 }
 VAR_16->sysfs_device.parent = &VAR_12->ccw_device->dev;
 VAR_16->sysfs_device.release = VAR_11;
 FUNC_6(&VAR_16->sysfs_device, VAR_16);

 if (FUNC_8(&VAR_16->sysfs_device)) {
  FUNC_14(&VAR_16->sysfs_device);
  return FUNC_0(-VAR_0);
 }

 if (FUNC_17(&VAR_16->sysfs_device.kobj,
          &VAR_10)) {
  FUNC_9(&VAR_16->sysfs_device);
  return FUNC_0(-VAR_0);
 }

 FUNC_22(VAR_16);

 FUNC_18(&VAR_6.config_lock);
 FUNC_13(&VAR_16->list, &VAR_12->port_list_head);
 FUNC_3(VAR_4, &VAR_16->status);
 FUNC_5(VAR_5, &VAR_16->status);

 FUNC_19(&VAR_6.config_lock);

 FUNC_20(VAR_12);
 return VAR_16;
}
