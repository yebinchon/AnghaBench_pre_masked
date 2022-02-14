
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int wIndex; int wValue; } ;
struct urb {int dev; scalar_t__ setup_packet; } ;
typedef int __u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ,...) ;

__attribute__((used)) static int FUNC_4(struct urb *VAR_0)
{
 struct usb_ctrlrequest *VAR_1;
 __u16 VAR_2;
 __u16 VAR_3;
 int VAR_4;

 VAR_1 = (struct usb_ctrlrequest *) VAR_0->setup_packet;
 VAR_2 = FUNC_0(VAR_1->wValue);
 VAR_3 = FUNC_0(VAR_1->wIndex);

 FUNC_2("set_interface: inf %u alt %u\n", VAR_3,
        VAR_2);

 VAR_4 = FUNC_1(VAR_0->dev, VAR_3, VAR_2);
 if (VAR_4 < 0)
  FUNC_3("set_interface error: inf %u alt %u, %d\n",
     VAR_3, VAR_2, VAR_4);
 else
  FUNC_3("set_interface done: inf %u alt %u\n",
       VAR_3,
       VAR_2);

 return VAR_4;
}
