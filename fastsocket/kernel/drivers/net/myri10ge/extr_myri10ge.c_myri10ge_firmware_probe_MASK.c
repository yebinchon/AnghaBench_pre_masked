
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct myri10ge_priv {int tx_boundary; int fw_name; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct myri10ge_priv*,int ) ;
 int FUNC_3 (struct myri10ge_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct myri10ge_priv*,int) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct myri10ge_priv *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct device *VAR_7 = &VAR_6->dev;
 int VAR_8;

 VAR_5->tx_boundary = 4096;




 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7, "Couldn't read max read req size: %d\n", VAR_8);
  goto abort;
 }
 if (VAR_8 != 4096) {
  FUNC_1(VAR_7, "Max Read Request size != 4096 (%d)\n", VAR_8);
  VAR_5->tx_boundary = 2048;
 }




 VAR_5->fw_name = VAR_3;
 VAR_8 = FUNC_4(VAR_5, 1);
 if (VAR_8 != 0) {
  goto abort;
 }




 FUNC_3(VAR_5);






 VAR_8 = FUNC_2(VAR_5, VAR_2);
 if (VAR_8 == 0)
  return;

 if (VAR_8 != -VAR_0)
  FUNC_1(VAR_7, "DMA test failed: %d\n", VAR_8);
 if (VAR_8 == -VAR_1)
  FUNC_1(VAR_7, "Falling back to ethp! "
    "Please install up to date fw\n");
abort:

 VAR_5->tx_boundary = 2048;
 VAR_5->fw_name = VAR_4;

}
