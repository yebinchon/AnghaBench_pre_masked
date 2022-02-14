
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asd_manuf_sec {int dummy; } ;
struct asd_manuf_phy_param {char* sig; scalar_t__ maj; int min; int num_phy_desc; int phy_desc_size; struct asd_manuf_phy_desc* phy_desc; } ;
struct asd_manuf_phy_desc {int state; int phy_id; int phy_control_0; int phy_control_1; int phy_control_2; int phy_control_3; } ;
struct TYPE_4__ {int enabled_phys; int max_phys; int num_phys; TYPE_1__* phy_desc; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; } ;
struct TYPE_3__ {int phy_control_0; int phy_control_1; int phy_control_2; int phy_control_3; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;



 struct asd_manuf_phy_param* FUNC_1 (struct asd_manuf_sec*,char,char) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct asd_ha_struct *VAR_2,
     struct asd_manuf_sec *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;
 struct asd_manuf_phy_param *VAR_7;
 struct asd_manuf_phy_param VAR_8;

 VAR_7 = FUNC_1(VAR_3, 'P', 'M');
 if (!VAR_7) {
  FUNC_0("ms: no phy parameters found\n");
  FUNC_0("ms: Creating default phy parameters\n");
  VAR_8.sig[0] = 'P';
  VAR_8.sig[1] = 'M';
  VAR_8.maj = 0;
  VAR_8.min = 2;
  VAR_8.num_phy_desc = 8;
  VAR_8.phy_desc_size = sizeof(struct asd_manuf_phy_desc);
  for (VAR_4 =0; VAR_4 < VAR_0; VAR_4++) {
   VAR_8.phy_desc[VAR_4].state = 0;
   VAR_8.phy_desc[VAR_4].phy_id = VAR_4;
   VAR_8.phy_desc[VAR_4].phy_control_0 = 0xf6;
   VAR_8.phy_desc[VAR_4].phy_control_1 = 0x10;
   VAR_8.phy_desc[VAR_4].phy_control_2 = 0x43;
   VAR_8.phy_desc[VAR_4].phy_control_3 = 0xeb;
  }

  VAR_7 = &VAR_8;

 }

 if (VAR_7->maj != 0) {
  FUNC_2("unsupported manuf. phy param major version:0x%x\n",
      VAR_7->maj);
  return -VAR_1;
 }

 FUNC_0("ms: num_phy_desc: %d\n", VAR_7->num_phy_desc);
 VAR_2->hw_prof.enabled_phys = 0;
 for (VAR_4 = 0; VAR_4 < VAR_7->num_phy_desc; VAR_4++) {
  struct asd_manuf_phy_desc *VAR_9 = &VAR_7->phy_desc[VAR_4];
  switch (VAR_9->state & 0xF) {
  case 129:
   FUNC_0("ms: phy%d: HIDDEN\n", VAR_4);
   continue;
  case 128:
   FUNC_0("ms: phy%d: REPORTED\n", VAR_4);
   VAR_2->hw_prof.enabled_phys &= ~(1 << VAR_4);
   VAR_6++;
   continue;
  case 130:
   FUNC_0("ms: phy%d: ENABLED\n", VAR_4);
   VAR_2->hw_prof.enabled_phys |= (1 << VAR_4);
   VAR_5++;
   break;
  }
  VAR_2->hw_prof.phy_desc[VAR_4].phy_control_0 = VAR_9->phy_control_0;
  VAR_2->hw_prof.phy_desc[VAR_4].phy_control_1 = VAR_9->phy_control_1;
  VAR_2->hw_prof.phy_desc[VAR_4].phy_control_2 = VAR_9->phy_control_2;
  VAR_2->hw_prof.phy_desc[VAR_4].phy_control_3 = VAR_9->phy_control_3;
 }
 VAR_2->hw_prof.max_phys = VAR_6 + VAR_5;
 VAR_2->hw_prof.num_phys = VAR_5;
 FUNC_0("ms: max_phys:0x%x, num_phys:0x%x\n",
      VAR_2->hw_prof.max_phys, VAR_2->hw_prof.num_phys);
 FUNC_0("ms: enabled_phys:0x%x\n", VAR_2->hw_prof.enabled_phys);
 return 0;
}
