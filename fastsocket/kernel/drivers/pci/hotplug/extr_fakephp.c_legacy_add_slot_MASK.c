
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct legacy_slot {int list; int dev; int kobj; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int *,int *,char*,int ) ;
 struct legacy_slot* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct pci_dev*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_6)
{
 struct legacy_slot *VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);

 if (!VAR_7)
  return -VAR_1;

 if (FUNC_2(&VAR_7->kobj, &VAR_3,
     &VAR_5->kobj, "%s",
     FUNC_0(&VAR_6->dev))) {
  FUNC_1(&VAR_6->dev, "Failed to created legacy fake slot\n");
  return -VAR_0;
 }
 VAR_7->dev = FUNC_5(VAR_6);

 FUNC_4(&VAR_7->list, &VAR_4);

 return 0;
}
