
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct bcsp_struct* priv; } ;
struct bcsp_struct {int tbcsp; int unrel; int rel; int unack; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bcsp_struct*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_0)
{
 struct bcsp_struct *VAR_1 = VAR_0->priv;
 VAR_0->priv = ((void*)0);

 FUNC_0("hu %p", VAR_0);

 FUNC_3(&VAR_1->unack);
 FUNC_3(&VAR_1->rel);
 FUNC_3(&VAR_1->unrel);
 FUNC_1(&VAR_1->tbcsp);

 FUNC_2(VAR_1);
 return 0;
}
