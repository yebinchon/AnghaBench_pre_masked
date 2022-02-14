
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct qlcnic_flt_entry {int size; size_t start_addr; } ;
struct qlcnic_adapter {TYPE_1__* ahw; struct pci_dev* pdev; struct firmware* fw; } ;
struct pci_dev {int dev; } ;
struct firmware {int dummy; } ;
typedef int __le64 ;
struct TYPE_2__ {size_t fw_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct qlcnic_adapter*,scalar_t__,int) ;
 int FUNC_1 (int *,char*,...) ;
 int * VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,int ,struct qlcnic_flt_entry*) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_8 (struct qlcnic_adapter*,size_t,int) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*,size_t,int*) ;

int
FUNC_10(struct qlcnic_adapter *VAR_7)
{
 __le64 *VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 const struct firmware *VAR_12 = VAR_7->fw;
 struct pci_dev *VAR_13 = VAR_7->pdev;

 FUNC_1(&VAR_13->dev, "loading firmware from %s\n",
   VAR_6[VAR_7->ahw->fw_type]);

 if (VAR_12) {
  u64 VAR_14;

  VAR_11 = (VAR_4 - VAR_2) / 8;

  VAR_8 = (__le64 *)FUNC_4(VAR_7);
  VAR_10 = VAR_2;

  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
   VAR_14 = FUNC_2(VAR_8[VAR_9]);

   if (FUNC_8(VAR_7, VAR_10, VAR_14))
    return -VAR_0;

   VAR_10 += 8;
  }

  VAR_11 = FUNC_7(VAR_7) / 8;

  VAR_8 = (__le64 *)FUNC_6(VAR_7);
  VAR_10 = VAR_4;

  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
   VAR_14 = FUNC_2(VAR_8[VAR_9]);

   if (FUNC_8(VAR_7,
      VAR_10, VAR_14))
    return -VAR_0;

   VAR_10 += 8;
  }

  VAR_11 = FUNC_7(VAR_7) % 8;
  if (VAR_11) {
   VAR_14 = FUNC_2(VAR_8[VAR_9]);

   if (FUNC_8(VAR_7,
      VAR_10, VAR_14))
    return -VAR_0;
  }

 } else {
  u64 VAR_15;
  u32 VAR_16, VAR_17;
  int VAR_18;
  struct qlcnic_flt_entry VAR_19;

  VAR_18 = FUNC_5(VAR_7, VAR_1,
     &VAR_19);
  if (!VAR_18) {
   VAR_11 = VAR_19.size / 8;
   VAR_10 = VAR_19.start_addr;
  } else {
   VAR_11 = (VAR_4 - VAR_2) / 8;
   VAR_10 = VAR_2;
   FUNC_1(&VAR_13->dev,
    "using legacy method to get flash fw region");
  }

  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
   if (FUNC_9(VAR_7,
     VAR_10, (int *)&VAR_17) != 0)
    return -VAR_0;
   if (FUNC_9(VAR_7,
     VAR_10 + 4, (int *)&VAR_16) != 0)
    return -VAR_0;

   VAR_15 = (((u64)VAR_16 << 32) | VAR_17);

   if (FUNC_8(VAR_7,
      VAR_10, VAR_15))
    return -VAR_0;

   VAR_10 += 8;
  }
 }
 FUNC_3(1);

 FUNC_0(VAR_7, VAR_3 + 0x18, 0x1020);
 FUNC_0(VAR_7, VAR_5, 0x80001e);
 return 0;
}
