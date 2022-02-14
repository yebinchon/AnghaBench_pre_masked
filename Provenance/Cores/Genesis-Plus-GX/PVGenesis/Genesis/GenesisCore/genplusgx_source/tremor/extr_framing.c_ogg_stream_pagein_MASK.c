
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int serialno; int lacing_fill; void* header_head; scalar_t__ header_tail; void* body_head; scalar_t__ body_tail; } ;
typedef TYPE_1__ ogg_stream_state ;
struct TYPE_10__ {scalar_t__ header; scalar_t__ body; } ;
typedef TYPE_2__ ogg_page ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 void* FUNC_1 (void*,scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(ogg_stream_state *VAR_3, ogg_page *VAR_4){

  int VAR_5=FUNC_4(VAR_4);
  int VAR_6=FUNC_5(VAR_4);


  if(VAR_5!=VAR_3->serialno){
    FUNC_3(VAR_4);
    return VAR_0;
  }
  if(VAR_6>0){
    FUNC_3(VAR_4);
    return VAR_1;
  }


  if(!VAR_3->body_tail){
    VAR_3->body_tail=VAR_4->body;
    VAR_3->body_head=FUNC_2(VAR_4->body);
  }else{
    VAR_3->body_head=FUNC_1(VAR_3->body_head,VAR_4->body);
  }
  if(!VAR_3->header_tail){
    VAR_3->header_tail=VAR_4->header;
    VAR_3->header_head=FUNC_2(VAR_4->header);
    VAR_3->lacing_fill=-27;
  }else{
    VAR_3->header_head=FUNC_1(VAR_3->header_head,VAR_4->header);
  }

  FUNC_0(VAR_4,0,sizeof(*VAR_4));
  return VAR_2;
}
