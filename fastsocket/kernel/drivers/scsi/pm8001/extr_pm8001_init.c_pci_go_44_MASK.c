
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_1)
{
 int VAR_2;

 if (!FUNC_3(VAR_1, FUNC_0(44))) {
  VAR_2 = FUNC_2(VAR_1, FUNC_0(44));
  if (VAR_2) {
   VAR_2 = FUNC_2(VAR_1,
    FUNC_0(32));
   if (VAR_2) {
    FUNC_1(VAR_0, &VAR_1->dev,
     "44-bit DMA enable failed\n");
    return VAR_2;
   }
  }
 } else {
  VAR_2 = FUNC_3(VAR_1, FUNC_0(32));
  if (VAR_2) {
   FUNC_1(VAR_0, &VAR_1->dev,
    "32-bit DMA enable failed\n");
   return VAR_2;
  }
  VAR_2 = FUNC_2(VAR_1, FUNC_0(32));
  if (VAR_2) {
   FUNC_1(VAR_0, &VAR_1->dev,
    "32-bit consistent DMA enable failed\n");
   return VAR_2;
  }
 }
 return VAR_2;
}
