
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_hub {int disconnected; int kref; int buffer; int status; int descriptor; int port_owners; int urb; TYPE_1__* hdev; scalar_t__ error; int event_list; } ;
struct TYPE_2__ {scalar_t__ speed; scalar_t__ maxchild; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_hub*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct usb_hub* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_5)
{
 struct usb_hub *VAR_6 = FUNC_7 (VAR_5);


 FUNC_4(&VAR_3);
 FUNC_3(&VAR_6->event_list);
 VAR_6->disconnected = 1;
 FUNC_5(&VAR_3);


 VAR_6->error = 0;
 FUNC_0(VAR_6, VAR_0);

 FUNC_8 (VAR_5, ((void*)0));
 VAR_6->hdev->maxchild = 0;

 if (VAR_6->hdev->speed == VAR_1)
  VAR_2--;

 FUNC_6(VAR_6->urb);
 FUNC_1(VAR_6->port_owners);
 FUNC_1(VAR_6->descriptor);
 FUNC_1(VAR_6->status);
 FUNC_1(VAR_6->buffer);

 FUNC_2(&VAR_6->kref, VAR_4);
}
