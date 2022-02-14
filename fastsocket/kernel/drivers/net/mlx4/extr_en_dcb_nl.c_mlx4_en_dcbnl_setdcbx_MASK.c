
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct net_device *VAR_4, u8 VAR_5)
{
 if ((VAR_5 & VAR_1) ||
     (VAR_5 & VAR_2) ||
     !(VAR_5 & VAR_3) ||
     !(VAR_5 & VAR_0))
  return 1;

 return 0;
}
