
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int tmpdata ;
struct net_device {int dummy; } ;
typedef int macaddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ,int*,int,int ) ;

void FUNC_1(struct net_device* VAR_5)
{
 u32 VAR_6 = VAR_4;
 u8 VAR_7=0x02,VAR_8 = 0xFF;
 u8 VAR_9[2];

 u8 VAR_10[6] = {0x00,0xe0,0x4c,0x87,0x12,0x66};
 FUNC_0(VAR_5,VAR_1,VAR_10,sizeof(VAR_10),VAR_6);

 VAR_6 = VAR_3;
 FUNC_0(VAR_5,VAR_0,&VAR_7,sizeof(u8),VAR_6);

 VAR_6 = VAR_3;
 FUNC_0(VAR_5,VAR_2,&VAR_8,sizeof(u8),VAR_6);

 VAR_6 = VAR_4;
 VAR_9[0] =VAR_8 ;
 VAR_9[1] =VAR_7 ;
 FUNC_0(VAR_5,VAR_2,VAR_9,sizeof(VAR_9),VAR_6);

}
