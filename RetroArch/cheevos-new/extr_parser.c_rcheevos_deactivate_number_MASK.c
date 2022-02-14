
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int userdata; int (* unlock_cb ) (unsigned int,int ) ;scalar_t__ is_element; } ;
typedef TYPE_1__ rcheevos_deactivate_t ;


 scalar_t__ FUNC_0 (char const*,int *,int) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(void* VAR_0,
      const char* VAR_1, size_t VAR_2)
{
   rcheevos_deactivate_t* VAR_3 = (rcheevos_deactivate_t*)VAR_0;
   unsigned VAR_4 = 0;

   if (VAR_3->is_element)
   {
      VAR_3->is_element = 0;
      VAR_4 = (unsigned)FUNC_0(VAR_1, ((void*)0), 10);

      VAR_3->unlock_cb(VAR_4, VAR_3->userdata);
   }

   return 0;
}
