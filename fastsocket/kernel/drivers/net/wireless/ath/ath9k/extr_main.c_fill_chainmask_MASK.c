
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_0 && VAR_1; VAR_3++, VAR_0 >>= 1) {
  if (!(VAR_0 & FUNC_0(0)))
   continue;

  if (VAR_1 & FUNC_0(0))
   VAR_2 |= FUNC_0(VAR_3);

  VAR_1 >>= 1;
 }

 return VAR_2;
}
