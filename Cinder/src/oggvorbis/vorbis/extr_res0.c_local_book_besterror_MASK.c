
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* lengthlist; } ;
typedef TYPE_1__ static_codebook ;
typedef int p ;
struct TYPE_5__ {int dim; int minval; int delta; int quantvals; int entries; TYPE_1__* c; } ;
typedef TYPE_2__ codebook ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static int FUNC_1(codebook *VAR_0,int *VAR_1){
  int VAR_2=VAR_0->dim;
  int VAR_3,VAR_4,VAR_5;
  int VAR_6=VAR_0->minval;
  int VAR_7=VAR_0->delta;
  int VAR_8=VAR_0->quantvals;
  int VAR_9=(VAR_8>>1);
  int VAR_10=0;

  int VAR_11[8]={0,0,0,0,0,0,0,0};

  if(VAR_7!=1){
    for(VAR_3=0,VAR_5=VAR_2;VAR_3<VAR_2;VAR_3++){
      int VAR_12 = (VAR_1[--VAR_5]-VAR_6+(VAR_7>>1))/VAR_7;
      int VAR_13 = (VAR_12<VAR_9 ? ((VAR_9-VAR_12)<<1)-1 : ((VAR_12-VAR_9)<<1));
      VAR_10 = VAR_10*VAR_8+ (VAR_13<0?0:(VAR_13>=VAR_8?VAR_8-1:VAR_13));
      VAR_11[VAR_5]=VAR_12*VAR_7+VAR_6;
    }
  }else{
    for(VAR_3=0,VAR_5=VAR_2;VAR_3<VAR_2;VAR_3++){
      int VAR_14 = VAR_1[--VAR_5]-VAR_6;
      int VAR_15 = (VAR_14<VAR_9 ? ((VAR_9-VAR_14)<<1)-1 : ((VAR_14-VAR_9)<<1));
      VAR_10 = VAR_10*VAR_8+ (VAR_15<0?0:(VAR_15>=VAR_8?VAR_8-1:VAR_15));
      VAR_11[VAR_5]=VAR_14*VAR_7+VAR_6;
    }
  }

  if(VAR_0->c->lengthlist[VAR_10]<=0){
    const static_codebook *VAR_16=VAR_0->c;
    int VAR_17=-1;

    int VAR_18[8]={0,0,0,0,0,0,0,0};
    int VAR_19 = VAR_0->minval + VAR_0->delta*(VAR_0->quantvals-1);
    for(VAR_3=0;VAR_3<VAR_0->entries;VAR_3++){
      if(VAR_16->lengthlist[VAR_3]>0){
        int VAR_20=0;
        for(VAR_4=0;VAR_4<VAR_2;VAR_4++){
          int VAR_21=(VAR_18[VAR_4]-VAR_1[VAR_4]);
          VAR_20+=VAR_21*VAR_21;
        }
        if(VAR_17==-1 || VAR_20<VAR_17){
          FUNC_0(VAR_11,VAR_18,sizeof(VAR_11));
          VAR_17=VAR_20;
          VAR_10=VAR_3;
        }
      }

      VAR_4=0;
      while(VAR_18[VAR_4]>=VAR_19)
        VAR_18[VAR_4++]=0;
      if(VAR_18[VAR_4]>=0)
        VAR_18[VAR_4]+=VAR_0->delta;
      VAR_18[VAR_4]= -VAR_18[VAR_4];
    }
  }

  if(VAR_10>-1){
    for(VAR_3=0;VAR_3<VAR_2;VAR_3++)
      *VAR_1++ -= VAR_11[VAR_3];
  }

  return(VAR_10);
}
