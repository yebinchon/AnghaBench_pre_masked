
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*,scalar_t__,int*) ;
 int FUNC_2 (int,int*,int*) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static u8
FUNC_4( struct net_device* VAR_6, u8 VAR_7, u8 *VAR_8)
{
 u8 VAR_9 = VAR_4;

 bool VAR_10 = VAR_5;
 bool VAR_11 = VAR_5 ;

 u8 VAR_12,VAR_13=0;
 u16 VAR_14 = 0;
 u8 VAR_15=0,VAR_16=0;
 u8 VAR_17=0;
 u8 VAR_18[8];

 if(VAR_8==((void*)0)) return VAR_1;
 if(VAR_7>15) return VAR_1;




 FUNC_3(VAR_8, 0xff, sizeof(u8)*VAR_2);
 FUNC_3(VAR_18, 0xff, sizeof(u8)*VAR_2);




 while(VAR_10 && (VAR_14 < VAR_0) )
 {

  if(VAR_9 & VAR_4)
  {
   if(FUNC_1(VAR_6, VAR_14 ,&VAR_12)&&(VAR_12!=0xFF)){
    VAR_15 = (VAR_12>>4) & 0x0F;
    VAR_16 = VAR_12 & 0x0F;
    VAR_13 = FUNC_0(VAR_16);
    VAR_11 = VAR_5 ;

    if(VAR_15==VAR_7){
     for(VAR_17 = 0;VAR_17< VAR_13*2 ;VAR_17++){
      if(FUNC_1(VAR_6, VAR_14+1+VAR_17 ,&VAR_12) ){
       VAR_18[VAR_17] = VAR_12;
       if(VAR_12!=0xff){
        VAR_11 = VAR_1;
       }
      }
     }
     if(VAR_11==VAR_1){
      VAR_9 = VAR_3;
     }else{
      VAR_14 = VAR_14 + (VAR_13*2)+1;
      VAR_9 = VAR_4;
     }
    }
    else{
     VAR_14 = VAR_14 + (VAR_13*2)+1;
     VAR_9 = VAR_4;
    }

   }
   else{
    VAR_10 = VAR_1 ;
   }
  }

  else if(VAR_9 & VAR_3)
  {
   FUNC_2(VAR_16,VAR_18,VAR_8);
   VAR_14 = VAR_14 + (VAR_13*2)+1;
   VAR_9 = VAR_4;
  }

 }




 if( (VAR_8[0]==0xff) &&(VAR_8[1]==0xff) && (VAR_8[2]==0xff) && (VAR_8[3]==0xff) &&
  (VAR_8[4]==0xff) &&(VAR_8[5]==0xff) && (VAR_8[6]==0xff) && (VAR_8[7]==0xff))
  return VAR_1;
 else
  return VAR_5;

}
