
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wiiu_hid_t ;
typedef int uint32_t ;
struct TYPE_5__ {int data; TYPE_1__* iface; } ;
typedef TYPE_2__ joypad_connection_t ;
typedef int int16_t ;
struct TYPE_4__ {int (* get_axis ) (int ,int ) ;} ;


 TYPE_2__* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int16_t FUNC_2(void *VAR_0, unsigned VAR_1, uint32_t VAR_2)
{
   joypad_connection_t *VAR_3 = FUNC_0((wiiu_hid_t *)VAR_0, VAR_1);

   if (!VAR_3)
      return 0;

   return VAR_3->iface->get_axis(VAR_3->data, VAR_2);
}
