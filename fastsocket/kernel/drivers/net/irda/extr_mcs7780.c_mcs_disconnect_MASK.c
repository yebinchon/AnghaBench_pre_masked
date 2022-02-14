
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct mcs_cb {int netdev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mcs_cb* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct mcs_cb *VAR_1 = FUNC_4(VAR_0);

 if (!VAR_1)
  return;

 FUNC_1();

 FUNC_3(VAR_1->netdev);
 FUNC_2(VAR_1->netdev);

 FUNC_5(VAR_0, ((void*)0));
 FUNC_0(0, "MCS7780 now disconnected.\n");
}
