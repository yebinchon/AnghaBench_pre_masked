
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_bus {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcma_bus*,int**) ;

__attribute__((used)) static s32 FUNC_1(struct bcma_bus *VAR_4, u32 **VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (!(VAR_6 & VAR_3))
  return -VAR_0;
 if ((VAR_6 & VAR_1) != VAR_2)
  return -VAR_0;
 return VAR_6;
}
