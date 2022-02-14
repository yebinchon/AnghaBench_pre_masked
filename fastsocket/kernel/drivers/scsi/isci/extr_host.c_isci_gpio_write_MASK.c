
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sas_ha_struct {struct isci_host* lldd_ha; } ;
struct isci_host {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct isci_host*,int,int,int*) ;

int FUNC_1(struct sas_ha_struct *VAR_1, u8 VAR_2, u8 VAR_3,
      u8 VAR_4, u8 *VAR_5)
{
 struct isci_host *VAR_6 = VAR_1->lldd_ha;
 int VAR_7;

 switch (VAR_2) {
 case 128:
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
