
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_hcd {int pending; int lock; int next_statechange; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (struct ohci_hcd *VAR_1)
{
 VAR_1->next_statechange = VAR_0;
 FUNC_1 (&VAR_1->lock);
 FUNC_0 (&VAR_1->pending);
}
