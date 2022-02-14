
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mii_bus*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0; VAR_2 > 0; VAR_2--) {
  u32 VAR_3;

  if (FUNC_0(VAR_1, VAR_2, &VAR_3))
   return -1;

  if (VAR_3 == 0xffffffff)
   break;
 }

 return VAR_2;
}
