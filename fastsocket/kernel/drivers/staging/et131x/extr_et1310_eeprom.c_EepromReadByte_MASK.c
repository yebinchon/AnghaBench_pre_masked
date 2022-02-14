
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct et131x_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ,int *) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ,int ) ;

int FUNC_5(struct et131x_adapter *VAR_10, u32 VAR_11, u8 *VAR_12)
{
 struct pci_dev *VAR_13 = VAR_10->pdev;
 int VAR_14;
 int VAR_15 = 0;
 u8 VAR_16;
 u8 VAR_17 = 0;
 u32 VAR_18 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {

  if (FUNC_2(VAR_13, VAR_4,
       &VAR_18)) {
   VAR_15 = 1;
   break;
  }

  VAR_17 = FUNC_1(VAR_18);

  if (VAR_17 & VAR_7 &&
      VAR_17 & VAR_6) {

   break;
  }
 }

 if (VAR_15 || (VAR_14 >= VAR_8))
  return VAR_0;


 VAR_16 = 0;
 VAR_16 |= VAR_2;

 if (FUNC_3(VAR_13, VAR_3,
      VAR_16)) {
  return VAR_0;
 }



 if (FUNC_4(VAR_13, VAR_1,
       VAR_11)) {
  return VAR_0;
 }


 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {

  if (FUNC_2(VAR_13, VAR_4,
       &VAR_18)) {
   VAR_15 = 1;
   break;
  }

  VAR_17 = FUNC_1(VAR_18);

  if (VAR_17 & VAR_7
      && VAR_17 & VAR_6) {

   break;
  }
 }

 if (VAR_15 || (VAR_14 >= VAR_8))
  return VAR_0;


 *VAR_12 = FUNC_0(VAR_18);

 return (VAR_17 & VAR_5) ? VAR_0 : VAR_9;
}
