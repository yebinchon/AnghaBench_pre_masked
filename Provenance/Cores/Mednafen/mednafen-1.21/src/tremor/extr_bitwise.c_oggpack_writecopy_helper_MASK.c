
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long endbit; scalar_t__ endbyte; scalar_t__ storage; scalar_t__* ptr; scalar_t__* buffer; } ;
typedef TYPE_1__ oggpack_buffer ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,void*,long) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(oggpack_buffer *VAR_1,
                                     void *VAR_2,
                                     long VAR_3,
                                     void (*VAR_4)(oggpack_buffer *,
                                               unsigned long,
                                               int),
                                     int VAR_5){
  unsigned char *VAR_6=(unsigned char *)VAR_2;

  long VAR_7=VAR_3/8;
  long VAR_8=(VAR_1->endbit+VAR_3)/8;
  VAR_3-=VAR_7*8;


  if(VAR_1->endbyte+VAR_8>=VAR_1->storage){
    void *VAR_9;
    if(!VAR_1->ptr) goto err;
    if(VAR_1->storage>VAR_1->endbyte+VAR_8+VAR_0) goto err;
    VAR_1->storage=VAR_1->endbyte+VAR_8+VAR_0;
    VAR_9=FUNC_0(VAR_1->buffer,VAR_1->storage);
    if(!VAR_9) goto err;
    VAR_1->buffer=VAR_9;
    VAR_1->ptr=VAR_1->buffer+VAR_1->endbyte;
  }


  if(VAR_1->endbit){
    int VAR_10;

    for(VAR_10=0;VAR_10<VAR_7;VAR_10++)
      VAR_4(VAR_1,(unsigned long)(VAR_6[VAR_10]),8);
  }else{

    FUNC_1(VAR_1->ptr,VAR_2,VAR_7);
    VAR_1->ptr+=VAR_7;
    VAR_1->endbyte+=VAR_7;
    *VAR_1->ptr=0;
  }


  if(VAR_3){
    if(VAR_5)
      VAR_4(VAR_1,(unsigned long)(VAR_6[VAR_7]>>(8-VAR_3)),VAR_3);
    else
      VAR_4(VAR_1,(unsigned long)(VAR_6[VAR_7]),VAR_3);
  }
  return;
 err:
  FUNC_2(VAR_1);
}
