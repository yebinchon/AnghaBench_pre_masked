
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td {int node; } ;
struct fhci_hcd {int empty_tds; } ;


 int FUNC_0 (struct td*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct fhci_hcd *VAR_0, struct td *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->node, &VAR_0->empty_tds);
}
