
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static s64 FUNC_0(u64 VAR_3)
{
 int VAR_4, VAR_5;


 VAR_4 = (VAR_3 >> VAR_2) & VAR_1;
 VAR_5 = VAR_3 & VAR_0;
 if ((VAR_4 == 2 || VAR_4 == 4) && (VAR_5 & ~7) == 0x40)
  return VAR_3 - (1 << VAR_2) + 8;
 if ((VAR_4 == 1 || VAR_4 == 3) && (VAR_5 & ~7) == 0x48)
  return VAR_3 + (1 << VAR_2) - 8;
 return -1;
}
