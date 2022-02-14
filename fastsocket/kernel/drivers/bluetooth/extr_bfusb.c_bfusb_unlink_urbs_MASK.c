
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct bfusb_data_scb {struct urb* urb; } ;
struct bfusb_data {int completed_q; int pending_q; } ;


 int FUNC_0 (char*,struct bfusb_data*) ;
 struct urb* FUNC_1 (struct bfusb_data*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;

__attribute__((used)) static void FUNC_6(struct bfusb_data *VAR_0)
{
 struct sk_buff *VAR_1;
 struct urb *VAR_2;

 FUNC_0("bfusb %p", VAR_0);

 while ((VAR_1 = FUNC_2(&VAR_0->pending_q))) {
  VAR_2 = ((struct bfusb_data_scb *) VAR_1->cb)->urb;
  FUNC_5(VAR_2);
  FUNC_3(&VAR_0->completed_q, VAR_1);
 }

 while ((VAR_2 = FUNC_1(VAR_0)))
  FUNC_4(VAR_2);
}
