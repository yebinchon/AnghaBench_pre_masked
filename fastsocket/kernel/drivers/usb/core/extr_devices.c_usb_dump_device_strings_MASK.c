
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {scalar_t__ serial; scalar_t__ product; scalar_t__ manufacturer; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__) ;

__attribute__((used)) static char *FUNC_1(char *VAR_3, char *VAR_4,
         struct usb_device *VAR_5)
{
 if (VAR_3 > VAR_4)
  return VAR_3;
 if (VAR_5->manufacturer)
  VAR_3 += FUNC_0(VAR_3, VAR_0,
     VAR_5->manufacturer);
 if (VAR_3 > VAR_4)
  goto out;
 if (VAR_5->product)
  VAR_3 += FUNC_0(VAR_3, VAR_1, VAR_5->product);
 if (VAR_3 > VAR_4)
  goto out;





 out:
 return VAR_3;
}
