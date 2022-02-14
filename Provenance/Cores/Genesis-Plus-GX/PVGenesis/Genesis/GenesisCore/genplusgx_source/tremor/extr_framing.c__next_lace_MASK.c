
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int oggbyte_buffer ;
struct TYPE_3__ {int body_fill_next; scalar_t__ laceptr; scalar_t__ lacing_fill; int clearflag; } ;
typedef TYPE_1__ ogg_stream_state ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(oggbyte_buffer *VAR_1,ogg_stream_state *VAR_2){

  VAR_2->body_fill_next=0;
  while(VAR_2->laceptr<VAR_2->lacing_fill){
    int VAR_3=FUNC_0(VAR_1,27+VAR_2->laceptr++);
    VAR_2->body_fill_next+=VAR_3;
    if(VAR_3<255){
      VAR_2->body_fill_next|=VAR_0;
      VAR_2->clearflag=1;
      break;
    }
  }
}
