
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct aspm_register_info {int support; int latency_encoding_l0s; int latency_encoding_l1; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_6,
         struct aspm_register_info *VAR_7)
{
 u16 VAR_8;
 u32 VAR_9;

 FUNC_0(VAR_6, VAR_0, &VAR_9);
 VAR_7->support = (VAR_9 & VAR_1) >> 10;
 VAR_7->latency_encoding_l0s = (VAR_9 & VAR_2) >> 12;
 VAR_7->latency_encoding_l1 = (VAR_9 & VAR_3) >> 15;
 FUNC_1(VAR_6, VAR_4, &VAR_8);
 VAR_7->enabled = VAR_8 & VAR_5;
}
