
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int) ;

void FUNC_1(struct net_device* VAR_1, u8 VAR_2)
{

 u8 VAR_3[1] = {0x88};
 u8 VAR_4[1] = {0x8c};
 u8 VAR_5[1] = {0x8a};
     u8 VAR_6[1] = {0x8e};

     u8 VAR_7;

     for(VAR_7=0 ; VAR_7<8 ; VAR_7++)
 {
  if((VAR_2&0x80)!=0)
  {
   FUNC_0(VAR_1, VAR_0, VAR_5[0]);
   FUNC_0(VAR_1, VAR_0, VAR_6[0]);
  }
  else
  {
   FUNC_0(VAR_1, VAR_0, VAR_3[0]);
   FUNC_0(VAR_1, VAR_0, VAR_4[0]);
  }
  VAR_2 = VAR_2 << 1;
 }
}
