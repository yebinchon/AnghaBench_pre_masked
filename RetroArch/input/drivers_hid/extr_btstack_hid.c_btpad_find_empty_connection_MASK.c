
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btstack_hid_adapter {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct btstack_hid_adapter* VAR_2 ;

__attribute__((used)) static struct btstack_hid_adapter *FUNC_0(void)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      if (VAR_2[VAR_3].state == VAR_0)
         return &VAR_2[VAR_3];
   }

   return 0;
}
