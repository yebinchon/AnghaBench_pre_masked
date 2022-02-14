
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_assoc_descriptor {int bFunctionProtocol; int bFunctionSubClass; int bFunctionClass; int bInterfaceCount; int bFirstInterface; } ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_2(char *VAR_1, char *VAR_2,
   const struct usb_interface_assoc_descriptor *VAR_3)
{
 if (VAR_1 > VAR_2)
  return VAR_1;
 VAR_1 += FUNC_1(VAR_1, VAR_0,
    VAR_3->bFirstInterface,
    VAR_3->bInterfaceCount,
    VAR_3->bFunctionClass,
    FUNC_0(VAR_3->bFunctionClass),
    VAR_3->bFunctionSubClass,
    VAR_3->bFunctionProtocol);
 return VAR_1;
}
