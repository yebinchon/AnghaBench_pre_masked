
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_2, unsigned int VAR_3, int VAR_4)
{
 int VAR_5;

 while (--VAR_4 >= 0) {
  VAR_5 = (VAR_3 & (1 << VAR_4))? 6: 4;
  FUNC_0(VAR_2, VAR_0, VAR_5);
  VAR_1;
  FUNC_0(VAR_2, VAR_0, VAR_5|1);
  VAR_1;
 }
}
