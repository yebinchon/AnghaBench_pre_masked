
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,scalar_t__,unsigned char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (struct net_device*,scalar_t__,unsigned char) ;
 int FUNC_5 (struct net_device*,scalar_t__,scalar_t__) ;

void
FUNC_6(
 struct net_device *VAR_2,
 u32 VAR_3,
 u32 VAR_4
 )
{

if (VAR_3 == VAR_1)
 {
  unsigned char VAR_5;
  unsigned long VAR_6;
  unsigned char VAR_7;
  u8 VAR_8;

  VAR_5 = (u8)(VAR_4 & 0x000000ff);
  VAR_6 = VAR_4>>8;
  for(VAR_7 = 0; VAR_7 < 30; VAR_7++)
  {
   VAR_8 = FUNC_0(VAR_2, VAR_1);
   if((VAR_8 & VAR_0) == 0)
    break;
   else
    FUNC_2(10);
  }

  for(VAR_7=0; VAR_7 < 3; VAR_7++)
  {
   FUNC_1(VAR_2,VAR_3+1+VAR_7,((u8*)&VAR_6)[VAR_7] );
  }
  FUNC_4(VAR_2, VAR_3, VAR_5);


 }

 else{
  FUNC_5(VAR_2, VAR_3, VAR_4);
  FUNC_3(VAR_2, VAR_3);
 }
}
