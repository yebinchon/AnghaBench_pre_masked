
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {scalar_t__ revision; } ;
struct et131x_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (int) ;

int FUNC_6(struct et131x_adapter *VAR_14, u32 VAR_15, u8 VAR_16)
{
 struct pci_dev *VAR_17 = VAR_14->pdev;
 int VAR_18;
 int VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;
 u8 VAR_23;
 u8 VAR_24 = 0;
 u32 VAR_25 = 0;
 u32 VAR_26 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {

  if (FUNC_2(VAR_17, VAR_6,
       &VAR_25)) {
   VAR_20 = 1;
   break;
  }

  VAR_24 = FUNC_1(VAR_25);

  if (VAR_24 & VAR_10 &&
   VAR_24 & VAR_9)

   break;
 }

 if (VAR_20 || (VAR_18 >= VAR_11))
  return VAR_0;


 VAR_23 = 0;
 VAR_23 |= VAR_3 | VAR_2;

 if (FUNC_3(VAR_17, VAR_4,
      VAR_23)) {
  return VAR_0;
 }

 VAR_21 = 1;



 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {

  if (FUNC_4(VAR_17, VAR_1,
        VAR_15)) {
   break;
  }


  if (FUNC_3(VAR_17, VAR_5,
       VAR_16)) {
   break;
  }


  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {

   if (FUNC_2(VAR_17,
        VAR_6,
        &VAR_25)) {
    VAR_20 = 1;
    break;
   }

   VAR_24 = FUNC_1(VAR_25);

   if (VAR_24 & VAR_10 &&
    VAR_24 & VAR_9) {

    break;
   }
  }

  if (VAR_20 || (VAR_18 >= VAR_11))
   break;





  if (VAR_24 & VAR_8
      && VAR_14->pdev->revision == 0) {
   break;
  }


  if (VAR_24 & VAR_7) {






   FUNC_5(10);
   continue;
  }

  VAR_22 = 1;
  break;
 }


 FUNC_5(10);
 VAR_18 = 0;
 while (VAR_21) {
  VAR_23 &= ~VAR_2;

  if (FUNC_3(VAR_17, VAR_4,
       VAR_23)) {
   VAR_22 = 0;
  }




  do {
   FUNC_4(VAR_17,
            VAR_1,
            VAR_15);
   do {
    FUNC_2(VAR_17,
     VAR_5, &VAR_26);
   } while ((VAR_26 & 0x00010000) == 0);
  } while (VAR_26 & 0x00040000);

  VAR_23 = FUNC_0(VAR_26);

  if (VAR_23 != 0xC0 || VAR_18 == 10000)
   break;

  VAR_18++;
 }

 return VAR_22 ? VAR_13 : VAR_0;
}
