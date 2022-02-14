
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {unsigned int transfer_flags; int actual_length; int status; } ;
struct sisusb_usb_data {scalar_t__ completein; int wait_q; int sisusb_dev; struct urb* sisurbin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct urb*,int ,unsigned int,void*,int,int ,struct sisusb_usb_data*) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*,int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_4(struct sisusb_usb_data *VAR_3, unsigned int VAR_4, void *VAR_5,
 int VAR_6, int *VAR_7, int VAR_8, unsigned int VAR_9)
{
 struct urb *VAR_10 = VAR_3->sisurbin;
 int VAR_11, VAR_12 = 0;

 VAR_10->transfer_flags = 0;

 FUNC_0(VAR_10, VAR_3->sisusb_dev, VAR_4, VAR_5, VAR_6,
   VAR_2, VAR_3);

 VAR_10->transfer_flags |= VAR_9;
 VAR_10->actual_length = 0;

 VAR_3->completein = 0;
 VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (VAR_11 == 0) {
  FUNC_3(VAR_3->wait_q, VAR_3->completein, VAR_8);
  if (!VAR_3->completein) {

   FUNC_1(VAR_10);
   VAR_11 = -VAR_0;
  } else {

   VAR_11 = VAR_10->status;
   VAR_12 = VAR_10->actual_length;
  }
 }

 if (VAR_7)
  *VAR_7 = VAR_12;

 return VAR_11;
}
