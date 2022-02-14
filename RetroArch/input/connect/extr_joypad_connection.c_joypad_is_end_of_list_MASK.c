
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; int iface; int connected; } ;
typedef TYPE_1__ joypad_connection_t ;



__attribute__((used)) static bool FUNC_0(joypad_connection_t *VAR_0) {
  return VAR_0 && !VAR_0->connected && !VAR_0->iface && VAR_0->data == (void *)0xdeadbeef;
}
