
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef scalar_t__ pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_10, int VAR_11)
{
 pci_ers_result_t VAR_12, VAR_13 = VAR_3;
 enum pci_channel_state VAR_14;

 if (VAR_11 == VAR_0)
  VAR_14 = VAR_4;
 else
  VAR_14 = VAR_5;

 VAR_12 = FUNC_0(VAR_10,
   VAR_14,
   "error_detected",
   VAR_6);

 if (VAR_11 == VAR_0) {
  VAR_13 = FUNC_2(VAR_10);
  if (VAR_13 != VAR_3)
   goto failed;
 }

 if (VAR_12 == VAR_1)
  VAR_12 = FUNC_0(VAR_10,
    VAR_14,
    "mmio_enabled",
    VAR_7);

 if (VAR_12 == VAR_2) {





  VAR_12 = FUNC_0(VAR_10,
    VAR_14,
    "slot_reset",
    VAR_9);
 }

 if (VAR_12 != VAR_3)
  goto failed;

 FUNC_0(VAR_10,
    VAR_14,
    "resume",
    VAR_8);

 FUNC_1(&VAR_10->dev, "AER Device recovery successful\n");
 return;

failed:

 FUNC_1(&VAR_10->dev, "AER Device recovery failed\n");
}
