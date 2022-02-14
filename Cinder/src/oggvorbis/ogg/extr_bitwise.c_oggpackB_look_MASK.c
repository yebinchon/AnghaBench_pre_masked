
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int endbit; int endbyte; int storage; int* ptr; } ;
typedef TYPE_1__ oggpack_buffer ;



long FUNC_0(oggpack_buffer *VAR_0,int VAR_1){
  unsigned long VAR_2;
  int VAR_3=32-VAR_1;

  if(VAR_3<0 || VAR_3>32) return -1;
  VAR_1+=VAR_0->endbit;

  if(VAR_0->endbyte >= VAR_0->storage-4){

    if(VAR_0->endbyte > VAR_0->storage-((VAR_1+7)>>3)) return -1;


    else if(!VAR_1)return(0L);
  }

  VAR_2=VAR_0->ptr[0]<<(24+VAR_0->endbit);
  if(VAR_1>8){
    VAR_2|=VAR_0->ptr[1]<<(16+VAR_0->endbit);
    if(VAR_1>16){
      VAR_2|=VAR_0->ptr[2]<<(8+VAR_0->endbit);
      if(VAR_1>24){
        VAR_2|=VAR_0->ptr[3]<<(VAR_0->endbit);
        if(VAR_1>32 && VAR_0->endbit)
          VAR_2|=VAR_0->ptr[4]>>(8-VAR_0->endbit);
      }
    }
  }
  return ((VAR_2&0xffffffff)>>(VAR_3>>1))>>((VAR_3+1)>>1);
}
