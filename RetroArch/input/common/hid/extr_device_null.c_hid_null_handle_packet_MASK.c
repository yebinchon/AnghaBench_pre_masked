
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* pad; } ;
typedef TYPE_3__ hid_null_instance_t ;
struct TYPE_5__ {int data; TYPE_1__* iface; } ;
struct TYPE_4__ {int (* packet_handler ) (int ,int *,size_t) ;} ;


 int FUNC_0 (int ,int *,size_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
   hid_null_instance_t *VAR_3 = (hid_null_instance_t *)VAR_0;

   if (VAR_3 && VAR_3->pad)
      VAR_3->pad->iface->packet_handler(VAR_3->pad->data, VAR_1, VAR_2);
}
