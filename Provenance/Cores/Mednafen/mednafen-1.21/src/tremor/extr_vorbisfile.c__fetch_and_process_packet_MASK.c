
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ ogg_uint32_t ;
struct TYPE_20__ {int header_len; } ;
typedef TYPE_1__ ogg_page ;
struct TYPE_21__ {int granulepos; int bytes; int e_o_s; } ;
typedef TYPE_2__ ogg_packet ;
typedef int ogg_int64_t ;
struct TYPE_23__ {scalar_t__ serialno; } ;
struct TYPE_22__ {scalar_t__ ready_state; int samptrack; int bittrack; int current_link; int pcm_offset; scalar_t__ current_serialno; int links; scalar_t__* serialnos; TYPE_5__ os; int vc; int vi; scalar_t__ seekable; scalar_t__* pcmlengths; int vd; int vb; } ;
typedef TYPE_3__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int *,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_5__*,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(OggVorbis_File *VAR_6,
                                     ogg_packet *VAR_7,
                                     int VAR_8,
                                     int VAR_9){
  ogg_page VAR_10;



  while(1){

    if(VAR_6->ready_state==VAR_5){
      int VAR_11=FUNC_3(VAR_6);
      if(VAR_11<0)return VAR_11;
    }



    if(VAR_6->ready_state==VAR_0){
      while(1) {
              ogg_packet VAR_12;
              ogg_packet *VAR_13=(VAR_7?VAR_7:&VAR_12);
        int VAR_14=FUNC_6(&VAR_6->os,VAR_13);
        ogg_int64_t VAR_15;

        VAR_7=((void*)0);
        if(VAR_14==-1)return(VAR_4);
        if(VAR_14>0){

          VAR_15=VAR_13->granulepos;
          if(!FUNC_11(&VAR_6->vb,VAR_13)){
            {
              int VAR_16=FUNC_13(&VAR_6->vd,((void*)0));


              if(VAR_16)return(VAR_2);

              FUNC_12(&VAR_6->vd,&VAR_6->vb);
              VAR_6->samptrack+=FUNC_13(&VAR_6->vd,((void*)0));
              VAR_6->bittrack+=VAR_13->bytes*8;
            }


            if(VAR_15!=-1 && !VAR_13->e_o_s){
              int VAR_17=(VAR_6->seekable?VAR_6->current_link:0);
              int VAR_18,VAR_19;
              if(VAR_6->seekable && VAR_17>0)
                VAR_15-=VAR_6->pcmlengths[VAR_17*2];
              if(VAR_15<0)VAR_15=0;




              VAR_19=FUNC_13(&VAR_6->vd,((void*)0));

              VAR_15-=VAR_19;
              for(VAR_18=0;VAR_18<VAR_17;VAR_18++)
                VAR_15+=VAR_6->pcmlengths[VAR_18*2+1];
              VAR_6->pcm_offset=VAR_15;
            }
            return(1);
          }
        }
        else
          break;
      }
    }

    if(VAR_6->ready_state>=VAR_1){
      ogg_int64_t VAR_20;

      while(1){






        if(!VAR_8)return(0);
        if((VAR_20=FUNC_2(VAR_6,&VAR_10,-1))<0){
          return(VAR_3);
        }



        VAR_6->bittrack+=VAR_10.header_len*8;

        if(VAR_6->ready_state==VAR_0){
          if(VAR_6->current_serialno!=FUNC_5(&VAR_10)){





            if(FUNC_4(&VAR_10)){

              if(!VAR_9)
                return(VAR_3);

              FUNC_0(VAR_6);

              if(!VAR_6->seekable){
                FUNC_10(VAR_6->vi);
                FUNC_9(VAR_6->vc);
              }
              break;

            }else
              continue;
          }
        }

        break;
      }
    }
    if(VAR_6->ready_state!=VAR_0){
      int VAR_21;

      if(VAR_6->ready_state<VAR_5){
        if(VAR_6->seekable){
          ogg_uint32_t VAR_22 = FUNC_5(&VAR_10);





          for(VAR_21=0;VAR_21<VAR_6->links;VAR_21++)
            if(VAR_6->serialnos[VAR_21]==VAR_22)break;

          if(VAR_21==VAR_6->links) continue;



          VAR_6->current_serialno=VAR_22;
          VAR_6->current_link=VAR_21;

          FUNC_8(&VAR_6->os,VAR_6->current_serialno);
          VAR_6->ready_state=VAR_5;

        }else{



          int VAR_23=FUNC_1(VAR_6,VAR_6->vi,VAR_6->vc,((void*)0),((void*)0),&VAR_10);
          if(VAR_23)return(VAR_23);
          VAR_6->current_serialno=VAR_6->os.serialno;
          VAR_6->current_link++;
          VAR_21=0;
        }
      }
    }



    FUNC_7(&VAR_6->os,&VAR_10);

  }
}
