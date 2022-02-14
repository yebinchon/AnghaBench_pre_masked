
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b44 {scalar_t__ phy_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct b44*,scalar_t__,int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct b44 *VAR_1, int VAR_2, u32 *VAR_3)
{
 if (VAR_1->phy_addr == VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_1->phy_addr, VAR_2, VAR_3);
}
