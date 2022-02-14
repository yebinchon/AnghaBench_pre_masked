
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tun_struct {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct tun_struct* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, u32 VAR_2)
{
 struct tun_struct *VAR_3 = FUNC_0(VAR_1);
 if (VAR_2)
  VAR_3->flags &= ~VAR_0;
 else
  VAR_3->flags |= VAR_0;
 return 0;
}
