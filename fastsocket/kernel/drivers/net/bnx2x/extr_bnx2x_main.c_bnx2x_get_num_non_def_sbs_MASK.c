
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3,
         int VAR_4, bool VAR_5)
{
 int VAR_6, VAR_7;
 u16 VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_3, VAR_0);





 if (!VAR_6) {
  FUNC_0(&VAR_3->dev, "no msix capability found\n");
  return 1 + VAR_4;
 }
 FUNC_0(&VAR_3->dev, "msix capability found\n");
 FUNC_2(VAR_3, VAR_6 + VAR_2, &VAR_8);

 VAR_7 = VAR_8 & VAR_1;

 return VAR_5 ? VAR_7 + 1 : VAR_7;
}
