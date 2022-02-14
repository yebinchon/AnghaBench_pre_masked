
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1 (u32 VAR_6)
{
 unsigned int VAR_7 = (VAR_6 >> 16) & 0x3;

 if (FUNC_0((VAR_7 == VAR_2) && (!(VAR_6 & VAR_4))))
  return 1;
 else if ((VAR_7 == VAR_3) && (!(VAR_6 & VAR_5)))
  return 1;
 else if ((VAR_7 == VAR_1) && (!(VAR_6 & VAR_0)))
  return 1;
 return 0;
}
