
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sas_identify_frame {int sas_addr; } ;
struct TYPE_8__ {int* frame_rcvd; scalar_t__ oob_mode; TYPE_1__* ha; } ;
struct asd_phy {TYPE_4__ sas_phy; TYPE_2__* phy_desc; } ;
struct TYPE_7__ {scalar_t__ sata_name_base; } ;
struct asd_ha_struct {TYPE_3__ hw_prof; } ;
typedef int __be64 ;
struct TYPE_6__ {scalar_t__ sas_addr; } ;
struct TYPE_5__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct asd_ha_struct*,struct asd_phy*) ;

__attribute__((used)) static void FUNC_4(struct asd_phy *VAR_2, u8 *VAR_3)
{
 if (VAR_2->sas_phy.frame_rcvd[0] == 0x34
     && VAR_2->sas_phy.oob_mode == VAR_1) {
  struct asd_ha_struct *VAR_4 = VAR_2->sas_phy.ha->lldd_ha;

  u64 VAR_5 = FUNC_0(*(__be64 *)VAR_2->phy_desc->sas_addr);

  VAR_5 += VAR_4->hw_prof.sata_name_base + FUNC_3(VAR_4, VAR_2);
  *(__be64 *)VAR_3 = FUNC_1(VAR_5);
 } else {
  struct sas_identify_frame *VAR_6 =
   (void *) VAR_2->sas_phy.frame_rcvd;
  FUNC_2(VAR_3, VAR_6->sas_addr, VAR_0);
 }
}
