
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * ofldtxq; int * ctrlq; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct adapter *VAR_0, struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = FUNC_3(VAR_1);

 if (FUNC_4(FUNC_1(VAR_1)))
  return FUNC_0(&VAR_0->sge.ctrlq[VAR_2], VAR_1);
 return FUNC_2(&VAR_0->sge.ofldtxq[VAR_2], VAR_1);
}
