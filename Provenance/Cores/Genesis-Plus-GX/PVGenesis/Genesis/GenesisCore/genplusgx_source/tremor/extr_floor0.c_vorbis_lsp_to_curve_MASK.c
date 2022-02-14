
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_uint32_t ;
typedef int ogg_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int*,int*,int*,int,int) ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;

void FUNC_10(ogg_int32_t *VAR_5,int *VAR_6,int VAR_7,int VAR_8,
    ogg_int32_t *VAR_9,int VAR_10,
    ogg_int32_t VAR_11,
    ogg_int32_t VAR_12,
    ogg_int32_t *VAR_13){




  int VAR_14;
  int VAR_15=VAR_12*4096;
  int VAR_16=VAR_11;
  ogg_int32_t *VAR_17=(ogg_int32_t *)FUNC_2(VAR_10*sizeof(*VAR_17));

  for(VAR_14=0;VAR_14<VAR_10;VAR_14++){

    ogg_int32_t VAR_18=FUNC_1(VAR_9[VAR_14],0x517cc2);





    if(VAR_18<0 || (VAR_18>>VAR_0)>=VAR_1){
      FUNC_6(VAR_5,0,sizeof(*VAR_5)*VAR_7);
      return;
    }

    VAR_17[VAR_14]=FUNC_7(VAR_18);
  }

  VAR_14=0;
  while(VAR_14<VAR_7){
    int VAR_19,VAR_20=VAR_6[VAR_14];
    ogg_uint32_t VAR_21=46341;
    ogg_uint32_t VAR_22=46341;
    ogg_int32_t VAR_23=0,VAR_24;
    ogg_int32_t VAR_25=VAR_13[VAR_20];
    VAR_22*=FUNC_3(VAR_17[0]-VAR_25);
    VAR_21*=FUNC_3(VAR_17[1]-VAR_25);

    for(VAR_19=3;VAR_19<VAR_10;VAR_19+=2){
      if(!(VAR_24=VAR_2[(VAR_21|VAR_22)>>25]))
 if(!(VAR_24=VAR_3[(VAR_21|VAR_22)>>19]))
   VAR_24=VAR_4[(VAR_21|VAR_22)>>16];
      VAR_22=(VAR_22>>VAR_24)*FUNC_3(VAR_17[VAR_19-1]-VAR_25);
      VAR_21=(VAR_21>>VAR_24)*FUNC_3(VAR_17[VAR_19]-VAR_25);
      VAR_23+=VAR_24;
    }
    if(!(VAR_24=VAR_2[(VAR_21|VAR_22)>>25]))
      if(!(VAR_24=VAR_3[(VAR_21|VAR_22)>>19]))
 VAR_24=VAR_4[(VAR_21|VAR_22)>>16];



    if(VAR_10&1){


      VAR_22=(VAR_22>>VAR_24)*FUNC_3(VAR_17[VAR_19-1]-VAR_25);
      VAR_21=(VAR_21>>VAR_24)<<14;
      VAR_23+=VAR_24;

      if(!(VAR_24=VAR_2[(VAR_21|VAR_22)>>25]))
 if(!(VAR_24=VAR_3[(VAR_21|VAR_22)>>19]))
   VAR_24=VAR_4[(VAR_21|VAR_22)>>16];

      VAR_21>>=VAR_24;
      VAR_22>>=VAR_24;
      VAR_23+=VAR_24-14*((VAR_10+1)>>1);

      VAR_21=((VAR_21*VAR_21)>>16);
      VAR_22=((VAR_22*VAR_22)>>16);
      VAR_23=VAR_23*2+VAR_10;

      VAR_21*=(1<<14)-((VAR_25*VAR_25)>>14);
      VAR_22+=VAR_21>>14;

    }else{





      VAR_21>>=VAR_24;
      VAR_22>>=VAR_24;
      VAR_23+=VAR_24-7*VAR_10;

      VAR_21=((VAR_21*VAR_21)>>16);
      VAR_22=((VAR_22*VAR_22)>>16);
      VAR_23=VAR_23*2+VAR_10;

      VAR_21*=(1<<14)-VAR_25;
      VAR_22*=(1<<14)+VAR_25;
      VAR_22=(VAR_22+VAR_21)>>14;

    }






    if(VAR_22&0xffff0000){
      VAR_22>>=1; VAR_23++;
    }else
      while(VAR_22 && !(VAR_22&0x8000)){
 VAR_22<<=1; VAR_23--;
      }



    VAR_11=FUNC_8(VAR_16*
       FUNC_9(VAR_22,VAR_23)-

       VAR_15);




    VAR_5[VAR_14]= FUNC_0(VAR_5[VAR_14],VAR_11);
    while(VAR_6[++VAR_14]==VAR_20) VAR_5[VAR_14]= FUNC_0(VAR_5[VAR_14],VAR_11);
  }
}
