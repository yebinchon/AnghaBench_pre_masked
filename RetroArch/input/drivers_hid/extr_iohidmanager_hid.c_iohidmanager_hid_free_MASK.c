
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slots; int ptr; } ;
typedef TYPE_1__ iohidmanager_hid_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const void *VAR_0)
{
   iohidmanager_hid_t *VAR_1 = (iohidmanager_hid_t*)VAR_0;

   if (!VAR_1 || !VAR_1->ptr)
      return;

   FUNC_2(VAR_1->slots);
   FUNC_1(VAR_1);

   if (VAR_1)
      FUNC_0(VAR_1);
}
