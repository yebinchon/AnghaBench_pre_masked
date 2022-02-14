
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {scalar_t__ rf_type; } ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;
typedef int RF90_RADIO_PATH_E ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int,int,int ,int) ;
 int FUNC_3 (int) ;

u8 FUNC_4(struct net_device* VAR_9, RF90_RADIO_PATH_E VAR_10)
{

 struct r8192_priv *VAR_11 = FUNC_0(VAR_9);
 int VAR_12;

 RT_STATUS VAR_13 = VAR_1;
 u32 *VAR_14;
 u32 *VAR_15;


 u16 VAR_16,VAR_17;

 {
  VAR_16 = VAR_2;
  VAR_14=VAR_5;
  VAR_15=VAR_6;
  VAR_17 = VAR_3;
 }

 if( VAR_11->rf_type == VAR_0 )
 {
  VAR_15 = VAR_7;
  VAR_17 = VAR_4;
 }
 else
 {
  VAR_15 = VAR_6;
  VAR_17 = VAR_3;
 }

 VAR_13 = VAR_1;







 switch(VAR_10){
  case 131:
   for(VAR_12 = 0;VAR_12<VAR_16; VAR_12=VAR_12+2){
    if(VAR_14[VAR_12] == 0xfe)
     {

      FUNC_1(1000);
    }
     else if (VAR_14[VAR_12] == 0xfd)
      FUNC_1(5);
     else if (VAR_14[VAR_12] == 0xfc)
      FUNC_1(1);
     else if (VAR_14[VAR_12] == 0xfb)
      FUNC_3(50);

     else if (VAR_14[VAR_12] == 0xfa)
      FUNC_3(5);
     else if (VAR_14[VAR_12] == 0xf9)
      FUNC_3(1);
     else
     {
     FUNC_2(VAR_9, VAR_10, VAR_14[VAR_12], VAR_8, VAR_14[VAR_12+1]);
     }
   }
   break;
  case 130:
   for(VAR_12 = 0;VAR_12<VAR_17; VAR_12=VAR_12+2){
    if(VAR_15[VAR_12] == 0xfe)
     {

      FUNC_1(1000);
    }
     else if (VAR_15[VAR_12] == 0xfd)
      FUNC_1(5);
     else if (VAR_15[VAR_12] == 0xfc)
      FUNC_1(1);
     else if (VAR_15[VAR_12] == 0xfb)
      FUNC_3(50);
     else if (VAR_15[VAR_12] == 0xfa)
      FUNC_3(5);
     else if (VAR_15[VAR_12] == 0xf9)
      FUNC_3(1);
     else
     {
     FUNC_2(VAR_9, VAR_10, VAR_15[VAR_12], VAR_8, VAR_15[VAR_12+1]);
     }
   }
   break;
  case 129:
   break;
  case 128:
   break;
  default:
   break;
 }

 return VAR_13;

}
