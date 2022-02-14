
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct net_device *VAR_1, u32 VAR_2)
{
 if (VAR_2)
  VAR_1->features |= VAR_0;
 else
  VAR_1->features &= ~VAR_0;

 return 0;
}
