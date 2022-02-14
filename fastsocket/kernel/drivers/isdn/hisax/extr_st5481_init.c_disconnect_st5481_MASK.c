
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct st5481_adapter {int hisax_d_if; int * bcs; int list; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct st5481_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct st5481_adapter*) ;
 int FUNC_7 (struct st5481_adapter*) ;
 int FUNC_8 (struct st5481_adapter*) ;
 struct st5481_adapter* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_0)
{
 struct st5481_adapter *VAR_1 = FUNC_9(VAR_0);

 FUNC_0(1,"");

 FUNC_10(VAR_0, ((void*)0));
 if (!VAR_1)
  return;

 FUNC_3(&VAR_1->list);

 FUNC_8(VAR_1);
 FUNC_5(&VAR_1->bcs[1]);
 FUNC_5(&VAR_1->bcs[0]);
 FUNC_6(VAR_1);

 FUNC_4(2);
 FUNC_7(VAR_1);

 FUNC_1(&VAR_1->hisax_d_if);

 FUNC_2(VAR_1);
}
