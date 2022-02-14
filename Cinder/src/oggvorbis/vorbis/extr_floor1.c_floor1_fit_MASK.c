
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {long n; long posts; long* sorted_index; int* reverse_index; int* loneighbor; int* hineighbor; TYPE_2__* vi; } ;
typedef TYPE_1__ vorbis_look_floor1 ;
struct TYPE_8__ {int* postlist; } ;
typedef TYPE_2__ vorbis_info_floor1 ;
typedef int vorbis_block ;
typedef int lsfit_acc ;


 int VAR_0 ;
 int* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (float const*,float const*,long,long,int *,long,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int*,int*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int,int,int,int,float const*,float const*,TYPE_2__*) ;
 int FUNC_5 (int*,int*,long) ;
 int FUNC_6 (int,int,int,int,int) ;

int *FUNC_7(vorbis_block *VAR_1,vorbis_look_floor1 *VAR_2,
                          const float *VAR_3,
                          const float *VAR_4){
  long VAR_5,VAR_6;
  vorbis_info_floor1 *VAR_7=VAR_2->vi;
  long VAR_8=VAR_2->n;
  long VAR_9=VAR_2->posts;
  long VAR_10=0;
  lsfit_acc VAR_11[VAR_0+1];
  int VAR_12[VAR_0+2];
  int VAR_13[VAR_0+2];

  int VAR_14[VAR_0+2];
  int VAR_15[VAR_0+2];
  int *VAR_16=((void*)0);
  int VAR_17[VAR_0+2];

  for(VAR_5=0;VAR_5<VAR_9;VAR_5++)VAR_12[VAR_5]=-200;
  for(VAR_5=0;VAR_5<VAR_9;VAR_5++)VAR_13[VAR_5]=-200;
  for(VAR_5=0;VAR_5<VAR_9;VAR_5++)VAR_14[VAR_5]=0;
  for(VAR_5=0;VAR_5<VAR_9;VAR_5++)VAR_15[VAR_5]=1;
  for(VAR_5=0;VAR_5<VAR_9;VAR_5++)VAR_17[VAR_5]=-1;



  if(VAR_9==0){
    VAR_10+=FUNC_1(VAR_4,VAR_3,0,VAR_8,VAR_11,VAR_8,VAR_7);
  }else{
    for(VAR_5=0;VAR_5<VAR_9-1;VAR_5++)
      VAR_10+=FUNC_1(VAR_4,VAR_3,VAR_2->sorted_index[VAR_5],
                              VAR_2->sorted_index[VAR_5+1],VAR_11+VAR_5,
                              VAR_8,VAR_7);
  }

  if(VAR_10){

    int VAR_18=-200;
    int VAR_19=-200;
    FUNC_3(VAR_11,VAR_9-1,&VAR_18,&VAR_19,VAR_7);

    VAR_12[0]=VAR_18;
    VAR_13[0]=VAR_18;
    VAR_13[1]=VAR_19;
    VAR_12[1]=VAR_19;





    for(VAR_5=2;VAR_5<VAR_9;VAR_5++){
      int VAR_20=VAR_2->reverse_index[VAR_5];
      int VAR_21=VAR_14[VAR_20];
      int VAR_22=VAR_15[VAR_20];


      if(VAR_17[VAR_21]!=VAR_22){

        int VAR_23=VAR_2->reverse_index[VAR_21];
        int VAR_24=VAR_2->reverse_index[VAR_22];
        VAR_17[VAR_21]=VAR_22;

        {

          int VAR_25=VAR_7->postlist[VAR_21];
          int VAR_26=VAR_7->postlist[VAR_22];
          int VAR_27=FUNC_5(VAR_12,VAR_13,VAR_21);
          int VAR_28=FUNC_5(VAR_12,VAR_13,VAR_22);

          if(VAR_27==-1 || VAR_28==-1){
            FUNC_2(1);
          }

          if(FUNC_4(VAR_25,VAR_26,VAR_27,VAR_28,VAR_4,VAR_3,VAR_7)){

            int VAR_29=-200;
            int VAR_30=-200;
            int VAR_31=-200;
            int VAR_32=-200;
            int VAR_33=FUNC_3(VAR_11+VAR_23,VAR_20-VAR_23,&VAR_29,&VAR_30,VAR_7);
            int VAR_34=FUNC_3(VAR_11+VAR_20,VAR_24-VAR_20,&VAR_31,&VAR_32,VAR_7);

            if(VAR_33){
              VAR_29=VAR_27;
              VAR_30=VAR_31;
            }
            if(VAR_34){
              VAR_31=VAR_30;
              VAR_32=VAR_28;
            }

            if(VAR_33 && VAR_34){
              VAR_12[VAR_5]=-200;
              VAR_13[VAR_5]=-200;
            }else{

              VAR_13[VAR_21]=VAR_29;
              if(VAR_21==0)VAR_12[VAR_21]=VAR_29;
              VAR_12[VAR_5]=VAR_30;
              VAR_13[VAR_5]=VAR_31;
              VAR_12[VAR_22]=VAR_32;
              if(VAR_22==1)VAR_13[VAR_22]=VAR_32;

              if(VAR_30>=0 || VAR_31>=0){

                for(VAR_6=VAR_20-1;VAR_6>=0;VAR_6--)
                  if(VAR_15[VAR_6]==VAR_22)
                    VAR_15[VAR_6]=VAR_5;
                  else
                    break;
                for(VAR_6=VAR_20+1;VAR_6<VAR_9;VAR_6++)
                  if(VAR_14[VAR_6]==VAR_21)
                    VAR_14[VAR_6]=VAR_5;
                  else
                    break;
              }
            }
          }else{
            VAR_12[VAR_5]=-200;
            VAR_13[VAR_5]=-200;
          }
        }
      }
    }

    VAR_16=FUNC_0(VAR_1,sizeof(*VAR_16)*VAR_9);

    VAR_16[0]=FUNC_5(VAR_12,VAR_13,0);
    VAR_16[1]=FUNC_5(VAR_12,VAR_13,1);




    for(VAR_5=2;VAR_5<VAR_9;VAR_5++){
      int VAR_35=VAR_2->loneighbor[VAR_5-2];
      int VAR_36=VAR_2->hineighbor[VAR_5-2];
      int VAR_37=VAR_7->postlist[VAR_35];
      int VAR_38=VAR_7->postlist[VAR_36];
      int VAR_39=VAR_16[VAR_35];
      int VAR_40=VAR_16[VAR_36];

      int VAR_41=FUNC_6(VAR_37,VAR_38,VAR_39,VAR_40,VAR_7->postlist[VAR_5]);
      int VAR_42=FUNC_5(VAR_12,VAR_13,VAR_5);

      if(VAR_42>=0 && VAR_41!=VAR_42){
        VAR_16[VAR_5]=VAR_42;
      }else{
        VAR_16[VAR_5]= VAR_41|0x8000;
      }
    }
  }

  return(VAR_16);

}
