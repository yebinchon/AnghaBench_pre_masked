
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_8)
{
 if ((VAR_8 & (VAR_5 | VAR_6)) == (VAR_5 | VAR_6))
  return VAR_0;
 else if ((VAR_8 & (VAR_5 | VAR_7)) == (VAR_5 | VAR_7))
  return VAR_4;
 else if ((VAR_8 & VAR_5) == VAR_5)
  return VAR_2;
 else if ((VAR_8 & VAR_7) == VAR_7)
  return VAR_3;
 else
  return VAR_1;
}
