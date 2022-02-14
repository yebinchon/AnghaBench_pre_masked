
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {scalar_t__ base_addr; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2, u16 VAR_3,
   u16 VAR_4, int VAR_5)
{
 unsigned long VAR_6 = VAR_0 + VAR_5;

 while (FUNC_1(VAR_0,VAR_6))
  if ((FUNC_0(VAR_1->base_addr + VAR_2) & VAR_3) == VAR_4)
   return 1;

 return 0;
}
