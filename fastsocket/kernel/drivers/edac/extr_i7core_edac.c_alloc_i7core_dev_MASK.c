
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_id_table {int n_devs; } ;
struct i7core_dev {int n_devs; int list; int socket; void* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i7core_dev*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct i7core_dev *FUNC_3(u8 VAR_2,
        const struct pci_id_table *VAR_3)
{
 struct i7core_dev *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->pdev = FUNC_1(sizeof(*VAR_4->pdev) * VAR_3->n_devs,
       VAR_0);
 if (!VAR_4->pdev) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_4->socket = VAR_2;
 VAR_4->n_devs = VAR_3->n_devs;
 FUNC_2(&VAR_4->list, &VAR_1);

 return VAR_4;
}
