
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vorbis_fpu_control ;
struct TYPE_7__ {long channels; } ;
struct TYPE_6__ {scalar_t__ ready_state; long pcm_offset; int current_link; int vi; int vd; } ;
typedef TYPE_1__ OggVorbis_File ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int,int) ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (float) ;
 int FUNC_6 (int ) ;
 long FUNC_7 (int *,float***) ;
 int FUNC_8 (int *,long) ;

long FUNC_9(OggVorbis_File *VAR_4,char *VAR_5,int VAR_6,
                    int VAR_7,int VAR_8,int VAR_9,int *VAR_10,
                    void (*VAR_11)(float **VAR_12,long VAR_13,long VAR_14,void *VAR_15),void *VAR_16){
  int VAR_17,VAR_18;
  int VAR_19 = FUNC_1();
  int VAR_20;

  float **VAR_21;
  long VAR_22;

  if(VAR_4->ready_state<VAR_1)return(VAR_2);

  while(1){
    if(VAR_4->ready_state==VAR_0){
      VAR_22=FUNC_7(&VAR_4->vd,&VAR_21);
      if(VAR_22)break;
    }


    {
      int VAR_23=FUNC_0(VAR_4,((void*)0),1,1);
      if(VAR_23==VAR_3)
        return(0);
      if(VAR_23<=0)
        return(VAR_23);
    }

  }

  if(VAR_22>0){



    long VAR_24=FUNC_2(VAR_4,-1)->channels;
    long VAR_25=VAR_8 * VAR_24;
    vorbis_fpu_control VAR_26;
    if(VAR_22>VAR_6/VAR_25)VAR_22=VAR_6/VAR_25;

    if(VAR_22 <= 0)
      return VAR_2;


    if(VAR_11)
      VAR_11(VAR_21,VAR_24,VAR_22,VAR_16);


    {
      int VAR_27;
      if(VAR_8==1){
        int VAR_28=(VAR_9?0:128);
        FUNC_4(&VAR_26);
        for(VAR_18=0;VAR_18<VAR_22;VAR_18++)
          for(VAR_17=0;VAR_17<VAR_24;VAR_17++){
            VAR_27=FUNC_5(VAR_21[VAR_17][VAR_18]*128.f);
            if(VAR_27>127)VAR_27=127;
            else if(VAR_27<-128)VAR_27=-128;
            *VAR_5++=VAR_27+VAR_28;
          }
        FUNC_3(VAR_26);
      }else{
        int VAR_29=(VAR_9?0:32768);

        if(VAR_19==VAR_7){
          if(VAR_9){

            FUNC_4(&VAR_26);
            for(VAR_17=0;VAR_17<VAR_24;VAR_17++) {
              float *VAR_30=VAR_21[VAR_17];
              short *VAR_31=((short *)VAR_5)+VAR_17;
              for(VAR_18=0;VAR_18<VAR_22;VAR_18++) {
                VAR_27=FUNC_5(VAR_30[VAR_18]*32768.f);
                if(VAR_27>32767)VAR_27=32767;
                else if(VAR_27<-32768)VAR_27=-32768;
                *VAR_31=VAR_27;
                VAR_31+=VAR_24;
              }
            }
            FUNC_3(VAR_26);

          }else{

            FUNC_4(&VAR_26);
            for(VAR_17=0;VAR_17<VAR_24;VAR_17++) {
              float *VAR_32=VAR_21[VAR_17];
              short *VAR_33=((short *)VAR_5)+VAR_17;
              for(VAR_18=0;VAR_18<VAR_22;VAR_18++) {
                VAR_27=FUNC_5(VAR_32[VAR_18]*32768.f);
                if(VAR_27>32767)VAR_27=32767;
                else if(VAR_27<-32768)VAR_27=-32768;
                *VAR_33=VAR_27+VAR_29;
                VAR_33+=VAR_24;
              }
            }
            FUNC_3(VAR_26);

          }
        }else if(VAR_7){

          FUNC_4(&VAR_26);
          for(VAR_18=0;VAR_18<VAR_22;VAR_18++)
            for(VAR_17=0;VAR_17<VAR_24;VAR_17++){
              VAR_27=FUNC_5(VAR_21[VAR_17][VAR_18]*32768.f);
              if(VAR_27>32767)VAR_27=32767;
              else if(VAR_27<-32768)VAR_27=-32768;
              VAR_27+=VAR_29;
              *VAR_5++=(VAR_27>>8);
              *VAR_5++=(VAR_27&0xff);
            }
          FUNC_3(VAR_26);

        }else{
          int VAR_34;
          FUNC_4(&VAR_26);
          for(VAR_18=0;VAR_18<VAR_22;VAR_18++)
            for(VAR_17=0;VAR_17<VAR_24;VAR_17++){
              VAR_34=FUNC_5(VAR_21[VAR_17][VAR_18]*32768.f);
              if(VAR_34>32767)VAR_34=32767;
              else if(VAR_34<-32768)VAR_34=-32768;
              VAR_34+=VAR_29;
              *VAR_5++=(VAR_34&0xff);
              *VAR_5++=(VAR_34>>8);
                  }
          FUNC_3(VAR_26);

        }
      }
    }

    FUNC_8(&VAR_4->vd,VAR_22);
    VAR_20=FUNC_6(VAR_4->vi);
    VAR_4->pcm_offset+=(VAR_22<<VAR_20);
    if(VAR_10)*VAR_10=VAR_4->current_link;
    return(VAR_22*VAR_25);
  }else{
    return(VAR_22);
  }
}
