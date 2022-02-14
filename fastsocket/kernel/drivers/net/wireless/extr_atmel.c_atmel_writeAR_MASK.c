
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, u16 VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_2, VAR_1->base_addr + VAR_0);

 for (VAR_3 = 0; VAR_2 != FUNC_0(VAR_1->base_addr + VAR_0) && VAR_3 < 10; VAR_3++)
  FUNC_1(VAR_2, VAR_1->base_addr + VAR_0);
}
