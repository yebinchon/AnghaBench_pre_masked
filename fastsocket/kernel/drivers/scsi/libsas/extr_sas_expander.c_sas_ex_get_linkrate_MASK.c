
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_port {int dummy; } ;
struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; void* linkrate; int phy; int attached_sas_addr; struct sas_port* port; } ;
struct domain_device {void* pathways; void* max_linkrate; void* linkrate; void* min_linkrate; int sas_addr; struct expander_device ex_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (void*,void*) ;
 void* FUNC_2 (void*,void*) ;
 int FUNC_3 (struct sas_port*,int ) ;

__attribute__((used)) static void FUNC_4(struct domain_device *VAR_2,
           struct domain_device *VAR_3,
           struct ex_phy *VAR_4)
{
 struct expander_device *VAR_5 = &VAR_2->ex_dev;
 struct sas_port *VAR_6;
 int VAR_7;

 VAR_3->pathways = 0;

 VAR_6 = VAR_4->port;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_phys; VAR_7++) {
  struct ex_phy *VAR_8 = &VAR_5->ex_phy[VAR_7];

  if (VAR_8->phy_state == VAR_1 ||
      VAR_8->phy_state == VAR_0)
   continue;

  if (FUNC_0(VAR_8->attached_sas_addr) ==
      FUNC_0(VAR_3->sas_addr)) {

   VAR_3->min_linkrate = FUNC_2(VAR_2->min_linkrate,
        VAR_8->linkrate);
   VAR_3->max_linkrate = FUNC_1(VAR_2->max_linkrate,
        VAR_8->linkrate);
   VAR_3->pathways++;
   FUNC_3(VAR_6, VAR_8->phy);
  }
 }
 VAR_3->linkrate = FUNC_2(VAR_4->linkrate, VAR_3->max_linkrate);
 VAR_3->pathways = FUNC_2(VAR_3->pathways, VAR_2->pathways);
}
