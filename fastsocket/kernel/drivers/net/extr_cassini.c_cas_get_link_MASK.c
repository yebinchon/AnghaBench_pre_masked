
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {scalar_t__ lstate; } ;


 scalar_t__ VAR_0 ;
 struct cas* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_1)
{
 struct cas *VAR_2 = FUNC_0(VAR_1);
 return VAR_2->lstate == VAR_0;
}
