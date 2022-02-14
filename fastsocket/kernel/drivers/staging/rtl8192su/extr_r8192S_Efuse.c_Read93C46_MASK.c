
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;

u16 FUNC_3(struct net_device* VAR_1, u16 VAR_2 )
{

    u8 VAR_3[1] = {0x0};
 u8 VAR_4[1] = {0x88};
 u8 VAR_5[1] = {0x8c};
 u8 VAR_6[1] = {0x8a};
    u8 VAR_7[1] = {0x8e};

 u8 VAR_8[1]={0x00};
 u8 VAR_9;

 u16 VAR_10[1] = {0x0};
 u8 VAR_11,VAR_12[1],VAR_13[1];


 VAR_9 = (u8)VAR_2;


 *VAR_8= FUNC_1(VAR_1, VAR_0);

 if((*VAR_8 & 0x10) == 0x10)
 {
  VAR_9 = VAR_9 | 0x80;

  FUNC_2(VAR_1, VAR_0, VAR_6[0]);
  FUNC_2(VAR_1, VAR_0, VAR_7[0]);
     FUNC_0(VAR_1, VAR_9);
 }


 for(VAR_11=0 ; VAR_11<16 ; VAR_11++)
 {
  FUNC_2(VAR_1, VAR_0, VAR_4[0]);
  FUNC_2(VAR_1, VAR_0, VAR_5[0]);
  *VAR_12= FUNC_1(VAR_1, VAR_0);

  if(*VAR_12 & 0x8d)
  {
   *VAR_12 = *VAR_12 & 0x01;
   *VAR_13 = *VAR_12;
  }
  else
  {
   *VAR_12 = *VAR_12 & 0x01 ;
   *VAR_13 = *VAR_12;
  }
  *VAR_10 = (*VAR_10 << 1 ) + *VAR_13;
 }
 FUNC_2(VAR_1, VAR_0, VAR_4[0]);
 FUNC_2(VAR_1, VAR_0, VAR_3[0]);

 return *VAR_10;
}
