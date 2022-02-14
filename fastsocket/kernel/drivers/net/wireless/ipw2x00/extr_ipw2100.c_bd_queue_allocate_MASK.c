
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int pci_dev; } ;
struct ipw2100_bd_queue {int entries; int size; struct ipw2100_bd_queue* drv; int nic; } ;
struct ipw2100_bd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ipw2100_bd_queue*,int ,int) ;
 struct ipw2100_bd_queue* FUNC_2 (int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct ipw2100_priv *VAR_1,
        struct ipw2100_bd_queue *VAR_2, int VAR_3)
{
 FUNC_0("enter\n");

 FUNC_1(VAR_2, 0, sizeof(struct ipw2100_bd_queue));

 VAR_2->entries = VAR_3;
 VAR_2->size = VAR_3 * sizeof(struct ipw2100_bd);
 VAR_2->drv = FUNC_2(VAR_1->pci_dev, VAR_2->size, &VAR_2->nic);
 if (!VAR_2->drv) {
  FUNC_0
      ("can't allocate shared memory for buffer descriptors\n");
  return -VAR_0;
 }
 FUNC_1(VAR_2->drv, 0, VAR_2->size);

 FUNC_0("exit\n");

 return 0;
}
