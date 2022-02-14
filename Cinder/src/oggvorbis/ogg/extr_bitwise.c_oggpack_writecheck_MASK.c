
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int storage; int ptr; } ;
typedef TYPE_1__ oggpack_buffer ;



int FUNC_0(oggpack_buffer *VAR_0){
  if(!VAR_0->ptr || !VAR_0->storage)return -1;
  return 0;
}
