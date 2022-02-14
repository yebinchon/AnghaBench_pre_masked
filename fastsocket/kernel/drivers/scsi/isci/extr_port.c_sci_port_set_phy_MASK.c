
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_port {struct isci_phy** phy_table; int physical_port_index; int logical_port_index; } ;
struct isci_phy {size_t phy_index; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isci_phy*) ;
 int FUNC_1 (struct isci_phy*,struct isci_port*) ;
 scalar_t__ FUNC_2 (struct isci_port*,size_t) ;

__attribute__((used)) static enum sci_status FUNC_3(struct isci_port *VAR_2, struct isci_phy *VAR_3)
{




 if (!VAR_2->phy_table[VAR_3->phy_index] &&
     !FUNC_0(VAR_3) &&
     FUNC_2(VAR_2, VAR_3->phy_index)) {



  VAR_2->logical_port_index = VAR_2->physical_port_index;
  VAR_2->phy_table[VAR_3->phy_index] = VAR_3;
  FUNC_1(VAR_3, VAR_2);

  return VAR_1;
 }

 return VAR_0;
}
