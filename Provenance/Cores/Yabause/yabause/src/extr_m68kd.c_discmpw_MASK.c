
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;


 int FUNC_0 (scalar_t__,int,int*,char*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(u32 VAR_0, u16 VAR_1, char *VAR_2)
{
   int VAR_3=2;
   VAR_2 += FUNC_1(VAR_2, "cmp.w   ");
   VAR_2 += FUNC_0(VAR_0+VAR_3, VAR_1, &VAR_3, VAR_2);
   VAR_2 += FUNC_1(VAR_2, ", d%d", (VAR_1 >> 9) & 0x7);
   return VAR_3;
}
