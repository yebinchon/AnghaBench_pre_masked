
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sas_addr; TYPE_2__* phy_desc; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;
struct TYPE_4__ {scalar_t__* sas_addr; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct asd_ha_struct *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->hw_prof.phy_desc[VAR_3].sas_addr[0] == 0)
   continue;


  FUNC_0("setting phy%d addr to %llx\n", VAR_3,
       FUNC_1(VAR_2->hw_prof.sas_addr));
  FUNC_2(VAR_2->hw_prof.phy_desc[VAR_3].sas_addr,
         VAR_2->hw_prof.sas_addr, VAR_1);
 }
}
