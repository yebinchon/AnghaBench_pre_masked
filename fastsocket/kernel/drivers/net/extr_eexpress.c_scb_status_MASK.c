
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;


 unsigned short FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned short FUNC_1(struct net_device *VAR_0)
{
 return FUNC_0(VAR_0->base_addr + 0xc008);
}
