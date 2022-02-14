
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*,scalar_t__,int*) ;

__attribute__((used)) static u16
FUNC_2(struct net_device* VAR_3)
{
 bool VAR_4 = VAR_2;

 u16 VAR_5 = 0;
 u8 VAR_6=0,VAR_7=0;
 u8 VAR_8,VAR_9=0;



 while ( VAR_4 &&
   FUNC_1(VAR_3, VAR_5 ,&VAR_8) &&
   (VAR_5 < VAR_0) )
 {
  if(VAR_8!=0xFF)
  {
   VAR_6 = (VAR_8>>4) & 0x0F;
   VAR_7 = VAR_8 & 0x0F;
   VAR_9 = FUNC_0(VAR_7);

   VAR_5 = VAR_5 + (VAR_9*2)+1;
  }
  else
  {
   VAR_4 = VAR_1 ;
  }
 }



 return VAR_5;

}
