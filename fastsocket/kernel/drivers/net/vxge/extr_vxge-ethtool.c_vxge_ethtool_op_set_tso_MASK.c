
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_2, u32 VAR_3)
{
 if (VAR_3)
  VAR_2->features |= (VAR_0 | VAR_1);
 else
  VAR_2->features &= ~(VAR_0 | VAR_1);

 return 0;
}
