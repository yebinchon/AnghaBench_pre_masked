
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

__attribute__((used)) static int FUNC_0(struct net_device *VAR_4)
{

 return (((VAR_0 - VAR_1)/4 + 1) +
   (VAR_3 - VAR_2)+1 + 32) * sizeof(u32);
}
