
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int endbit; int endbyte; int storage; long* ptr; } ;
typedef TYPE_1__ oggpack_buffer ;


 unsigned long* VAR_0 ;

long FUNC_0(oggpack_buffer *VAR_1,int VAR_2){
  long VAR_3;
  unsigned long VAR_4;

  if(VAR_2<0 || VAR_2>32) goto err;
  VAR_4=VAR_0[VAR_2];
  VAR_2+=VAR_1->endbit;

  if(VAR_1->endbyte >= VAR_1->storage-4){

    if(VAR_1->endbyte > VAR_1->storage-((VAR_2+7)>>3)) goto overflow;


    else if(!VAR_2)return(0L);
  }

  VAR_3=VAR_1->ptr[0]>>VAR_1->endbit;
  if(VAR_2>8){
    VAR_3|=VAR_1->ptr[1]<<(8-VAR_1->endbit);
    if(VAR_2>16){
      VAR_3|=VAR_1->ptr[2]<<(16-VAR_1->endbit);
      if(VAR_2>24){
        VAR_3|=VAR_1->ptr[3]<<(24-VAR_1->endbit);
        if(VAR_2>32 && VAR_1->endbit){
          VAR_3|=VAR_1->ptr[4]<<(32-VAR_1->endbit);
        }
      }
    }
  }
  VAR_3&=VAR_4;
  VAR_1->ptr+=VAR_2/8;
  VAR_1->endbyte+=VAR_2/8;
  VAR_1->endbit=VAR_2&7;
  return VAR_3;

 overflow:
 err:
  VAR_1->ptr=((void*)0);
  VAR_1->endbyte=VAR_1->storage;
  VAR_1->endbit=1;
  return -1L;
}
