
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 32; VAR_2++, VAR_1 <<= 1) {
  if (VAR_1 & VAR_0)
   break;
 }
 return (VAR_2);
}
