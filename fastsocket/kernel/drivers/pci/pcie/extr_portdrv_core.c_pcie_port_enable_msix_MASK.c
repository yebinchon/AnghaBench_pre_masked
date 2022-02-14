
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct msix_entry {int entry; int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct msix_entry*) ;
 struct msix_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,struct msix_entry*,int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (struct msix_entry*,int,int) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_16, int *VAR_17, int VAR_18)
{
 struct msix_entry *VAR_19;
 int VAR_20[VAR_4];
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 u16 VAR_26;
 u32 VAR_27;

 VAR_21 = FUNC_5(VAR_16);
 if (!VAR_21)
  return -VAR_0;
 if (VAR_21 > VAR_5)
  VAR_21 = VAR_5;

 VAR_19 = FUNC_1(sizeof(*VAR_19) * VAR_21, VAR_3);
 if (!VAR_19)
  return -VAR_2;







 for (VAR_24 = 0; VAR_24 < VAR_21; VAR_24++)
  VAR_19[VAR_24].entry = VAR_24;

 VAR_22 = FUNC_3(VAR_16, VAR_19, VAR_21);
 if (VAR_22)
  goto Exit;

 for (VAR_24 = 0; VAR_24 < VAR_4; VAR_24++)
  VAR_20[VAR_24] = -1;
 VAR_22 = -VAR_1;
 VAR_25 = 0;

 if (VAR_18 & (VAR_10 | VAR_8)) {
  int VAR_28;
  FUNC_7(VAR_16, VAR_13, &VAR_26);
  VAR_28 = (VAR_26 & VAR_14) >> 9;
  if (VAR_28 >= VAR_21)
   goto Error;

  VAR_24 = FUNC_8(VAR_19, VAR_28, VAR_25);
  if (VAR_24 == VAR_25)
   VAR_25++;

  VAR_20[VAR_11] = VAR_24;
  VAR_20[VAR_9] = VAR_24;
 }

 if (VAR_18 & VAR_6) {
  int VAR_29;
  VAR_23 = FUNC_4(VAR_16, VAR_15);
  FUNC_6(VAR_16, VAR_23 + VAR_12, &VAR_27);
  VAR_29 = VAR_27 >> 27;
  if (VAR_29 >= VAR_21)
   goto Error;

  VAR_24 = FUNC_8(VAR_19, VAR_29, VAR_25);
  if (VAR_24 == VAR_25)
   VAR_25++;

  VAR_20[VAR_7] = VAR_24;
 }






 if (VAR_25 == VAR_21) {
  VAR_22 = 0;
 } else {

  FUNC_2(VAR_16);


  VAR_22 = FUNC_3(VAR_16, VAR_19, VAR_25);
  if (VAR_22)
   goto Exit;
 }

 for (VAR_24 = 0; VAR_24 < VAR_4; VAR_24++)
  VAR_17[VAR_24] = VAR_20[VAR_24] >= 0 ? VAR_19[VAR_20[VAR_24]].vector : -1;

 Exit:
 FUNC_0(VAR_19);
 return VAR_22;

 Error:
 FUNC_2(VAR_16);
 goto Exit;
}
