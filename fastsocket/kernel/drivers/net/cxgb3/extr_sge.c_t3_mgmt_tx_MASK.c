
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* qs; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {int * txq; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct adapter*,int *,struct sk_buff*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct adapter *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 FUNC_1();
 VAR_3 = FUNC_0(VAR_1, &VAR_1->sge.qs[0].txq[VAR_0], VAR_2);
 FUNC_2();

 return VAR_3;
}
