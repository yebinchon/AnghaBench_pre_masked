
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int txpowertable ;
struct net_device {int dummy; } ;
typedef int ocr ;
typedef int macaddr ;
typedef int chipid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct net_device* VAR_4)
{
 u8 VAR_5[2];
 u8 VAR_6[3];
 u8 VAR_7[6];
 u8 VAR_8[28];

 FUNC_1(VAR_5,0,sizeof(u8)*2);
 FUNC_0(VAR_4,VAR_1,VAR_5,sizeof(VAR_5));

 FUNC_1(VAR_6,0,sizeof(u8)*3);
 FUNC_0(VAR_4,VAR_0,VAR_6,sizeof(VAR_6));

 FUNC_1(VAR_7,0,sizeof(u8)*6);
 FUNC_0(VAR_4,VAR_2,VAR_7,sizeof(VAR_7));

 FUNC_1(VAR_8,0,sizeof(u8)*28);
 FUNC_0(VAR_4,VAR_3,VAR_8,sizeof(VAR_8));
}
