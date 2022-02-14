
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct net_device *VAR_2, int VAR_3, int VAR_4)
{
 FUNC_0(FUNC_1(VAR_3), VAR_2->base_addr + VAR_0);
 FUNC_0(FUNC_1(VAR_4), VAR_2->base_addr + VAR_1);
}
