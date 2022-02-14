
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connected; void* data; int * iface; } ;
typedef TYPE_1__ joypad_connection_t ;



__attribute__((used)) static void FUNC_0(joypad_connection_t *VAR_0, unsigned VAR_1)
{
  joypad_connection_t *VAR_2 = (joypad_connection_t *)&VAR_0[VAR_1];
  VAR_2->connected = 0;
  VAR_2->iface = ((void*)0);
  VAR_2->data = (void *)0xdeadbeef;
}
