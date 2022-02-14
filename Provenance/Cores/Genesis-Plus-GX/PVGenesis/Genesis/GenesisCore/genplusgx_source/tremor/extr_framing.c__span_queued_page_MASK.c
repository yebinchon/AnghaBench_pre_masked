
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int oggbyte_buffer ;
struct TYPE_10__ {int body_fill; scalar_t__ header_tail; scalar_t__ lacing_fill; int laceptr; long pageno; int holeflag; scalar_t__ body_tail; int body_fill_next; int spanflag; int b_o_s; int e_o_s; int granulepos; scalar_t__ body_head; scalar_t__ header_head; scalar_t__ clearflag; } ;
typedef TYPE_1__ ogg_stream_state ;
struct TYPE_11__ {scalar_t__ header; } ;
typedef TYPE_2__ ogg_page ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 void* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 long FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(ogg_stream_state *VAR_2){
  while( !(VAR_2->body_fill&VAR_0) ){

    if(!VAR_2->header_tail)break;




    if(VAR_2->lacing_fill>=0)
      VAR_2->header_tail=FUNC_1(VAR_2->header_tail,
                                             VAR_2->lacing_fill+27);
    VAR_2->lacing_fill=0;
    VAR_2->laceptr=0;
    VAR_2->clearflag=0;

    if(!VAR_2->header_tail){
      VAR_2->header_head=0;
      break;
    }else{



      long VAR_3;
      oggbyte_buffer VAR_4;
      ogg_page VAR_5;
      VAR_5.header=VAR_2->header_tail;
      VAR_3=FUNC_6(&VAR_5);

      FUNC_7(&VAR_4,VAR_2->header_tail);
      VAR_2->lacing_fill=FUNC_8(&VAR_4,26);


      if(VAR_3!=VAR_2->pageno){
        if(VAR_2->pageno==-1)
          VAR_2->holeflag=1;
        else
          VAR_2->holeflag=2;

        VAR_2->body_tail=FUNC_1(VAR_2->body_tail,
                                             VAR_2->body_fill);
        if(VAR_2->body_tail==0)VAR_2->body_head=0;
        VAR_2->body_fill=0;

      }

      if(FUNC_3(&VAR_5)){
        if(VAR_2->body_fill==0){


          FUNC_0(&VAR_4,VAR_2);
          VAR_2->body_tail=
            FUNC_1(VAR_2->body_tail,VAR_2->body_fill_next&VAR_1);
          if(VAR_2->body_tail==0)VAR_2->body_head=0;

          if(!VAR_2->spanflag && !VAR_2->holeflag)VAR_2->spanflag=2;
        }
      }else{
        if(VAR_2->body_fill>0){


          VAR_2->body_tail=FUNC_1(VAR_2->body_tail,
                                               VAR_2->body_fill);
          if(VAR_2->body_tail==0)VAR_2->body_head=0;
          VAR_2->body_fill=0;


          if(!VAR_2->spanflag && !VAR_2->holeflag)VAR_2->spanflag=2;
        }
      }

      if(VAR_2->laceptr<VAR_2->lacing_fill){
        VAR_2->granulepos=FUNC_5(&VAR_5);


        FUNC_0(&VAR_4,VAR_2);
        VAR_2->body_fill+=VAR_2->body_fill_next;


        FUNC_0(&VAR_4,VAR_2);

      }

      VAR_2->pageno=VAR_3+1;
      VAR_2->e_o_s=FUNC_4(&VAR_5);
      VAR_2->b_o_s=FUNC_2(&VAR_5);

    }
  }
}
