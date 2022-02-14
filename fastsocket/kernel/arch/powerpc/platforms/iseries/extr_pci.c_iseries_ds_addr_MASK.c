
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct pci_dn {scalar_t__ busno; } ;
struct device_node {int dummy; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 scalar_t__* FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static inline u64 FUNC_2(struct device_node *VAR_0)
{
 struct pci_dn *VAR_1 = FUNC_0(VAR_0);
 const u32 *VAR_2 = FUNC_1(VAR_0, "linux,subbus", ((void*)0));

 return ((u64)VAR_1->busno << 48) + ((u64)(VAR_2 ? *VAR_2 : 0) << 40)
   + ((u64)0x10 << 32);
}
