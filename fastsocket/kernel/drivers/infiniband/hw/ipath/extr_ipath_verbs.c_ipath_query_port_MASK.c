
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u64 ;
typedef scalar_t__ u16 ;
struct ipath_ibdev {int subnet_timeout; int qkey_violations; scalar_t__ z_pkey_violations; int port_cap_flags; int sm_sl; int sm_lid; struct ipath_devdata* dd; } ;
struct ipath_devdata {size_t ipath_lastibcstat; size_t ibcs_lts_mask; int ipath_ibmtu; int ipath_link_speed_active; int ipath_link_width_active; int ipath_lmc; scalar_t__ ipath_lid; } ;
struct ib_port_attr {int gid_tbl_len; int max_msg_sz; int max_vl_num; int active_mtu; int subnet_timeout; void* max_mtu; scalar_t__ init_type_reply; int active_speed; int active_width; int qkey_viol_cntr; scalar_t__ bad_pkey_cntr; int pkey_tbl_len; int port_cap_flags; int phys_state; scalar_t__ state; int sm_sl; int sm_lid; int lmc; scalar_t__ lid; } ;
struct ib_device {int dummy; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_6 ;
 scalar_t__ FUNC_1 (struct ipath_devdata*) ;
 int FUNC_2 (struct ipath_devdata*) ;
 scalar_t__ FUNC_3 (struct ipath_devdata*,size_t) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct ib_port_attr*,int ,int) ;
 struct ipath_ibdev* FUNC_5 (struct ib_device*) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_8,
       u8 VAR_9, struct ib_port_attr *VAR_10)
{
 struct ipath_ibdev *VAR_11 = FUNC_5(VAR_8);
 struct ipath_devdata *VAR_12 = VAR_11->dd;
 enum ib_mtu VAR_13;
 u16 VAR_14 = VAR_12->ipath_lid;
 u64 VAR_15;

 FUNC_4(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->lid = VAR_14 ? VAR_14 : FUNC_0(VAR_0);
 VAR_10->lmc = VAR_12->ipath_lmc;
 VAR_10->sm_lid = VAR_11->sm_lid;
 VAR_10->sm_sl = VAR_11->sm_sl;
 VAR_15 = VAR_12->ipath_lastibcstat;

 VAR_10->state = FUNC_3(VAR_12, VAR_15) + 1;


 VAR_10->phys_state =
  VAR_6[VAR_12->ipath_lastibcstat &
  VAR_12->ibcs_lts_mask];
 VAR_10->port_cap_flags = VAR_11->port_cap_flags;
 VAR_10->gid_tbl_len = 1;
 VAR_10->max_msg_sz = 0x80000000;
 VAR_10->pkey_tbl_len = FUNC_2(VAR_12);
 VAR_10->bad_pkey_cntr = FUNC_1(VAR_12) -
  VAR_11->z_pkey_violations;
 VAR_10->qkey_viol_cntr = VAR_11->qkey_violations;
 VAR_10->active_width = VAR_12->ipath_link_width_active;

 VAR_10->active_speed = VAR_12->ipath_link_speed_active;
 VAR_10->max_vl_num = 1;
 VAR_10->init_type_reply = 0;

 VAR_10->max_mtu = VAR_7 ? VAR_4 : VAR_2;
 switch (VAR_12->ipath_ibmtu) {
 case 4096:
  VAR_13 = VAR_4;
  break;
 case 2048:
  VAR_13 = VAR_2;
  break;
 case 1024:
  VAR_13 = VAR_1;
  break;
 case 512:
  VAR_13 = VAR_5;
  break;
 case 256:
  VAR_13 = VAR_3;
  break;
 default:
  VAR_13 = VAR_2;
 }
 VAR_10->active_mtu = VAR_13;
 VAR_10->subnet_timeout = VAR_11->subnet_timeout;

 return 0;
}
