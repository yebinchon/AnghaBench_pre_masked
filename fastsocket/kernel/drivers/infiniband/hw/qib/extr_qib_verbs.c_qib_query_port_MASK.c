
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct qib_pportdata {int ibmtu; int vls_supported; int link_speed_active; int link_width_active; int lastibcstat; int lmc; scalar_t__ lid; } ;
struct qib_ibport {int subnet_timeout; int qkey_violations; int pkey_violations; int port_cap_flags; int sm_sl; int sm_lid; } ;
struct qib_devdata {int (* f_ibphys_portstate ) (int ) ;int (* f_iblink_state ) (int ) ;} ;
struct ib_port_attr {int max_msg_sz; int active_mtu; int subnet_timeout; void* max_mtu; scalar_t__ init_type_reply; int max_vl_num; int active_speed; int active_width; int qkey_viol_cntr; int bad_pkey_cntr; int pkey_tbl_len; int gid_tbl_len; int port_cap_flags; int phys_state; int state; int sm_sl; int sm_lid; int lmc; scalar_t__ lid; } ;
struct ib_device {int dummy; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 struct qib_devdata* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_port_attr*,int ,int) ;
 struct qib_pportdata* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_devdata*) ;
 void* VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct qib_ibport* FUNC_8 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_8, u8 VAR_9,
     struct ib_port_attr *VAR_10)
{
 struct qib_devdata *VAR_11 = FUNC_1(VAR_8);
 struct qib_ibport *VAR_12 = FUNC_8(VAR_8, VAR_9);
 struct qib_pportdata *VAR_13 = FUNC_3(VAR_12);
 enum ib_mtu VAR_14;
 u16 VAR_15 = VAR_13->lid;

 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->lid = VAR_15 ? VAR_15 : FUNC_0(VAR_0);
 VAR_10->lmc = VAR_13->lmc;
 VAR_10->sm_lid = VAR_12->sm_lid;
 VAR_10->sm_sl = VAR_12->sm_sl;
 VAR_10->state = VAR_11->f_iblink_state(VAR_13->lastibcstat);
 VAR_10->phys_state = VAR_11->f_ibphys_portstate(VAR_13->lastibcstat);
 VAR_10->port_cap_flags = VAR_12->port_cap_flags;
 VAR_10->gid_tbl_len = VAR_6;
 VAR_10->max_msg_sz = 0x80000000;
 VAR_10->pkey_tbl_len = FUNC_4(VAR_11);
 VAR_10->bad_pkey_cntr = VAR_12->pkey_violations;
 VAR_10->qkey_viol_cntr = VAR_12->qkey_violations;
 VAR_10->active_width = VAR_13->link_width_active;

 VAR_10->active_speed = VAR_13->link_speed_active;
 VAR_10->max_vl_num = FUNC_5(VAR_13->vls_supported);
 VAR_10->init_type_reply = 0;

 VAR_10->max_mtu = VAR_7 ? VAR_7 : VAR_4;
 switch (VAR_13->ibmtu) {
 case 4096:
  VAR_14 = VAR_4;
  break;
 case 2048:
  VAR_14 = VAR_2;
  break;
 case 1024:
  VAR_14 = VAR_1;
  break;
 case 512:
  VAR_14 = VAR_5;
  break;
 case 256:
  VAR_14 = VAR_3;
  break;
 default:
  VAR_14 = VAR_2;
 }
 VAR_10->active_mtu = VAR_14;
 VAR_10->subnet_timeout = VAR_12->subnet_timeout;

 return 0;
}
