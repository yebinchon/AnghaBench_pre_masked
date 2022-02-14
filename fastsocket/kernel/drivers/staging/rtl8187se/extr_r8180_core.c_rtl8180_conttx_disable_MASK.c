
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;

void FUNC_2(struct net_device *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4,VAR_0);
 VAR_5 = VAR_5 &~ VAR_1;
 VAR_5 = VAR_5 | (VAR_2 <<VAR_3);
 FUNC_1(VAR_4,VAR_0,VAR_5);
}
