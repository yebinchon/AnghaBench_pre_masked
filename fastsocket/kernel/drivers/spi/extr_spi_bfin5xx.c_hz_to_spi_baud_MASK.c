
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static u16 FUNC_1(u32 VAR_1)
{
 u_long VAR_2 = FUNC_0();
 u16 VAR_3 = (VAR_2 / (2 * VAR_1));

 if ((VAR_2 % (2 * VAR_1)) > 0)
  VAR_3++;

 if (VAR_3 < VAR_0)
  VAR_3 = VAR_0;

 return VAR_3;
}
