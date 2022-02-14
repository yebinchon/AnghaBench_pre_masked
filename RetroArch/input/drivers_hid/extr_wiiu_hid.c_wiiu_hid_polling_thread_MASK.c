
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int polling_thread_quit; } ;
typedef TYPE_1__ wiiu_hid_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(int VAR_0, const char **VAR_1)
{
   wiiu_hid_t *VAR_2 = (wiiu_hid_t *)VAR_1;

   FUNC_0("[hid]: polling thread is starting\n");

   while(!VAR_2->polling_thread_quit)
   {
      FUNC_2(VAR_2, FUNC_1());
      FUNC_3(VAR_2);
   }

   FUNC_0("[hid]: polling thread is stopping\n");
   return 0;
}
