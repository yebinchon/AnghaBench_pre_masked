
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {unsigned long features; } ;
struct myri10ge_priv {unsigned long features; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct myri10ge_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, u32 VAR_3)
{
 struct myri10ge_priv *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5 = VAR_4->features & (VAR_1 | VAR_0);

 if (VAR_3)
  VAR_2->features |= VAR_5;
 else
  VAR_2->features &= ~VAR_5;
 return 0;
}
