
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline int FUNC_0(u32 VAR_7, u32 VAR_8)
{
 if ((VAR_7 & VAR_1) < VAR_2)
  return 0;
 if ((VAR_7 & VAR_1) > VAR_0)
  return 0;
 VAR_7 &= ~VAR_1;
 if (VAR_8 && VAR_7) {
  if ((VAR_7 & VAR_5) > VAR_4)
   return 0;
  if ((VAR_7 & VAR_6) > VAR_3)
   return 0;
  VAR_7 &= ~(VAR_5 | VAR_6);
 }
 if (VAR_7)
  return 0;
 return 1;
}
