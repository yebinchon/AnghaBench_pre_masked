
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int online; } ;
typedef TYPE_1__ hid_wiiu_gca_instance_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   hid_wiiu_gca_instance_t *VAR_1 = (hid_wiiu_gca_instance_t *)VAR_0;
   int VAR_2;

   if(VAR_1)
   {
      VAR_1->online = 0;

      for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
         FUNC_1(VAR_1, VAR_2);

      FUNC_0(VAR_1);
   }
}
