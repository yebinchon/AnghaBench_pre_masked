
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int* VAR_0 ;
 int FUNC_4 (struct net_device*,short) ;

void FUNC_5(struct net_device *VAR_1, short VAR_2)
{
 FUNC_4(VAR_1, VAR_2);

 FUNC_1(VAR_1, 0x7, VAR_0[VAR_2]);

 if ((FUNC_0(VAR_1, 0x7) & 0x0F80) != VAR_0[VAR_2])
  FUNC_1(VAR_1, 0x7, VAR_0[VAR_2]);

 FUNC_3(1);

 FUNC_2(VAR_1);
 FUNC_3(10);
}
