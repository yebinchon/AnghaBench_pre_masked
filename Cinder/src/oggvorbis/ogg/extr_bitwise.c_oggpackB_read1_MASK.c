
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ endbyte; scalar_t__ storage; int* ptr; int endbit; } ;
typedef TYPE_1__ oggpack_buffer ;



long FUNC_0(oggpack_buffer *VAR_0){
  long VAR_1;

  if(VAR_0->endbyte >= VAR_0->storage) goto overflow;
  VAR_1=(VAR_0->ptr[0]>>(7-VAR_0->endbit))&1;

  VAR_0->endbit++;
  if(VAR_0->endbit>7){
    VAR_0->endbit=0;
    VAR_0->ptr++;
    VAR_0->endbyte++;
  }
  return VAR_1;

 overflow:
  VAR_0->ptr=((void*)0);
  VAR_0->endbyte=VAR_0->storage;
  VAR_0->endbit=1;
  return -1L;
}
