
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_sas_address {scalar_t__ low; scalar_t__ high; } ;
struct isci_port {int dummy; } ;
struct isci_phy {scalar_t__ protocol; scalar_t__ phy_index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct isci_phy*,struct sci_sas_address*) ;
 int FUNC_1 (struct isci_phy*,struct sci_sas_address*) ;
 struct isci_phy* FUNC_2 (struct isci_port*) ;

void FUNC_3(struct isci_port *VAR_1, struct sci_sas_address *VAR_2)
{
 struct isci_phy *VAR_3;





 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  if (VAR_3->protocol != VAR_0) {
   FUNC_0(VAR_3, VAR_2);
  } else {
   FUNC_1(VAR_3, VAR_2);
   VAR_2->low += VAR_3->phy_index;
  }
 } else {
  VAR_2->high = 0;
  VAR_2->low = 0;
 }
}
