
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int eeh_config_addr; int eeh_pe_config_addr; TYPE_1__* phb; } ;
struct TYPE_2__ {int buid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int,int,int*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dn *VAR_3, int VAR_4[])
{
 int VAR_5, VAR_6;
 int VAR_7;

 if (VAR_2 != VAR_0) {
  VAR_5 = VAR_2;
  VAR_6 = 4;
 } else {
  VAR_5 = VAR_1;
  VAR_4[2] = 0;
  VAR_6 = 3;
 }


 VAR_7 = VAR_3->eeh_config_addr;
 if (VAR_3->eeh_pe_config_addr)
  VAR_7 = VAR_3->eeh_pe_config_addr;

 return FUNC_2(VAR_5, 3, VAR_6, VAR_4, VAR_7,
    FUNC_0(VAR_3->phb->buid), FUNC_1(VAR_3->phb->buid));
}
