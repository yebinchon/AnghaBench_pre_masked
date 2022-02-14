
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * connections; } ;
typedef TYPE_1__ wiiusb_hid_t ;


 unsigned int VAR_0 ;
 char const* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static const char *FUNC_1(void *VAR_1, unsigned VAR_2)
{
   wiiusb_hid_t *VAR_3 = (wiiusb_hid_t*)VAR_1;
   if (VAR_2 >= VAR_0)
      return ((void*)0);

   if (VAR_3)
      return FUNC_0(&VAR_3->connections[VAR_2], VAR_2);

   return ((void*)0);
}
