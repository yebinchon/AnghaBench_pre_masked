
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct driver_data {int online_list; int dd_flag; int remove_list; struct pci_dev* pdev; int instance; int major; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*) ;
 int VAR_6 ;
 int FUNC_3 (int *,char*) ;
 int VAR_7 ;
 int FUNC_4 (struct driver_data*) ;
 struct driver_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct driver_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,struct driver_data*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int,int ) ;
 int FUNC_16 (struct pci_dev*,int) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct pci_dev *VAR_10,
   const struct pci_device_id *VAR_11)
{
 int VAR_12 = 0;
 struct driver_data *VAR_13 = ((void*)0);
 unsigned long VAR_14;


 VAR_13 = FUNC_5(sizeof(struct driver_data), VAR_1);
 if (VAR_13 == ((void*)0)) {
  FUNC_2(&VAR_10->dev,
   "Unable to allocate memory for driver data\n");
  return -VAR_0;
 }


 FUNC_12(VAR_10, VAR_13);

 VAR_12 = FUNC_14(VAR_10);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_10->dev, "Unable to enable device\n");
  goto iomap_err;
 }


 VAR_12 = FUNC_15(VAR_10, 1 << VAR_2, VAR_4);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_10->dev, "Unable to map regions\n");
  goto iomap_err;
 }

 if (!FUNC_11(VAR_10, FUNC_0(64))) {
  VAR_12 = FUNC_10(VAR_10, FUNC_0(64));

  if (VAR_12) {
   VAR_12 = FUNC_10(VAR_10,
      FUNC_0(32));
   if (VAR_12) {
    FUNC_3(&VAR_10->dev,
     "64-bit DMA enable failed\n");
    goto setmask_err;
   }
  }
 }

 FUNC_13(VAR_10);
 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12) {
  FUNC_3(&VAR_10->dev,
   "Unable to enable MSI interrupt.\n");
  goto block_initialize_err;
 }


 VAR_13->major = VAR_8;
 VAR_13->instance = VAR_7;
 VAR_13->pdev = VAR_10;

 FUNC_1(&VAR_13->online_list);
 FUNC_1(&VAR_13->remove_list);


 VAR_12 = FUNC_7(VAR_13);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_10->dev,
   "Unable to initialize block layer\n");
  goto block_initialize_err;
 }





 VAR_7++;
 if (VAR_12 != VAR_5)
  FUNC_17(VAR_3, &VAR_13->dd_flag);
 else
  VAR_12 = 0;


 FUNC_18(&VAR_6, VAR_14);
 FUNC_6(&VAR_13->online_list, &VAR_9);
 FUNC_19(&VAR_6, VAR_14);

 goto done;

block_initialize_err:
 FUNC_8(VAR_10);

setmask_err:
 FUNC_16(VAR_10, 1 << VAR_2);

iomap_err:
 FUNC_4(VAR_13);
 FUNC_12(VAR_10, ((void*)0));
 return VAR_12;
done:
 return VAR_12;
}
