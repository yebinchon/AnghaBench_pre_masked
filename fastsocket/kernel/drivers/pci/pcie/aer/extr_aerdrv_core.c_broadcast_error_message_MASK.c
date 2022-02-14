
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int hdr_type; int error_state; int bus; int subordinate; int dev; } ;
struct aer_broadcast_data {int state; int result; } ;
typedef int pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,char*,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,int (*) (struct pci_dev*,void*),struct aer_broadcast_data*) ;
 int FUNC_3 (struct pci_dev*,void*) ;
 int FUNC_4 (struct pci_dev*,void*) ;

__attribute__((used)) static pci_ers_result_t FUNC_5(struct pci_dev *VAR_5,
 enum pci_channel_state VAR_6,
 char *VAR_7,
 int (*VAR_8)(struct pci_dev *, void *))
{
 struct aer_broadcast_data VAR_9;

 FUNC_0(VAR_0, &VAR_5->dev, "broadcast %s message\n", VAR_7);
 VAR_9.state = VAR_6;
 if (VAR_8 == FUNC_3)
  VAR_9.result = VAR_1;
 else
  VAR_9.result = VAR_2;

 if (VAR_5->hdr_type & VAR_3) {






  if (VAR_8 == FUNC_3)
   VAR_5->error_state = VAR_6;
  FUNC_2(VAR_5->subordinate, VAR_8, &VAR_9);
  if (VAR_8 == FUNC_4) {
   FUNC_1(VAR_5);
   VAR_5->error_state = VAR_4;
  }
 } else {




  FUNC_2(VAR_5->bus, VAR_8, &VAR_9);
 }

 return VAR_9.result;
}
