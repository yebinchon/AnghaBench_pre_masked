
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct btstack_hid_adapter {scalar_t__ handle; int address; scalar_t__ has_address; } ;
typedef scalar_t__ bd_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 unsigned int VAR_0 ;
 struct btstack_hid_adapter* VAR_1 ;

__attribute__((used)) static struct btstack_hid_adapter *FUNC_1(
      uint16_t VAR_2, bd_addr_t VAR_3)
{
   unsigned VAR_4;

   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   {
      if (!VAR_1[VAR_4].handle && !VAR_1[VAR_4].has_address)
         continue;

      if (VAR_2 && VAR_1[VAR_4].handle
            && VAR_2 != VAR_1[VAR_4].handle)
         continue;

      if (VAR_3 && VAR_1[VAR_4].has_address
            && (FUNC_0(VAR_3, VAR_1[VAR_4].address)))
         continue;

      return &VAR_1[VAR_4];
   }

   return 0;
}
