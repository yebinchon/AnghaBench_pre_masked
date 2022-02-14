
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ex_phy {int phy_id; } ;
struct domain_device {int sas_addr; TYPE_2__* port; struct domain_device* parent; } ;
struct TYPE_3__ {int eeds_b; int eeds_a; int fanout_sas_addr; } ;
struct TYPE_4__ {TYPE_1__ disc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__,int ,scalar_t__,int ,...) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct domain_device *VAR_2,
     struct ex_phy *VAR_3,
     struct ex_phy *VAR_4)
{
 int VAR_5 = 0;
 struct domain_device *VAR_6 = VAR_2->parent;

 if (FUNC_0(VAR_6->port->disc.fanout_sas_addr) != 0) {
  VAR_5 = -VAR_0;
  FUNC_1("edge ex %016llx phy S:0x%x <--> edge ex %016llx "
       "phy S:0x%x, while there is a fanout ex %016llx\n",
       FUNC_0(VAR_6->sas_addr),
       VAR_3->phy_id,
       FUNC_0(VAR_2->sas_addr),
       VAR_4->phy_id,
       FUNC_0(VAR_6->port->disc.fanout_sas_addr));
 } else if (FUNC_0(VAR_6->port->disc.eeds_a) == 0) {
  FUNC_2(VAR_6->port->disc.eeds_a, VAR_6->sas_addr,
         VAR_1);
  FUNC_2(VAR_6->port->disc.eeds_b, VAR_2->sas_addr,
         VAR_1);
 } else if (((FUNC_0(VAR_6->port->disc.eeds_a) ==
      FUNC_0(VAR_6->sas_addr)) ||
     (FUNC_0(VAR_6->port->disc.eeds_a) ==
      FUNC_0(VAR_2->sas_addr)))
     &&
     ((FUNC_0(VAR_6->port->disc.eeds_b) ==
       FUNC_0(VAR_6->sas_addr)) ||
      (FUNC_0(VAR_6->port->disc.eeds_b) ==
       FUNC_0(VAR_2->sas_addr))))
  ;
 else {
  VAR_5 = -VAR_0;
  FUNC_1("edge ex %016llx phy 0x%x <--> edge ex %016llx "
       "phy 0x%x link forms a third EEDS!\n",
       FUNC_0(VAR_6->sas_addr),
       VAR_3->phy_id,
       FUNC_0(VAR_2->sas_addr),
       VAR_4->phy_id);
 }

 return VAR_5;
}
