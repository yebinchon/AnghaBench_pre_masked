
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * qs; } ;
struct adapter {TYPE_1__ sge; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int *) ;

void FUNC_1(struct adapter *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  FUNC_0(VAR_1, &VAR_1->sge.qs[VAR_2]);
}
