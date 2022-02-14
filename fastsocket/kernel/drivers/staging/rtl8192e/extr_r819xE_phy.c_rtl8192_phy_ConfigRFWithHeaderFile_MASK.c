
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int,int,int ,int) ;

u8 FUNC_2(struct net_device* VAR_9, RF90_RADIO_PATH_E VAR_10)
{

 int VAR_11;

 u8 VAR_12 = 0;

 switch(VAR_10){
  case 131:
   for(VAR_11 = 0;VAR_11<VAR_0; VAR_11=VAR_11+2){

    if(VAR_4[VAR_11] == 0xfe){
      FUNC_0(100);
      continue;
    }
    FUNC_1(VAR_9, VAR_10, VAR_4[VAR_11], VAR_8, VAR_4[VAR_11+1]);


   }
   break;
  case 130:
   for(VAR_11 = 0;VAR_11<VAR_1; VAR_11=VAR_11+2){

    if(VAR_5[VAR_11] == 0xfe){
      FUNC_0(100);
      continue;
    }
    FUNC_1(VAR_9, VAR_10, VAR_5[VAR_11], VAR_8, VAR_5[VAR_11+1]);


   }
   break;
  case 129:
   for(VAR_11 = 0;VAR_11<VAR_2; VAR_11=VAR_11+2){

    if(VAR_6[VAR_11] == 0xfe){
      FUNC_0(100);
      continue;
    }
    FUNC_1(VAR_9, VAR_10, VAR_6[VAR_11], VAR_8, VAR_6[VAR_11+1]);


   }
   break;
  case 128:
   for(VAR_11 = 0;VAR_11<VAR_3; VAR_11=VAR_11+2){

    if(VAR_7[VAR_11] == 0xfe){
      FUNC_0(100);
      continue;
    }
    FUNC_1(VAR_9, VAR_10, VAR_7[VAR_11], VAR_8, VAR_7[VAR_11+1]);


   }
   break;
  default:
   break;
 }

 return VAR_12;;

}
