
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_1, int VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_2 < 32);

 for (VAR_1 <<= VAR_2, VAR_3 = VAR_2; VAR_3 < 32;
      VAR_3++, VAR_1 <<= 1) {
  if ((VAR_1 & VAR_0) == 0)
   break;
 }
 return (VAR_3);
}
