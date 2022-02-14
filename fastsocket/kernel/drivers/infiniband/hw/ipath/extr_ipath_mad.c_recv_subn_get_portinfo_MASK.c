
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct ipath_ibdev {scalar_t__ mkey; int mkeyprot; int sm_lid; int port_cap_flags; int mkey_lease_period; size_t sm_sl; int mkey_violations; int z_pkey_violations; int qkey_violations; int subnet_timeout; int vl_high_limit; int gid_prefix; struct ipath_devdata* dd; } ;
struct ipath_devdata {int ipath_lid; int ipath_link_speed_supported; size_t ipath_lastibcstat; size_t ibcs_lts_mask; int ipath_lmc; int ipath_link_speed_active; int ipath_link_speed_enabled; int ipath_ibmtu; int (* ipath_f_get_ib_cfg ) (struct ipath_devdata*,int ) ;int ipath_link_width_active; int ipath_link_width_supported; int ipath_link_width_enabled; } ;
struct ib_smp {scalar_t__ method; scalar_t__ mkey; scalar_t__ data; int status; int attr_mod; } ;
struct ib_port_info {scalar_t__ mkey; size_t local_port_num; int linkspeed_portstate; int portphysstate_linkdown; int mkeyprot_resv_lmc; int linkspeedactive_enabled; size_t neighbormtu_mastersmsl; int vlcap_inittype; int operationalvl_pei_peo_fpi_fpo; int guid_cap; int resv_resptimevalue; int localphyerrors_overrunerrors; int* link_roundtrip_latency; int clientrereg_resv_subnetto; void* qkey_violations; void* pkey_violations; void* mkey_violations; void* inittypereply_mtucap; int vl_high_limit; int link_width_active; int link_width_supported; int link_width_enabled; void* mkey_lease_period; int cap_mask; void* sm_lid; void* lid; int gid_prefix; } ;
struct ib_device {scalar_t__ phys_port_cnt; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ipath_devdata*) ;
 int FUNC_4 (struct ipath_devdata*) ;
 int FUNC_5 (struct ipath_devdata*) ;
 int* VAR_10 ;
 int FUNC_6 (struct ipath_devdata*) ;
 int FUNC_7 (struct ipath_devdata*,size_t) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (struct ib_smp*) ;
 int FUNC_10 (struct ipath_devdata*,int ) ;
 struct ipath_ibdev* FUNC_11 (struct ib_device*) ;

__attribute__((used)) static int FUNC_12(struct ib_smp *VAR_12,
      struct ib_device *VAR_13, u8 VAR_14)
{
 struct ipath_ibdev *VAR_15;
 struct ipath_devdata *VAR_16;
 struct ib_port_info *VAR_17 = (struct ib_port_info *)VAR_12->data;
 u16 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 int VAR_21;

 if (FUNC_0(VAR_12->attr_mod) > VAR_13->phys_port_cnt) {
  VAR_12->status |= VAR_8;
  VAR_21 = FUNC_9(VAR_12);
  goto bail;
 }

 VAR_15 = FUNC_11(VAR_13);
 VAR_16 = VAR_15->dd;


 FUNC_8(VAR_12->data, 0, sizeof(VAR_12->data));


 if (VAR_12->method == VAR_1 || VAR_15->mkey == VAR_12->mkey ||
     VAR_15->mkeyprot == 0)
  VAR_17->mkey = VAR_15->mkey;
 VAR_17->gid_prefix = VAR_15->gid_prefix;
 VAR_18 = VAR_16->ipath_lid;
 VAR_17->lid = VAR_18 ? FUNC_1(VAR_18) : VAR_0;
 VAR_17->sm_lid = FUNC_1(VAR_15->sm_lid);
 VAR_17->cap_mask = FUNC_2(VAR_15->port_cap_flags);

 VAR_17->mkey_lease_period = FUNC_1(VAR_15->mkey_lease_period);
 VAR_17->local_port_num = VAR_14;
 VAR_17->link_width_enabled = VAR_16->ipath_link_width_enabled;
 VAR_17->link_width_supported = VAR_16->ipath_link_width_supported;
 VAR_17->link_width_active = VAR_16->ipath_link_width_active;
 VAR_17->linkspeed_portstate = VAR_16->ipath_link_speed_supported << 4;
 VAR_19 = VAR_16->ipath_lastibcstat;

 VAR_17->linkspeed_portstate |= FUNC_7(VAR_16, VAR_19) + 1;

 VAR_17->portphysstate_linkdown =
  (VAR_10[VAR_19 & VAR_16->ibcs_lts_mask] << 4) |
  (FUNC_3(VAR_16) ? 1 : 2);
 VAR_17->mkeyprot_resv_lmc = (VAR_15->mkeyprot << 6) | VAR_16->ipath_lmc;
 VAR_17->linkspeedactive_enabled = (VAR_16->ipath_link_speed_active << 4) |
  VAR_16->ipath_link_speed_enabled;
 switch (VAR_16->ipath_ibmtu) {
 case 4096:
  VAR_20 = VAR_5;
  break;
 case 2048:
  VAR_20 = VAR_3;
  break;
 case 1024:
  VAR_20 = VAR_2;
  break;
 case 512:
  VAR_20 = VAR_6;
  break;
 case 256:
  VAR_20 = VAR_4;
  break;
 default:
  VAR_20 = VAR_3;
  break;
 }
 VAR_17->neighbormtu_mastersmsl = (VAR_20 << 4) | VAR_15->sm_sl;
 VAR_17->vlcap_inittype = 0x10;
 VAR_17->vl_high_limit = VAR_15->vl_high_limit;




 VAR_17->inittypereply_mtucap = VAR_11 ? VAR_5 : VAR_3;


 VAR_17->operationalvl_pei_peo_fpi_fpo = 0x10;
 VAR_17->mkey_violations = FUNC_1(VAR_15->mkey_violations);

 VAR_17->pkey_violations =
  FUNC_1((FUNC_6(VAR_16) -
        VAR_15->z_pkey_violations) & 0xFFFF);
 VAR_17->qkey_violations = FUNC_1(VAR_15->qkey_violations);

 VAR_17->guid_cap = 1;
 VAR_17->clientrereg_resv_subnetto = VAR_15->subnet_timeout;

 VAR_17->resv_resptimevalue = 3;
 VAR_17->localphyerrors_overrunerrors =
  (FUNC_5(VAR_16) << 4) |
  FUNC_4(VAR_16);

 if (VAR_15->port_cap_flags & VAR_7) {
  u32 VAR_22;

  VAR_22 = VAR_16->ipath_f_get_ib_cfg(VAR_16, VAR_9);
  VAR_17->link_roundtrip_latency[0] = VAR_22 >> 16;
  VAR_17->link_roundtrip_latency[1] = VAR_22 >> 8;
  VAR_17->link_roundtrip_latency[2] = VAR_22;
 }

 VAR_21 = FUNC_9(VAR_12);

bail:
 return VAR_21;
}
