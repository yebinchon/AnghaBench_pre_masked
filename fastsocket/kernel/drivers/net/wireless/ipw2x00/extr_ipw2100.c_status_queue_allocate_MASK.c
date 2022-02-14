
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_status_queue {int size; struct ipw2100_status* drv; int nic; } ;
struct ipw2100_status {int dummy; } ;
struct ipw2100_priv {int pci_dev; struct ipw2100_status_queue status_queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ipw2100_status*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int,int *) ;

__attribute__((used)) static int FUNC_4(struct ipw2100_priv *VAR_1, int VAR_2)
{
 struct ipw2100_status_queue *VAR_3 = &VAR_1->status_queue;

 FUNC_0("enter\n");

 VAR_3->size = VAR_2 * sizeof(struct ipw2100_status);
 VAR_3->drv =
     (struct ipw2100_status *)FUNC_3(VAR_1->pci_dev,
         VAR_3->size, &VAR_3->nic);
 if (!VAR_3->drv) {
  FUNC_1("Can not allocate status queue.\n");
  return -VAR_0;
 }

 FUNC_2(VAR_3->drv, 0, VAR_3->size);

 FUNC_0("exit\n");

 return 0;
}
