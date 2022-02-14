
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;

void FUNC_4(
 struct net_device *VAR_5,
 u32 VAR_6
)
{
  u32 VAR_7=0;
  u32 VAR_8=0;
  u8 VAR_9=0;
  u32 VAR_10;
 s32 VAR_11=100;

  for(VAR_9=0;VAR_9<VAR_1;VAR_9++)
  {

  VAR_7= VAR_9+VAR_1*VAR_6;
  VAR_7= VAR_7 | VAR_0;




  while((VAR_11--)>=0)
  {
   VAR_10 = FUNC_2(VAR_5, VAR_4);
   if(VAR_10 & VAR_0){
    continue;
   }
   else{
    break;
   }
  }

    FUNC_3(VAR_5, VAR_4, VAR_7);
      FUNC_0(VAR_2,"CAM_read_entry(): WRITE A0: %x \n",VAR_7);

     VAR_8 = FUNC_2(VAR_5, VAR_3);
     FUNC_0(VAR_2, "CAM_read_entry(): WRITE A8: %x \n",VAR_8);

  }
 FUNC_1("\n");
}
