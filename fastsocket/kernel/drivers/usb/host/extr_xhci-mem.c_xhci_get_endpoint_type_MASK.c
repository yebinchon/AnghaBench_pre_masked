
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_host_endpoint {int desc; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static u32 FUNC_7(struct usb_device *VAR_7,
  struct usb_host_endpoint *VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_2(&VAR_8->desc);
 if (FUNC_4(&VAR_8->desc)) {
  VAR_10 = FUNC_1(VAR_2);
 } else if (FUNC_3(&VAR_8->desc)) {
  if (VAR_9)
   VAR_10 = FUNC_1(VAR_0);
  else
   VAR_10 = FUNC_1(VAR_1);
 } else if (FUNC_6(&VAR_8->desc)) {
  if (VAR_9)
   VAR_10 = FUNC_1(VAR_5);
  else
   VAR_10 = FUNC_1(VAR_6);
 } else if (FUNC_5(&VAR_8->desc)) {
  if (VAR_9)
   VAR_10 = FUNC_1(VAR_3);
  else
   VAR_10 = FUNC_1(VAR_4);
 } else {
  FUNC_0();
 }
 return VAR_10;
}
