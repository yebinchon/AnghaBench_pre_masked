
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int enabled_phys; TYPE_1__* phy_desc; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; } ;
struct asd_ctrla_phy_settings {int num_phys; struct asd_ctrla_phy_entry* phy_ent; } ;
struct asd_ctrla_phy_entry {int sas_link_rates; int sata_link_rates; int flags; scalar_t__ sas_addr; } ;
struct TYPE_3__ {int max_sas_lrate; int min_sas_lrate; int max_sata_lrate; int min_sata_lrate; int flags; int sas_addr; } ;


 int FUNC_0 (char*,int,int ,int,int,int,int,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct asd_ha_struct *VAR_1,
       struct asd_ctrla_phy_settings *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_phys; VAR_3++) {
  struct asd_ctrla_phy_entry *VAR_4 = &VAR_2->phy_ent[VAR_3];

  if (!FUNC_1(VAR_1, VAR_3))
   continue;
  if (*(u64 *)VAR_4->sas_addr == 0) {
   VAR_1->hw_prof.enabled_phys &= ~(1 << VAR_3);
   continue;
  }

  FUNC_3(VAR_1->hw_prof.phy_desc[VAR_3].sas_addr, VAR_4->sas_addr,
         VAR_0);
  VAR_1->hw_prof.phy_desc[VAR_3].max_sas_lrate =
   (VAR_4->sas_link_rates & 0xF0) >> 4;
  VAR_1->hw_prof.phy_desc[VAR_3].min_sas_lrate =
   (VAR_4->sas_link_rates & 0x0F);
  VAR_1->hw_prof.phy_desc[VAR_3].max_sata_lrate =
   (VAR_4->sata_link_rates & 0xF0) >> 4;
  VAR_1->hw_prof.phy_desc[VAR_3].min_sata_lrate =
   (VAR_4->sata_link_rates & 0x0F);
  VAR_1->hw_prof.phy_desc[VAR_3].flags = VAR_4->flags;
  FUNC_0("ctrla: phy%d: sas_addr: %llx, sas rate:0x%x-0x%x,"
       " sata rate:0x%x-0x%x, flags:0x%x\n",
       VAR_3,
       FUNC_2(VAR_1->hw_prof.phy_desc[VAR_3].sas_addr),
       VAR_1->hw_prof.phy_desc[VAR_3].max_sas_lrate,
       VAR_1->hw_prof.phy_desc[VAR_3].min_sas_lrate,
       VAR_1->hw_prof.phy_desc[VAR_3].max_sata_lrate,
       VAR_1->hw_prof.phy_desc[VAR_3].min_sata_lrate,
       VAR_1->hw_prof.phy_desc[VAR_3].flags);
 }

 return 0;
}
