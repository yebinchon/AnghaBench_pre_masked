
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_4(struct pci_dev *VAR_4, u8 VAR_5)
{
 u32 VAR_6;
 u8 VAR_7 = 0;
 bool VAR_8 = 0;

 FUNC_3(VAR_4, VAR_1, &VAR_6);

 VAR_7 = !!(VAR_6 & VAR_2);
 FUNC_0("DRAM ECC %s.\n", (VAR_7 ? "enabled" : "disabled"));

 VAR_8 = FUNC_1(VAR_5);
 if (!VAR_8)
  FUNC_2("NB MCE bank disabled, set MSR "
        "0x%08x[4] on node %d to enable.\n",
        VAR_0, VAR_5);

 if (!VAR_7 || !VAR_8) {
  FUNC_2("%s", VAR_3);
  return 0;
 }
 return 1;
}
