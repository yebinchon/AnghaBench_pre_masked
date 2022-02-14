
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct msix_entry {int dummy; } ;
struct qib_msix_entry {struct msix_entry msix; } ;
struct qib_devdata {int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct msix_entry*) ;
 struct msix_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct msix_entry*,int) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (struct qib_devdata*,char*,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct qib_devdata *VAR_4, int VAR_5, u32 *VAR_6,
      struct qib_msix_entry *VAR_7)
{
 int VAR_8;
 u32 VAR_9 = 0;
 u16 VAR_10;
 struct msix_entry *VAR_11;
 int VAR_12;




 VAR_11 = FUNC_1(*VAR_6 * sizeof(*VAR_11), VAR_1);
 if (!VAR_11) {
  VAR_8 = -VAR_0;
  goto do_intx;
 }
 for (VAR_12 = 0; VAR_12 < *VAR_6; VAR_12++)
  VAR_11[VAR_12] = VAR_7[VAR_12].msix;

 FUNC_3(VAR_4->pcidev, VAR_5 + VAR_2, &VAR_10);
 VAR_9 = 1 + (VAR_10 & VAR_3);
 if (VAR_9 > *VAR_6)
  VAR_9 = *VAR_6;
 VAR_8 = FUNC_2(VAR_4->pcidev, VAR_11, VAR_9);
 if (VAR_8 > 0) {
  VAR_9 = VAR_8;
  VAR_8 = FUNC_2(VAR_4->pcidev, VAR_11, VAR_9);
 }
do_intx:
 if (VAR_8) {
  FUNC_4(VAR_4,
   "pci_enable_msix %d vectors failed: %d, falling back to INTx\n",
   VAR_9, VAR_8);
  VAR_9 = 0;
 }
 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
  VAR_7[VAR_12].msix = VAR_11[VAR_12];
 FUNC_0(VAR_11);
 *VAR_6 = VAR_9;

 if (VAR_8)
  FUNC_5(VAR_4->pcidev);

}
