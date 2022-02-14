
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long endbit; long endbyte; int * ptr; int * buffer; } ;
typedef TYPE_1__ oggpack_buffer ;


 int * VAR_0 ;

void FUNC_0(oggpack_buffer *VAR_1,long VAR_2){
  long VAR_3=VAR_2>>3;
  if(VAR_1->ptr){
    VAR_2-=VAR_3*8;
    VAR_1->ptr=VAR_1->buffer+VAR_3;
    VAR_1->endbit=VAR_2;
    VAR_1->endbyte=VAR_3;
    *VAR_1->ptr&=VAR_0[VAR_2];
  }
}
