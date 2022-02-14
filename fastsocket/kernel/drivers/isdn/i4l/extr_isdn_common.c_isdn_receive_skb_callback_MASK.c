
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__** drv; int * v110use; scalar_t__* v110; int * ibytes; } ;
struct TYPE_3__ {int * rcv_waitq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int,int,int,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (scalar_t__,struct sk_buff*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(int VAR_1, int VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_3(VAR_1, VAR_2)) == -1) {
  FUNC_2(VAR_3);
  return;
 }

 VAR_0->ibytes[VAR_4] += VAR_3->len;


 if (FUNC_4(VAR_4, VAR_3))
  return;





 if (VAR_0->v110[VAR_4]) {
  FUNC_1(&VAR_0->v110use[VAR_4]);
  VAR_3 = FUNC_6(VAR_0->v110[VAR_4], VAR_3);
  FUNC_0(&VAR_0->v110use[VAR_4]);
  if (!VAR_3)
   return;
 }


 if (VAR_3->len) {
  if (FUNC_5(VAR_4, VAR_1, VAR_2, VAR_3))
   return;
  FUNC_7(&VAR_0->drv[VAR_1]->rcv_waitq[VAR_2]);
 } else
  FUNC_2(VAR_3);
}
