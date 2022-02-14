
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct isci_port {struct isci_phy** phy_table; } ;
struct isci_phy {int max_negotiated_speed; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct isci_port*,struct isci_phy*) ;

enum sas_linkrate FUNC_1(struct isci_port *VAR_2)
{
 u16 VAR_3;
 struct isci_phy *VAR_4;
 enum sas_linkrate VAR_5 = VAR_0;




 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = VAR_2->phy_table[VAR_3];
  if (VAR_4 && FUNC_0(VAR_2, VAR_4) &&
      VAR_4->max_negotiated_speed < VAR_5)
   VAR_5 = VAR_4->max_negotiated_speed;
 }

 return VAR_5;
}
