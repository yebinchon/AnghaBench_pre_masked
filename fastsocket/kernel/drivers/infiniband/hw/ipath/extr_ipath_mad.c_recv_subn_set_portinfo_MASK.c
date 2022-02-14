
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ipath_ibdev {scalar_t__ sm_lid; int mkeyprot; int sm_sl; int subnet_timeout; scalar_t__ qkey_violations; int z_pkey_violations; scalar_t__ mkey_violations; int vl_high_limit; void* mkey_lease_period; int gid_prefix; int mkey; struct ipath_devdata* dd; } ;
struct ipath_devdata {scalar_t__ ipath_lid; int ipath_lmc; int ipath_link_width_supported; int ipath_link_speed_supported; } ;
struct ib_smp {int status; int attr_mod; scalar_t__ data; } ;
struct ib_port_info {int mkeyprot_resv_lmc; int link_width_enabled; int linkspeedactive_enabled; int portphysstate_linkdown; int neighbormtu_mastersmsl; int operationalvl_pei_peo_fpi_fpo; scalar_t__ mkey_violations; scalar_t__ pkey_violations; scalar_t__ qkey_violations; int localphyerrors_overrunerrors; int clientrereg_resv_subnetto; int linkspeed_portstate; int vl_high_limit; int sm_lid; int lid; int mkey_lease_period; int gid_prefix; int mkey; } ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {int event; TYPE_1__ element; struct ib_device* device; } ;
struct ib_device {scalar_t__ phys_port_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ib_event*) ;
 int FUNC_3 (struct ipath_devdata*) ;
 int VAR_16 ;
 int FUNC_4 (struct ipath_devdata*,scalar_t__,int) ;
 int FUNC_5 (struct ipath_devdata*,scalar_t__) ;
 int FUNC_6 (struct ipath_devdata*,int) ;
 int FUNC_7 (struct ipath_devdata*,int,int) ;
 int FUNC_8 (struct ib_smp*,struct ib_device*,int) ;
 int FUNC_9 (struct ipath_devdata*,int) ;
 int FUNC_10 (struct ipath_devdata*,int) ;
 int FUNC_11 (struct ipath_devdata*,int) ;
 scalar_t__ FUNC_12 (struct ipath_devdata*,int) ;
 scalar_t__ FUNC_13 (struct ipath_devdata*,int) ;
 struct ipath_ibdev* FUNC_14 (struct ib_device*) ;

__attribute__((used)) static int FUNC_15(struct ib_smp *VAR_17,
      struct ib_device *VAR_18, u8 VAR_19)
{
 struct ib_port_info *VAR_20 = (struct ib_port_info *)VAR_17->data;
 struct ib_event VAR_21;
 struct ipath_ibdev *VAR_22;
 struct ipath_devdata *VAR_23;
 char VAR_24 = 0;
 u16 VAR_25, VAR_26;
 u8 VAR_27;
 u8 VAR_28;
 u8 VAR_29;
 u16 VAR_30;
 u32 VAR_31;
 int VAR_32, VAR_33;

 if (FUNC_1(VAR_17->attr_mod) > VAR_18->phys_port_cnt)
  goto err;

 VAR_22 = FUNC_14(VAR_18);
 VAR_23 = VAR_22->dd;
 VAR_21.device = VAR_18;
 VAR_21.element.port_num = VAR_19;

 VAR_22->mkey = VAR_20->mkey;
 VAR_22->gid_prefix = VAR_20->gid_prefix;
 VAR_22->mkey_lease_period = FUNC_0(VAR_20->mkey_lease_period);

 VAR_25 = FUNC_0(VAR_20->lid);
 if (VAR_23->ipath_lid != VAR_25 ||
     VAR_23->ipath_lmc != (VAR_20->mkeyprot_resv_lmc & 7)) {

  if (VAR_25 == 0 || VAR_25 >= VAR_15)
   goto err;
  FUNC_4(VAR_23, VAR_25, VAR_20->mkeyprot_resv_lmc & 7);
  VAR_21.event = VAR_1;
  FUNC_2(&VAR_21);
 }

 VAR_26 = FUNC_0(VAR_20->sm_lid);
 if (VAR_26 != VAR_22->sm_lid) {

  if (VAR_26 == 0 || VAR_26 >= VAR_15)
   goto err;
  VAR_22->sm_lid = VAR_26;
  VAR_21.event = VAR_2;
  FUNC_2(&VAR_21);
 }


 VAR_27 = VAR_20->link_width_enabled;
 if (VAR_27) {
  if (VAR_27 == 0xFF)
   VAR_27 = VAR_23->ipath_link_width_supported;
  else if (VAR_27 >= 16 || (VAR_27 & ~VAR_23->ipath_link_width_supported))
   goto err;
  FUNC_10(VAR_23, VAR_27);
 }


 VAR_28 = VAR_20->linkspeedactive_enabled & 0xF;
 if (VAR_28) {
  if (VAR_28 == 15)
   VAR_28 = VAR_23->ipath_link_speed_supported;
  else if (VAR_28 >= 8 || (VAR_28 & ~VAR_23->ipath_link_speed_supported))
   goto err;
  FUNC_9(VAR_23, VAR_28);
 }


 switch (VAR_20->portphysstate_linkdown & 0xF) {
 case 0:
  break;
 case 1:
  if (FUNC_11(VAR_23, 1))
   goto err;
  break;
 case 2:
  if (FUNC_11(VAR_23, 0))
   goto err;
  break;
 default:
  goto err;
 }

 VAR_22->mkeyprot = VAR_20->mkeyprot_resv_lmc >> 6;
 VAR_22->vl_high_limit = VAR_20->vl_high_limit;

 switch ((VAR_20->neighbormtu_mastersmsl >> 4) & 0xF) {
 case 134:
  VAR_31 = 256;
  break;
 case 132:
  VAR_31 = 512;
  break;
 case 136:
  VAR_31 = 1024;
  break;
 case 135:
  VAR_31 = 2048;
  break;
 case 133:
  if (!VAR_16)
   goto err;
  VAR_31 = 4096;
  break;
 default:

  goto err;
 }
 FUNC_6(VAR_23, VAR_31);

 VAR_22->sm_sl = VAR_20->neighbormtu_mastersmsl & 0xF;


 if (((VAR_20->operationalvl_pei_peo_fpi_fpo >> 4) & 0xF) > 1)
  goto err;

 if (VAR_20->mkey_violations == 0)
  VAR_22->mkey_violations = 0;





 if (VAR_20->pkey_violations == 0)
  VAR_22->z_pkey_violations = FUNC_3(VAR_23);

 if (VAR_20->qkey_violations == 0)
  VAR_22->qkey_violations = 0;

 VAR_33 = VAR_20->localphyerrors_overrunerrors;
 if (FUNC_13(VAR_23, (VAR_33 >> 4) & 0xF))
  goto err;

 if (FUNC_12(VAR_23, (VAR_33 & 0xF)))
  goto err;

 VAR_22->subnet_timeout = VAR_20->clientrereg_resv_subnetto & 0x1F;

 if (VAR_20->clientrereg_resv_subnetto & 0x80) {
  VAR_24 = 1;
  VAR_21.event = VAR_0;
  FUNC_2(&VAR_21);
 }







 VAR_29 = VAR_20->linkspeed_portstate & 0xF;
 VAR_30 = (VAR_20->portphysstate_linkdown >> 4) & 0xF;
 if (VAR_30 && !(VAR_29 == 129 || VAR_29 == 128))
  goto err;





 switch (VAR_29) {
 case 128:
  if (VAR_30 == 0)
   break;

 case 129:
  if (VAR_30 == 0)
   VAR_30 = VAR_10;
  else if (VAR_30 == 1)
   VAR_30 = VAR_11;
  else if (VAR_30 == 2)
   VAR_30 = VAR_8;
  else if (VAR_30 == 3)
   VAR_30 = VAR_9;
  else
   goto err;
  FUNC_5(VAR_23, VAR_30);
  if (VAR_30 == VAR_9) {
   VAR_32 = VAR_4 | VAR_3;
   goto done;
  }
  FUNC_7(VAR_23, VAR_14 | VAR_13 |
    VAR_12, 1000);
  break;
 case 130:
  FUNC_5(VAR_23, VAR_7);
  break;
 case 131:
  FUNC_5(VAR_23, VAR_6);
  break;
 default:

  goto err;
 }

 VAR_32 = FUNC_8(VAR_17, VAR_18, VAR_19);

 if (VAR_24)
  VAR_20->clientrereg_resv_subnetto |= 0x80;

 goto done;

err:
 VAR_17->status |= VAR_5;
 VAR_32 = FUNC_8(VAR_17, VAR_18, VAR_19);

done:
 return VAR_32;
}
