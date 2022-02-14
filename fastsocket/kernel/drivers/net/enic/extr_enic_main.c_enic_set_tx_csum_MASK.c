
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;
struct enic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct enic*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, u32 VAR_4)
{
 struct enic *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 && !FUNC_0(VAR_5, VAR_2))
  return -VAR_0;

 if (VAR_4)
  VAR_3->features |= VAR_1;
 else
  VAR_3->features &= ~VAR_1;

 return 0;
}
