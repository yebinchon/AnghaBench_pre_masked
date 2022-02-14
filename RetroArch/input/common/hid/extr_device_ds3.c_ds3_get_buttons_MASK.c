
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_bits_t ;
struct TYPE_2__ {int buttons; } ;
typedef TYPE_1__ ds3_instance_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(void *VAR_1, input_bits_t *VAR_2)
{
   ds3_instance_t *VAR_3 = (ds3_instance_t *)VAR_1;

   if(VAR_3)
   {
      FUNC_2(VAR_2, VAR_3->buttons);

      if(VAR_3->buttons & 0x10000)
         FUNC_1(VAR_2, VAR_0);
   } else {
      FUNC_0(VAR_2);
   }
}
