
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static u64 FUNC_2(struct pci_dev *VAR_6, unsigned int VAR_7)
{
 u8 VAR_8;
 u32 VAR_9;
 u64 VAR_10;

 FUNC_0(VAR_6, VAR_7 + VAR_4, &VAR_8);

 if (VAR_8 & VAR_5)
  return VAR_3;

 FUNC_1(VAR_6, VAR_7 + VAR_1, &VAR_9);
 VAR_10 = VAR_9 & VAR_2;
 FUNC_1(VAR_6, VAR_7 + VAR_0, &VAR_9);
 VAR_10 = VAR_10 | ((u64)VAR_9 << 32);

 return VAR_10;
}
