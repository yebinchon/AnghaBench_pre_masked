
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int collisions; } ;


 scalar_t__ FUNC_0 (unsigned long*,int ,unsigned long) ;
 unsigned long* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct net_device_stats *VAR_3)
{
 unsigned long VAR_4 = *VAR_0;

 VAR_3->collisions +=
  FUNC_0(VAR_0, VAR_2, VAR_4) +
  FUNC_0(VAR_0, VAR_1, VAR_4);
}
