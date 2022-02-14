
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int endbyte; int storage; unsigned long* ptr; unsigned long* buffer; int endbit; } ;
typedef TYPE_1__ oggpack_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned long*,int) ;
 unsigned long* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(oggpack_buffer *VAR_3,unsigned long VAR_4,int VAR_5){
  if(VAR_5<0 || VAR_5>32) goto err;
  if(VAR_3->endbyte>=VAR_3->storage-4){
    void *VAR_6;
    if(!VAR_3->ptr)return;
    if(VAR_3->storage>VAR_1-VAR_0) goto err;
    VAR_6=FUNC_0(VAR_3->buffer,VAR_3->storage+VAR_0);
    if(!VAR_6) goto err;
    VAR_3->buffer=VAR_6;
    VAR_3->storage+=VAR_0;
    VAR_3->ptr=VAR_3->buffer+VAR_3->endbyte;
  }

  VAR_4=(VAR_4&VAR_2[VAR_5])<<(32-VAR_5);
  VAR_5+=VAR_3->endbit;

  VAR_3->ptr[0]|=VAR_4>>(24+VAR_3->endbit);

  if(VAR_5>=8){
    VAR_3->ptr[1]=(unsigned char)(VAR_4>>(16+VAR_3->endbit));
    if(VAR_5>=16){
      VAR_3->ptr[2]=(unsigned char)(VAR_4>>(8+VAR_3->endbit));
      if(VAR_5>=24){
        VAR_3->ptr[3]=(unsigned char)(VAR_4>>(VAR_3->endbit));
        if(VAR_5>=32){
          if(VAR_3->endbit)
            VAR_3->ptr[4]=(unsigned char)(VAR_4<<(8-VAR_3->endbit));
          else
            VAR_3->ptr[4]=0;
        }
      }
    }
  }

  VAR_3->endbyte+=VAR_5/8;
  VAR_3->ptr+=VAR_5/8;
  VAR_3->endbit=VAR_5&7;
  return;
 err:
  FUNC_1(VAR_3);
}
