
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_5__ {TYPE_1__* shost; } ;
struct sas_ha_struct {int phy_port_lock; TYPE_2__ core; } ;
struct domain_device {int pathways; } ;
struct asd_sas_port {int num_phys; unsigned int phy_mask; int phy_list_lock; scalar_t__ oob_mode; scalar_t__ tproto; scalar_t__ iproto; scalar_t__ class; int attached_sas_addr; int sas_addr; int phy_list; int * port; struct domain_device* port_dev; } ;
struct asd_sas_phy {unsigned int id; struct asd_sas_port* port; int port_phy_el; int phy; struct sas_ha_struct* ha; } ;
struct TYPE_6__ {int (* lldd_port_deformed ) (struct asd_sas_phy*) ;} ;
struct TYPE_4__ {int transportt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct domain_device*,int *) ;
 int FUNC_4 (struct asd_sas_phy*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct asd_sas_port*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct asd_sas_phy*) ;
 struct sas_internal* FUNC_13 (int ) ;

void FUNC_14(struct asd_sas_phy *VAR_1, int VAR_2)
{
 struct sas_ha_struct *VAR_3 = VAR_1->ha;
 struct asd_sas_port *VAR_4 = VAR_1->port;
 struct sas_internal *VAR_5 =
  FUNC_13(VAR_3->core.shost->transportt);
 struct domain_device *VAR_6;
 unsigned long VAR_7;

 if (!VAR_4)
  return;

 VAR_6 = VAR_4->port_dev;
 if (VAR_6)
  VAR_6->pathways--;

 if (VAR_4->num_phys == 1) {
  FUNC_7(VAR_4, VAR_2);
  FUNC_5(VAR_4->port);
  VAR_4->port = ((void*)0);
 } else {
  FUNC_6(VAR_4->port, VAR_1->phy);
  FUNC_3(VAR_6, VAR_4->port);
 }

 if (VAR_5->dft->lldd_port_deformed)
  VAR_5->dft->lldd_port_deformed(VAR_1);

 FUNC_9(&VAR_3->phy_port_lock, VAR_7);
 FUNC_8(&VAR_4->phy_list_lock);

 FUNC_1(&VAR_1->port_phy_el);
 FUNC_4(VAR_1, ((void*)0));
 VAR_1->port = ((void*)0);
 VAR_4->num_phys--;
 VAR_4->phy_mask &= ~(1U << VAR_1->id);

 if (VAR_4->num_phys == 0) {
  FUNC_0(&VAR_4->phy_list);
  FUNC_2(VAR_4->sas_addr, 0, VAR_0);
  FUNC_2(VAR_4->attached_sas_addr, 0, VAR_0);
  VAR_4->class = 0;
  VAR_4->iproto = 0;
  VAR_4->tproto = 0;
  VAR_4->oob_mode = 0;
  VAR_4->phy_mask = 0;
 }
 FUNC_10(&VAR_4->phy_list_lock);
 FUNC_11(&VAR_3->phy_port_lock, VAR_7);

 return;
}
