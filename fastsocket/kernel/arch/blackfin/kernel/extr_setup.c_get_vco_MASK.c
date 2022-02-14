
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static u_long FUNC_2(void)
{
 static u_long VAR_0;
 u_long VAR_1, VAR_2;




 if (VAR_0)
  return VAR_0;

 VAR_2 = FUNC_0();
 VAR_1 = (VAR_2 >> 9) & 0x3F;
 if (0 == VAR_1)
  VAR_1 = 64;

 VAR_0 = FUNC_1();
 VAR_0 >>= (1 & VAR_2);
 VAR_0 *= VAR_1;
 return VAR_0;
}
