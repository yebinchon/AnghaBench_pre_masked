
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,int ,int) ;

void FUNC_8(struct net_device *VAR_3)
{
 u8 VAR_4;

 FUNC_5(VAR_3);

 VAR_4=FUNC_4(VAR_3,VAR_0);
 VAR_4 = VAR_4 & 2;
 VAR_4 = VAR_4 | (1<<VAR_1);
 FUNC_7(VAR_3,VAR_0,VAR_4);

 FUNC_2(VAR_3);

 FUNC_3(200);

 if(FUNC_4(VAR_3,VAR_0) & (1<<VAR_1))
  FUNC_1("Card reset timeout!");
 else
  FUNC_0("Card successfully reset");

 FUNC_6(VAR_3,VAR_2);
 FUNC_2(VAR_3);
 FUNC_3(200);
}
