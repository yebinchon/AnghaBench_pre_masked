
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

int
FUNC_2 (unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_3 << VAR_2;
 u64 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_4);






 if (VAR_6 & VAR_1 || VAR_6 & VAR_0)
  return 1;







 if (FUNC_1(VAR_5, VAR_4))
  return 0;

 return 1;
}
