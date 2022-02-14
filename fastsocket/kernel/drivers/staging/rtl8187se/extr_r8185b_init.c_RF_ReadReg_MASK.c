
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8180_priv {int rf_chip; int RegThreeWireMode; } ;
struct net_device {int dummy; } ;




 int FUNC_0 (struct net_device*,int*,int,int,int ) ;



 int FUNC_1 (struct net_device*,int,int,int*,int,int) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

u32
FUNC_3(
 struct net_device *VAR_0,
 u8 VAR_1
 )
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_2(VAR_0);
 u32 VAR_3;
 u8 VAR_4;
 u8 VAR_5;
 u8 VAR_6;
 u32 VAR_7;

 switch(VAR_2->rf_chip)
 {
 case 130:
 case 129:
 case 128:
  switch(VAR_2->RegThreeWireMode)
  {
   case 132:
   {
    VAR_3 = ((u32)(VAR_1&0x0f));
    VAR_4=16;
    FUNC_0(
     VAR_0,
     (u8*)(&VAR_3),
     VAR_4,
     0,
     0);
    VAR_7= VAR_3;
   }
   break;

   case 131:
   {
    VAR_3 = ((u32)(VAR_1&0x0f)) ;
    VAR_4=16;
    FUNC_0(
     VAR_0,
     (u8*)(&VAR_3),
     VAR_4,
     1,
     0
     );
    VAR_7= VAR_3;
   }
   break;


   default:
   {
    VAR_3 = ((u32)(VAR_1&0x1f)) << 27;
    VAR_4 = 6;
    VAR_5 = 12;
    VAR_6 = 0;
    FUNC_1(VAR_0, VAR_3, VAR_4,&VAR_7,VAR_5, VAR_6);
   }
   break;
  }
  break;
 default:
  VAR_7 = 0;
  break;
 }

 return VAR_7;
}
