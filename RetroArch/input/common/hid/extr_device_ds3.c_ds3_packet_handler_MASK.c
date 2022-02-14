
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int led_set; int data; scalar_t__ pad; } ;
typedef TYPE_1__ ds3_instance_t ;
typedef int ds3_control_packet ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, uint8_t *VAR_1, uint16_t VAR_2)
{
   ds3_instance_t *VAR_3 = (ds3_instance_t *)VAR_0;

   if(VAR_3->pad && !VAR_3->led_set)
   {
      FUNC_1(VAR_3);
      VAR_3->led_set = 1;
   }

   if(VAR_2 > sizeof(ds3_control_packet))
   {
      FUNC_0("[ds3]: Expecting packet to be %d but was %d\n",
         sizeof(ds3_control_packet), VAR_2);
      return;
   }

   FUNC_4(VAR_3->data, VAR_1, VAR_2);
   FUNC_3(VAR_3);
   FUNC_2(VAR_3);
}
