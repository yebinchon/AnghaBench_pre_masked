
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Port {scalar_t__ RxRemove; scalar_t__ RxEnd; TYPE_1__* PhbP; int Caddr; int * RxStart; } ;
struct TYPE_2__ {int rx_remove; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

void FUNC_3(struct Port *VAR_1)
{
 FUNC_2(FUNC_1(VAR_1->RxRemove) & ~VAR_0, VAR_1->RxRemove);
 VAR_1->RxRemove = (VAR_1->RxRemove == VAR_1->RxEnd) ? VAR_1->RxStart : VAR_1->RxRemove + 1;
 FUNC_2(FUNC_0(VAR_1->Caddr, VAR_1->RxRemove), &VAR_1->PhbP->rx_remove);
}
