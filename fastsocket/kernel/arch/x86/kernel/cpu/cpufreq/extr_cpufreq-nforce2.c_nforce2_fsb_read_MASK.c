
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct pci_dev* VAR_5 ;
 struct pci_dev* FUNC_1 (int ,int,int ,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static unsigned int FUNC_4(int VAR_6)
{
 struct pci_dev *VAR_7;
 u32 VAR_8, VAR_9 = 0;


 VAR_7 = FUNC_1(VAR_4, 0x01EF,
    VAR_3, VAR_3, ((void*)0));
 if (!VAR_7)
  return 0;

 FUNC_3(VAR_7, VAR_0, &VAR_8);
 VAR_8 /= 1000000;


 FUNC_2(VAR_5, VAR_1, (u8 *)&VAR_9);

 if (VAR_6 || !VAR_9)
  return VAR_8;


 FUNC_3(VAR_5, VAR_2, &VAR_9);
 VAR_8 = FUNC_0(VAR_9);

 return VAR_8;
}
