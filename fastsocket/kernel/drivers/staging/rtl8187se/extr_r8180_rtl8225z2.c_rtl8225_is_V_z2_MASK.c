
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int ,int) ;

short FUNC_2(struct net_device *VAR_0)
{
 short VAR_1 = 1;

 if (FUNC_0(VAR_0, 8) != 0x588)
  VAR_1 = 0;
 else
  if (FUNC_0(VAR_0, 9) != 0x700)
   VAR_1 = 0;


 FUNC_1(VAR_0, 0, 0xb7);

 return VAR_1;
}
