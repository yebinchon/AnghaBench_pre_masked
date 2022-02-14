
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_config_descriptor {int bMaxPower; int bmAttributes; int bConfigurationValue; int bNumInterfaces; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,char,int ,int ,int ,int) ;

__attribute__((used)) static char *FUNC_1(char *VAR_1, char *VAR_2,
    const struct usb_config_descriptor *VAR_3,
    int VAR_4)
{
 if (VAR_1 > VAR_2)
  return VAR_1;
 VAR_1 += FUNC_0(VAR_1, VAR_0,

    VAR_4 ? '*' : ' ',
    VAR_3->bNumInterfaces,
    VAR_3->bConfigurationValue,
    VAR_3->bmAttributes,
    VAR_3->bMaxPower * 2);
 return VAR_1;
}
