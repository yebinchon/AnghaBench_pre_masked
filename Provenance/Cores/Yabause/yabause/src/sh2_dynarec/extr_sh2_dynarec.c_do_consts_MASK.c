
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s16 ;
 size_t VAR_0 ;
 size_t VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;







 int * VAR_4 ;
 int FUNC_0 (int) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 size_t* VAR_10 ;
 size_t* VAR_11 ;
 int FUNC_1 (int*,int*,size_t) ;
 int FUNC_2 (int*,int*,size_t,int) ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;

FUNC_3(int VAR_15,u32 *VAR_16,u32 *VAR_17)
{
  switch(VAR_6[VAR_15]) {
    case 138:
      FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      if(VAR_4[VAR_15]==VAR_2) {
        int VAR_18=(VAR_7[VAR_15]==4)?2:(VAR_8[VAR_15]&3);
        VAR_17[VAR_11[VAR_15]]+=1<<VAR_18;
      }
      break;
    case 130:
      if(VAR_4[VAR_15]==VAR_3) {
        int VAR_19=(VAR_7[VAR_15]==4)?2:(VAR_8[VAR_15]&3);
        VAR_17[VAR_10[VAR_15]]-=1<<VAR_19;
      }
      break;
    case 133:
      break;
    case 135:
      if(VAR_7[VAR_15]==12) FUNC_2(VAR_16,VAR_17,VAR_10[VAR_15],((VAR_14+VAR_15*2+4)&~3)+VAR_5[VAR_15]);
      else {
        u32 VAR_20=((VAR_14+VAR_15*2+4)&~3)+VAR_5[VAR_15];
        if((u32)((VAR_20-VAR_14)>>1)<VAR_12) {
          int VAR_21;
          if(VAR_7[VAR_15]==9) VAR_21=(s16)VAR_13[((VAR_14+VAR_15*2+4)+VAR_5[VAR_15]-VAR_14)>>1];
          else VAR_21=(VAR_13[(((VAR_14+VAR_15*2+4)&~3)+VAR_5[VAR_15]-VAR_14)>>1]<<16)+VAR_13[(((VAR_14+VAR_15*2+4)&~3)+VAR_5[VAR_15]+2-VAR_14)>>1];
          FUNC_2(VAR_16,VAR_17,VAR_10[VAR_15],VAR_21);
        }
        else FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      }
      break;
    case 137:
      if(((*VAR_16)>>VAR_9[VAR_15])&1) {
        int VAR_22=VAR_17[VAR_9[VAR_15]];
        FUNC_2(VAR_16,VAR_17,VAR_10[VAR_15],VAR_22);
      }
      else FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      break;
    case 139:
      if(VAR_7[VAR_15]==0x7) {
        if(((*VAR_16)>>VAR_9[VAR_15])&1) {
          int VAR_23=VAR_17[VAR_9[VAR_15]];
          FUNC_2(VAR_16,VAR_17,VAR_10[VAR_15],VAR_23+VAR_5[VAR_15]);
        }
        else FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      }
      else if(VAR_7[VAR_15]==0x8) {
      }
      else if(VAR_7[VAR_15]==12) {
        if(VAR_8[VAR_15]==8) {
        }else

        if(((*VAR_16)>>VAR_9[VAR_15])&1) {
          int VAR_24=VAR_17[VAR_9[VAR_15]];
          if(VAR_8[VAR_15]==0x09) FUNC_2(VAR_16,VAR_17,VAR_10[VAR_15],VAR_24&VAR_5[VAR_15]);
          if(VAR_8[VAR_15]==0x0a) FUNC_2(VAR_16,VAR_17,VAR_10[VAR_15],VAR_24^VAR_5[VAR_15]);
          if(VAR_8[VAR_15]==0x0b) FUNC_2(VAR_16,VAR_17,VAR_10[VAR_15],VAR_24|VAR_5[VAR_15]);
        }
        else FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      }
      else {
        FUNC_0(VAR_7[VAR_15]==0xE);
        FUNC_2(VAR_16,VAR_17,VAR_10[VAR_15],VAR_5[VAR_15]);
      }
      break;
    case 140:
      if(VAR_8[VAR_15]==9) {
        FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      }
      break;
    case 144:
      FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      break;
    case 141:
      FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      break;
    case 136:
      if(VAR_7[VAR_15]==0) {
        if(VAR_8[VAR_15]==7)
        {
          FUNC_1(VAR_16,VAR_17,VAR_1);
        }
        if(VAR_8[VAR_15]==8)
        {
          FUNC_1(VAR_16,VAR_17,VAR_0);
          FUNC_1(VAR_16,VAR_17,VAR_1);
        }
        if(VAR_8[VAR_15]==9)
        {
        }
      }
      if(VAR_7[VAR_15]==2) {
        if(VAR_8[VAR_15]==7)
        {
        }
        if(VAR_8[VAR_15]==14||VAR_8[VAR_15]==15)
        {
          FUNC_1(VAR_16,VAR_17,VAR_1);
        }
      }
      if(VAR_7[VAR_15]==3) {

        FUNC_1(VAR_16,VAR_17,VAR_0);
        FUNC_1(VAR_16,VAR_17,VAR_1);
      }
      break;
    case 132:
      FUNC_1(VAR_16,VAR_17,VAR_10[VAR_15]);
      break;
    case 128:
    case 134:
    case 131:
    case 143:
      break;
    case 129:
      *VAR_16=0;
      break;
    case 142:
      *VAR_16=0;
      break;
  }
}
