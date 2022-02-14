
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_mac {int dummy; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct pasemi_mac* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (struct pasemi_mac const*,int ) ;
 int FUNC_2 (struct pasemi_mac const*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 const struct pasemi_mac *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_1);


 if (VAR_3->flags & VAR_0)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;

 FUNC_2(VAR_4, VAR_1, VAR_5);
}
