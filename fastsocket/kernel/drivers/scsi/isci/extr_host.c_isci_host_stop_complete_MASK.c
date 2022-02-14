
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_host {int eventq; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct isci_host*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct isci_host *VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_0(VAR_0, &VAR_1->flags);
 FUNC_2(&VAR_1->eventq);
}
