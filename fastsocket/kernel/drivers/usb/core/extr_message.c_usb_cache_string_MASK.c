
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct usb_device*,int,char*,int) ;

char *FUNC_4(struct usb_device *VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_3 <= 0)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_4) {
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_1);
  if (VAR_6 > 0) {
   VAR_5 = FUNC_1(++VAR_6, VAR_0);
   if (!VAR_5)
    return VAR_4;
   FUNC_2(VAR_5, VAR_4, VAR_6);
  }
  FUNC_0(VAR_4);
 }
 return VAR_5;
}
