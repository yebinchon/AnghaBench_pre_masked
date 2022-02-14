
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ,int) ;

void FUNC_8(struct net_device *VAR_5)
{
 u16 VAR_6;

 FUNC_0("Enabling beacon TX");
 FUNC_4(VAR_5);
 FUNC_3(VAR_5);
 FUNC_2(VAR_5);

 VAR_6 = FUNC_1(VAR_5, VAR_0) &~ VAR_1;
 FUNC_7(VAR_5, VAR_0,VAR_6);

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 VAR_6 &= ~VAR_3;
 VAR_6 |= 1000;



 FUNC_7(VAR_5, VAR_2, VAR_6);

 FUNC_5(VAR_5, VAR_4);

        FUNC_6(VAR_5);
}
