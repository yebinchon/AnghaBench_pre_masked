
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ endbyte; scalar_t__ endbit; scalar_t__* buffer; scalar_t__* ptr; } ;
typedef TYPE_1__ oggpack_buffer ;



void FUNC_0(oggpack_buffer *VAR_0){
  if(!VAR_0->ptr)return;
  VAR_0->ptr=VAR_0->buffer;
  VAR_0->buffer[0]=0;
  VAR_0->endbit=VAR_0->endbyte=0;
}
