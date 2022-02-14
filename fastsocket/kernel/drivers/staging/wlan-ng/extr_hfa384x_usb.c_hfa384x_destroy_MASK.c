
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; int authq; int * scanresults; } ;
typedef TYPE_1__ hfa384x_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 struct sk_buff* FUNC_3 (int *) ;

void FUNC_4(hfa384x_t *VAR_2)
{
 struct sk_buff *VAR_3;

 if (VAR_2->state == VAR_1)
  FUNC_1(VAR_2);
 VAR_2->state = VAR_0;

 if (VAR_2->scanresults) {
  FUNC_2(VAR_2->scanresults);
  VAR_2->scanresults = ((void*)0);
 }


 while ((VAR_3 = FUNC_3(&VAR_2->authq)))
  FUNC_0(VAR_3);
}
