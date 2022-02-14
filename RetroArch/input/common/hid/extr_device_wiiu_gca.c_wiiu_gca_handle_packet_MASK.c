
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int device_state; int online; } ;
typedef TYPE_1__ hid_wiiu_gca_instance_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
   hid_wiiu_gca_instance_t *VAR_3 = (hid_wiiu_gca_instance_t *)VAR_0;
   if(!VAR_3 || !VAR_3->online)
   {
      FUNC_0("[gca]: instance null or not ready yet.\n");
      return;
   }

   if(VAR_2 > sizeof(VAR_3->device_state))
   {
      FUNC_0("[gca]: packet size %d is too big for buffer of size %d\n",
         VAR_2, sizeof(VAR_3->device_state));
      return;
   }

   FUNC_1(VAR_3->device_state, VAR_1, VAR_2);
   FUNC_2(VAR_3);
}
