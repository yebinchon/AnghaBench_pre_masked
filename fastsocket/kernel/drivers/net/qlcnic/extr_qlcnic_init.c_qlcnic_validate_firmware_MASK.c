
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; struct firmware* fw; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct firmware {scalar_t__ size; int * data; } ;
typedef int __le32 ;
struct TYPE_2__ {size_t fw_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct qlcnic_adapter*,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*,int ,...) ;
 int * VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (struct qlcnic_adapter*,int ,int*) ;
 scalar_t__ FUNC_10 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_11(struct qlcnic_adapter *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 struct pci_dev *VAR_15 = VAR_10->pdev;
 const struct firmware *VAR_16 = VAR_10->fw;
 u8 VAR_17 = VAR_10->ahw->fw_type;

 if (VAR_17 == VAR_7) {
  if (FUNC_10(VAR_10))
   return -VAR_0;

  VAR_14 = VAR_8;
 } else {
  VAR_11 = FUNC_6(*(__le32 *)&VAR_16->data[VAR_4]);
  if (VAR_11 != VAR_1)
   return -VAR_0;

  VAR_14 = VAR_5;
 }

 if (VAR_16->size < VAR_14)
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_10);
 VAR_12 = FUNC_0(VAR_11);

 if (VAR_12 < VAR_6) {
  FUNC_5(&VAR_15->dev,
    "%s: firmware version %d.%d.%d unsupported\n",
  VAR_9[VAR_17], FUNC_3(VAR_12), FUNC_4(VAR_12), FUNC_2(VAR_12));
  return -VAR_0;
 }

 VAR_11 = FUNC_7(VAR_10);
 FUNC_9(VAR_10, VAR_2, (int *)&VAR_13);
 if (VAR_11 != VAR_13) {
  FUNC_5(&VAR_15->dev, "%s: firmware bios is incompatible\n",
    VAR_9[VAR_17]);
  return -VAR_0;
 }

 FUNC_1(VAR_10, VAR_3, VAR_1);
 return 0;
}
