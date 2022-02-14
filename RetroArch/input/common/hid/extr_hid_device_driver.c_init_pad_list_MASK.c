
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int max_slot; scalar_t__ pad_list; } ;
typedef TYPE_1__ hid_driver_instance_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(hid_driver_instance_t *VAR_1, unsigned VAR_2)
{
   if(!VAR_1 || VAR_2 > VAR_0)
      return 0;

   if(VAR_1->pad_list)
      return 1;

   FUNC_0("[hid]: initializing pad list...\n");
   VAR_1->pad_list = FUNC_1(VAR_2);
   if(!VAR_1->pad_list)
      return 0;

   VAR_1->max_slot = VAR_2;

   return 1;
}
