
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct usb_ctrlrequest {int dummy; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct urb* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct urb*,struct usb_device*,unsigned int,unsigned char*,void*,int,int ,int *) ;
 int FUNC_2 (struct urb*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_3,
           unsigned int VAR_4,
           struct usb_ctrlrequest *VAR_5, void *VAR_6,
           int VAR_7, int VAR_8)
{
        struct urb *VAR_9;
        int VAR_10;
        int VAR_11 = 0;

        VAR_9 = FUNC_0(0, VAR_1);
        if (!VAR_9)
                return -VAR_0;

        FUNC_1(VAR_9, VAR_3, VAR_4, (unsigned char*)VAR_5, VAR_6,
    VAR_7, VAR_2, ((void*)0));

        VAR_10 = FUNC_2(VAR_9, VAR_8, &VAR_11);
        if (VAR_10 < 0) {
                return VAR_10;
 }
        else {
                return VAR_11;
 }
}
