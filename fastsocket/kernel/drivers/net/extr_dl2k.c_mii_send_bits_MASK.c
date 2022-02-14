
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int) ;

__attribute__((used)) static void
FUNC_1 (struct net_device *VAR_0, u32 VAR_1, int VAR_2)
{
 int VAR_3;
 for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--) {
  FUNC_0 (VAR_0, VAR_1 & (1 << VAR_3));
 }
}
