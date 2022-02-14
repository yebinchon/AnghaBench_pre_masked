
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 long long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 long long* VAR_8 ;
 scalar_t__* VAR_9 ;
 int* VAR_10 ;
 long long* VAR_11 ;
 long long* VAR_12 ;
 long long* VAR_13 ;
 long long* VAR_14 ;
 long long* VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 scalar_t__ VAR_18 ;
 long long* VAR_19 ;

void FUNC_0(int VAR_20,int VAR_21,int VAR_22)
{
  int VAR_23;
  u64 VAR_24,VAR_25,VAR_26,VAR_27;
  u64 VAR_28,VAR_29;
  u64 VAR_30;
  if(VAR_21==VAR_16-1) {
    VAR_24=0;
  }else{
    VAR_24=VAR_19[VAR_21+1];
    VAR_24=0;
  }
  for (VAR_23=VAR_21;VAR_23>=VAR_20;VAR_23--)
  {

    if(VAR_9[VAR_23]==VAR_1||VAR_9[VAR_23]==VAR_6||VAR_9[VAR_23]==VAR_0||VAR_9[VAR_23]==VAR_2)
    {
      if(VAR_7[VAR_23]<VAR_18 || VAR_7[VAR_23]>=(VAR_18+VAR_16*2))
      {

        VAR_24=0;
        VAR_8[VAR_23]=VAR_24;
        if(VAR_9[VAR_23]!=VAR_0) {

          if(VAR_14[VAR_23+1]>=0) VAR_24|=1LL<<VAR_14[VAR_23+1];
          if(VAR_15[VAR_23+1]>=0) VAR_24|=1LL<<VAR_15[VAR_23+1];
          if(VAR_11[VAR_23+1]>=0) VAR_24&=~(1LL<<VAR_11[VAR_23+1]);
          if(VAR_12[VAR_23+1]>=0) VAR_24&=~(1LL<<VAR_12[VAR_23+1]);
          if(VAR_13[VAR_23+1]>=0) VAR_24&=~(1LL<<VAR_13[VAR_23+1]);
        }
      }
      else
      {
        if(VAR_7[VAR_23]<=VAR_18+VAR_23*2) {

          if(VAR_9[VAR_23]==VAR_6||VAR_9[VAR_23]==VAR_1)
          {

            VAR_28=0;
          } else if(VAR_9[VAR_23]==VAR_0) {

            VAR_28=VAR_19[VAR_23+1];
          } else {

            VAR_28=VAR_19[VAR_23+2];
          }
          if(VAR_9[VAR_23]!=VAR_0) {

            if(VAR_14[VAR_23+1]>=0) VAR_28|=1LL<<VAR_14[VAR_23+1];
            if(VAR_15[VAR_23+1]>=0) VAR_28|=1LL<<VAR_15[VAR_23+1];
            if(VAR_11[VAR_23+1]>=0) VAR_28&=~(1LL<<VAR_11[VAR_23+1]);
            if(VAR_12[VAR_23+1]>=0) VAR_28&=~(1LL<<VAR_12[VAR_23+1]);
            if(VAR_13[VAR_23+1]>=0) VAR_28&=~(1LL<<VAR_13[VAR_23+1]);
          }
          if(VAR_14[VAR_23]>=0) VAR_28|=1LL<<VAR_14[VAR_23];
          if(VAR_15[VAR_23]>=0) VAR_28|=1LL<<VAR_15[VAR_23];
          if(VAR_11[VAR_23]>=0) VAR_28&=~(1LL<<VAR_11[VAR_23]);
          if(VAR_12[VAR_23]>=0) VAR_28&=~(1LL<<VAR_12[VAR_23]);
          if(VAR_13[VAR_23]>=0) VAR_28&=~(1LL<<VAR_13[VAR_23]);
          VAR_19[VAR_23]=VAR_28;


          if(VAR_22<2) {
            FUNC_0((VAR_7[VAR_23]-VAR_18)>>1,VAR_23-1,VAR_22+1);
          }else{
            VAR_19[(VAR_7[VAR_23]-VAR_18)>>1]=0;
          }
        } if(1) {
          if(VAR_9[VAR_23]==VAR_6||VAR_9[VAR_23]==VAR_1)
          {

            VAR_24=VAR_19[(VAR_7[VAR_23]-VAR_18)>>1];

            VAR_24&=~((1LL<<15)|(1LL<<VAR_3));
            VAR_8[VAR_23]=VAR_24;



            if(VAR_14[VAR_23+1]>=0) VAR_24|=1LL<<VAR_14[VAR_23+1];
            if(VAR_15[VAR_23+1]>=0) VAR_24|=1LL<<VAR_15[VAR_23+1];
            if(VAR_11[VAR_23+1]>=0) VAR_24&=~(1LL<<VAR_11[VAR_23+1]);
            if(VAR_12[VAR_23+1]>=0) VAR_24&=~(1LL<<VAR_12[VAR_23+1]);
            if(VAR_13[VAR_23+1]>=0) VAR_24&=~(1LL<<VAR_13[VAR_23+1]);
          } else {

            VAR_26=VAR_19[(VAR_7[VAR_23]-VAR_18)>>1];
            VAR_8[VAR_23]=VAR_26;



            if(VAR_9[VAR_23]!=VAR_0) {
              if(VAR_14[VAR_23+1]>=0) VAR_26|=1LL<<VAR_14[VAR_23+1];
              if(VAR_15[VAR_23+1]>=0) VAR_26|=1LL<<VAR_15[VAR_23+1];
              if(VAR_11[VAR_23+1]>=0) VAR_26&=~(1LL<<VAR_11[VAR_23+1]);
              if(VAR_12[VAR_23+1]>=0) VAR_26&=~(1LL<<VAR_12[VAR_23+1]);
              if(VAR_13[VAR_23+1]>=0) VAR_26&=~(1LL<<VAR_13[VAR_23+1]);
            }
            VAR_24&=VAR_26;

            VAR_24&=~((1LL<<15)|(1LL<<VAR_3));

            if(VAR_9[VAR_23]!=VAR_0) {
              if(VAR_23<VAR_16-1) {
                VAR_8[VAR_23]&=VAR_19[VAR_23+2];
              } else {
                VAR_8[VAR_23]=0;
              }
            }else{
              if(VAR_23<VAR_16) {
                VAR_8[VAR_23]&=VAR_19[VAR_23+1];
              } else {
                VAR_8[VAR_23]=0;
              }
            }

          }
        }
      }
    }
    else if(VAR_9[VAR_23]==VAR_1 && VAR_17[VAR_23]==0x2b)
    {

      VAR_24=(1<<VAR_3);
    }
    else if(VAR_9[VAR_23]==VAR_4 && VAR_10[VAR_23]==12)
    {

      VAR_24=0;
    }



    if(VAR_14[VAR_23]>=0) VAR_24|=1LL<<VAR_14[VAR_23];
    if(VAR_15[VAR_23]>=0) VAR_24|=1LL<<VAR_15[VAR_23];

    if(VAR_11[VAR_23]>=0) VAR_24&=~(1LL<<VAR_11[VAR_23]);
    if(VAR_12[VAR_23]>=0) VAR_24&=~(1LL<<VAR_12[VAR_23]);
    if(VAR_13[VAR_23]>=0) VAR_24&=~(1LL<<VAR_13[VAR_23]);



    if(VAR_24&(1<<VAR_3)) VAR_24|=(1<<VAR_5);

    VAR_19[VAR_23]=VAR_24;
  }
}
