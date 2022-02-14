
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 unsigned short FUNC_0 (unsigned short) ;
 int FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static unsigned short FUNC_2(struct net_device *VAR_0, unsigned short VAR_1)
{
 unsigned short VAR_2;
 if (VAR_1<0x8)
  VAR_2 = FUNC_0(VAR_1);
 else {
  FUNC_1(VAR_0, 1);
  VAR_2 = FUNC_0(VAR_1);
  FUNC_1(VAR_0, 0);
 }
 return VAR_2;
}
