
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {struct mts_desc* scsi_status; } ;
struct mts_desc {TYPE_1__ context; int urb; int host; } ;


 int FUNC_0 (struct mts_desc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mts_desc* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7 (struct usb_interface *VAR_0)
{
 struct mts_desc *VAR_1 = FUNC_4(VAR_0);

 FUNC_6(VAR_0, ((void*)0));

 FUNC_5(VAR_1->urb);
 FUNC_2(VAR_1->host);

 FUNC_1(VAR_1->host);
 FUNC_3(VAR_1->urb);
 FUNC_0(VAR_1->context.scsi_status);
 FUNC_0(VAR_1);
}
