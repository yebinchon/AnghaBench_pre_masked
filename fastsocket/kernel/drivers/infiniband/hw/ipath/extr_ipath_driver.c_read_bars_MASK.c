
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ipath_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct ipath_devdata*,char*,int) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct ipath_devdata *VAR_2, struct pci_dev *VAR_3,
        u32 *VAR_4, u32 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_4);
 if (VAR_6)
  FUNC_1(VAR_2, "failed to read bar0 before enable: "
         "error %d\n", -VAR_6);

 VAR_6 = FUNC_2(VAR_3, VAR_1, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_2, "failed to read bar1 before enable: "
         "error %d\n", -VAR_6);

 FUNC_0("Read bar0 %x bar1 %x\n", *VAR_4, *VAR_5);
}
