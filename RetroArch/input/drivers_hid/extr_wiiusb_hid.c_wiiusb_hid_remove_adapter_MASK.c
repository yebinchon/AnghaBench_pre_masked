
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiiusb_adapter {scalar_t__ handle; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct wiiusb_adapter*) ;

__attribute__((used)) static int FUNC_2(struct wiiusb_adapter *VAR_0)
{
   if (!VAR_0)
      return -1;

   if (VAR_0->handle > 0)
      FUNC_0(&VAR_0->handle);

   FUNC_1(VAR_0);

   return 0;
}
