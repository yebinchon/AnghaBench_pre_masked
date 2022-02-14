
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whci_dev {int dummy; } ;
struct whci_card {int n_caps; int uwbbase; struct pci_dev* pci; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (struct whci_card*) ;
 struct whci_card* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,struct whci_card*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,char*) ;
 int FUNC_19 (struct whci_card*,int) ;
 int FUNC_20 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_21(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 struct whci_card *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7 < 0)
  goto error;
 FUNC_9(VAR_4);
 FUNC_16(VAR_4);
 VAR_7 = -VAR_2;
 if (!FUNC_14(VAR_4, FUNC_0(64)))
  FUNC_13(VAR_4, FUNC_0(64));
 else if (!FUNC_14(VAR_4, FUNC_0(32)))
  FUNC_13(VAR_4, FUNC_0(32));
 else
  goto error_dma;

 VAR_7 = VAR_8 = FUNC_20(VAR_4);
 if (VAR_8 < 0)
  goto error_ncaps;

 VAR_7 = -VAR_1;
 VAR_6 = FUNC_5(sizeof(struct whci_card)
         + sizeof(struct whci_dev *) * (VAR_8 + 1),
         VAR_3);
 if (VAR_6 == ((void*)0))
  goto error_kzalloc;
 VAR_6->pci = VAR_4;
 VAR_6->n_caps = VAR_8;

 VAR_7 = -VAR_0;
 if (!FUNC_18(FUNC_12(VAR_4, 0),
    FUNC_1(VAR_6->n_caps),
    "whci (capability data)"))
  goto error_request_memregion;
 VAR_7 = -VAR_1;
 VAR_6->uwbbase = FUNC_10(VAR_4, 0, FUNC_1(VAR_6->n_caps));
 if (!VAR_6->uwbbase)
  goto error_iomap;


 for (VAR_9 = 0; VAR_9 <= VAR_6->n_caps; VAR_9++) {
  VAR_7 = FUNC_19(VAR_6, VAR_9);
  if (VAR_7 < 0 && VAR_9 == 0) {
   FUNC_2(&VAR_4->dev, "cannot bind UWB radio controller:"
    " %d\n", VAR_7);
   goto error_bind;
  }
  if (VAR_7 < 0)
   FUNC_3(&VAR_4->dev, "warning: cannot bind capability "
     "#%u: %d\n", VAR_9, VAR_7);
 }
 FUNC_15(VAR_4, VAR_6);
 return 0;

error_bind:
 FUNC_11(VAR_4, VAR_6->uwbbase);
error_iomap:
 FUNC_17(FUNC_12(VAR_4, 0), FUNC_1(VAR_6->n_caps));
error_request_memregion:
 FUNC_4(VAR_6);
error_kzalloc:
error_ncaps:
error_dma:
 FUNC_7(VAR_4);
 FUNC_6(VAR_4);
error:
 return VAR_7;
}
