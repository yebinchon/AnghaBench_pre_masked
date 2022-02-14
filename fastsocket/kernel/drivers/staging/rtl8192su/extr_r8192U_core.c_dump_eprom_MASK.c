
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct net_device*,int) ;

void FUNC_2(struct net_device *VAR_1)
{
 int VAR_2;
 for(VAR_2=0; VAR_2<63; VAR_2++)
  FUNC_0(VAR_0, "EEPROM addr %x : %x", VAR_2, FUNC_1(VAR_1,VAR_2));
}
