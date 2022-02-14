
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {int vbus_pin; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usba_udc *VAR_0)
{
 if (FUNC_1(VAR_0->vbus_pin))
  return FUNC_0(VAR_0->vbus_pin);


 return 1;
}
