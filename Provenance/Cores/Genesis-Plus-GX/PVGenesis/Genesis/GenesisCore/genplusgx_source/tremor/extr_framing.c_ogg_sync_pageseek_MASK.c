
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int oggbyte_buffer ;
typedef scalar_t__ ogg_uint32_t ;
struct TYPE_12__ {long fifo_fill; int headerbytes; long bodybytes; scalar_t__ fifo_head; TYPE_4__* fifo_tail; scalar_t__ unsynced; } ;
typedef TYPE_2__ ogg_sync_state ;
struct TYPE_13__ {long header_len; long body_len; void* body; void* header; } ;
typedef TYPE_3__ ogg_page ;
struct TYPE_14__ {int begin; long length; TYPE_1__* buffer; } ;
struct TYPE_11__ {unsigned char* data; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,long) ;
 unsigned char* FUNC_1 (unsigned char*,char,long) ;
 void* FUNC_2 (TYPE_4__*,long) ;
 void* FUNC_3 (TYPE_4__**,scalar_t__*,long) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,scalar_t__,int) ;

long FUNC_9(ogg_sync_state *VAR_0,ogg_page *VAR_1){
  oggbyte_buffer VAR_2;
  long VAR_3,VAR_4=0;

  FUNC_4(VAR_1);

  VAR_3=VAR_0->fifo_fill;
  FUNC_5(&VAR_2,VAR_0->fifo_tail);

  if(VAR_0->headerbytes==0){
    if(VAR_3<27)goto sync_out;


    if(FUNC_6(&VAR_2,0)!=(int)'O' ||
       FUNC_6(&VAR_2,1)!=(int)'g' ||
       FUNC_6(&VAR_2,2)!=(int)'g' ||
       FUNC_6(&VAR_2,3)!=(int)'S' ) goto sync_fail;

    VAR_0->headerbytes=FUNC_6(&VAR_2,26)+27;
  }
  if(VAR_3<VAR_0->headerbytes)goto sync_out;

  if(VAR_0->bodybytes==0){
    int VAR_5;

    for(VAR_5=0;VAR_5<VAR_0->headerbytes-27;VAR_5++)
      VAR_0->bodybytes+=FUNC_6(&VAR_2,27+VAR_5);
  }

  if(VAR_0->bodybytes+VAR_0->headerbytes>VAR_3)goto sync_out;



  {
    ogg_uint32_t VAR_6=FUNC_7(&VAR_2,22);
    FUNC_8(&VAR_2,0,22);


    if(VAR_6!=FUNC_0(VAR_0->fifo_tail,VAR_0->bodybytes+VAR_0->headerbytes)){





      FUNC_8(&VAR_2,VAR_6,22);
      goto sync_fail;
    }
    FUNC_8(&VAR_2,VAR_6,22);
  }


  if(VAR_1){

    VAR_1->header=FUNC_3(&VAR_0->fifo_tail,&VAR_0->fifo_head,VAR_0->headerbytes);
    VAR_1->header_len=VAR_0->headerbytes;
    VAR_1->body=FUNC_3(&VAR_0->fifo_tail,&VAR_0->fifo_head,VAR_0->bodybytes);
    VAR_1->body_len=VAR_0->bodybytes;
  }else{

    VAR_0->fifo_tail=
      FUNC_2(VAR_0->fifo_tail,VAR_0->headerbytes+VAR_0->bodybytes);
    if(!VAR_0->fifo_tail)VAR_0->fifo_head=0;
  }

  VAR_4=VAR_0->headerbytes+VAR_0->bodybytes;
  VAR_0->unsynced=0;
  VAR_0->headerbytes=0;
  VAR_0->bodybytes=0;
  VAR_0->fifo_fill-=VAR_4;

  return VAR_4;

 sync_fail:

  VAR_0->headerbytes=0;
  VAR_0->bodybytes=0;
  VAR_0->fifo_tail=FUNC_2(VAR_0->fifo_tail,1);
  VAR_4--;


  while(VAR_0->fifo_tail){

    unsigned char *VAR_7=VAR_0->fifo_tail->buffer->data+VAR_0->fifo_tail->begin;
    unsigned char *VAR_8=FUNC_1(VAR_7, 'O', VAR_0->fifo_tail->length);

    if(VAR_8){

      long VAR_9=VAR_8-VAR_7;
      VAR_0->fifo_tail=FUNC_2(VAR_0->fifo_tail,VAR_9);
      VAR_4-=VAR_9;
      break;
    }else{

      long VAR_10=VAR_0->fifo_tail->length;
      VAR_4-=VAR_10;
      VAR_0->fifo_tail=FUNC_2(VAR_0->fifo_tail,VAR_10);
    }
  }
  if(!VAR_0->fifo_tail)VAR_0->fifo_head=0;
  VAR_0->fifo_fill+=VAR_4;

 sync_out:
  return VAR_4;
}
