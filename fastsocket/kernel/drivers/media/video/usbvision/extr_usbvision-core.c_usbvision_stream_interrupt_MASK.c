
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {scalar_t__ streaming; int wait_stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int,int ) ;

int FUNC_2(struct usb_usbvision *VAR_4)
{
 int VAR_5 = 0;



 VAR_4->streaming = VAR_3;
 VAR_5 = FUNC_1(VAR_4->wait_stream,
     (VAR_4->streaming == VAR_2),
     FUNC_0(VAR_0*VAR_1));
 return VAR_5;
}
