
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6gmac {scalar_t__ reg; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct s6gmac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_1)
{
 struct s6gmac *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(0, VAR_2->reg + VAR_0);
}
