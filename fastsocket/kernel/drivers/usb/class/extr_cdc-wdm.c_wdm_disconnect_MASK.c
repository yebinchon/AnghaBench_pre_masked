
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int count; int wait; int rxwork; int iuspin; int flags; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wdm_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct wdm_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct usb_interface*,int *) ;
 struct wdm_device* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_12(struct usb_interface *VAR_5)
{
 struct wdm_device *VAR_6;
 unsigned long VAR_7;

 FUNC_9(VAR_5, &VAR_3);
 FUNC_4(&VAR_4);
 VAR_6 = FUNC_10(VAR_5);


 FUNC_7(&VAR_6->iuspin, VAR_7);
 FUNC_6(VAR_0, &VAR_6->flags);
 FUNC_6(VAR_2, &VAR_6->flags);

 FUNC_2(VAR_1, &VAR_6->flags);
 FUNC_8(&VAR_6->iuspin, VAR_7);
 FUNC_0(&VAR_6->rxwork);
 FUNC_3(VAR_6);
 FUNC_11(&VAR_6->wait);
 if (!VAR_6->count)
  FUNC_1(VAR_6);
 FUNC_5(&VAR_4);
}
