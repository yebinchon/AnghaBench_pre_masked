
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

u_long FUNC_4(void)
{
 static u_long VAR_0, VAR_1;
 u_long VAR_2, VAR_3;

 if (FUNC_1() & 0x1)
  return FUNC_2();

 VAR_3 = FUNC_0();
 if (VAR_3 == VAR_0)
  return VAR_1;
 else
  VAR_0 = VAR_3;

 VAR_2 = ((VAR_3 >> 4) & 0x03);
 VAR_3 &= 0xf;
 if (VAR_3 && VAR_3 < (1 << VAR_2))
  VAR_1 = FUNC_3() / VAR_3;
 else
  VAR_1 = FUNC_3() >> VAR_2;
 return VAR_1;
}
