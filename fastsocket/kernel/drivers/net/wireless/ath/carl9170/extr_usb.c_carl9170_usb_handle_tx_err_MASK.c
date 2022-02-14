
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ context; } ;
struct sk_buff {int dummy; } ;
struct ar9170 {int tx_err; } ;


 int FUNC_0 (struct ar9170*,struct sk_buff*) ;
 int FUNC_1 (struct ar9170*,struct sk_buff*) ;
 int FUNC_2 (struct urb*) ;
 struct urb* FUNC_3 (int *) ;

void FUNC_4(struct ar9170 *VAR_0)
{
 struct urb *VAR_1;

 while ((VAR_1 = FUNC_3(&VAR_0->tx_err))) {
  struct sk_buff *VAR_2 = (void *)VAR_1->context;

  FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_0, VAR_2);
  FUNC_2(VAR_1);
 }
}
