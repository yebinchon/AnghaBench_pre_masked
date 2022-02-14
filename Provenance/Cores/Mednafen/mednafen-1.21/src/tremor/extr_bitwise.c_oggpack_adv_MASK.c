
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int endbit; int endbyte; int storage; int * ptr; } ;
typedef TYPE_1__ oggpack_buffer ;



void FUNC_0(oggpack_buffer *VAR_0,int VAR_1){
  VAR_1+=VAR_0->endbit;

  if(VAR_0->endbyte > VAR_0->storage-((VAR_1+7)>>3)) goto overflow;

  VAR_0->ptr+=VAR_1/8;
  VAR_0->endbyte+=VAR_1/8;
  VAR_0->endbit=VAR_1&7;
  return;

 overflow:
  VAR_0->ptr=((void*)0);
  VAR_0->endbyte=VAR_0->storage;
  VAR_0->endbit=1;
}
