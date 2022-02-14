
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {scalar_t__ condition; } ;
struct usb_device {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct usb_device*) ;

int FUNC_3(struct usb_device *VAR_10,
         const struct usb_interface *VAR_11)
{
 unsigned long VAR_12 = VAR_9 + VAR_4;

 if (VAR_10->state == VAR_7)
  return -VAR_3;
 if (VAR_10->state == VAR_8)
  return -VAR_1;
 if (VAR_11 && (VAR_11->condition == VAR_5 ||
   VAR_11->condition == VAR_6))
  return -VAR_2;

 while (FUNC_2(VAR_10) != 0) {



  if (FUNC_1(VAR_9, VAR_12))
   return -VAR_0;

  FUNC_0(15);
  if (VAR_10->state == VAR_7)
   return -VAR_3;
  if (VAR_10->state == VAR_8)
   return -VAR_1;
  if (VAR_11 && (VAR_11->condition == VAR_5 ||
    VAR_11->condition == VAR_6))
   return -VAR_2;
 }
 return 0;
}
