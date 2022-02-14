
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_bus*,int**) ;
 int FUNC_1 (int**) ;

__attribute__((used)) static bool FUNC_2(struct bcma_bus *VAR_5, u32 **VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_5, VAR_6);
 FUNC_1(VAR_6);
 return (((VAR_7 & VAR_4)) &&
  ((VAR_7 & VAR_2) == VAR_3) &&
  ((VAR_7 & VAR_0) == VAR_1));
}
