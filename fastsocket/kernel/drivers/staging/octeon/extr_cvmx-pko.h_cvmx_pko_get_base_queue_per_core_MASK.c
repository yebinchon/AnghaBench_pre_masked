
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline int FUNC_0(int VAR_7, int VAR_8)
{







 if (VAR_7 < VAR_1)
  return VAR_7 * VAR_3 + VAR_8;
 else if (VAR_7 >= 16 && VAR_7 < 16 + VAR_2)
  return VAR_1 *
      VAR_3 + (VAR_7 -
          16) *
      VAR_4 + VAR_8;
 else if ((VAR_7 >= 32) && (VAR_7 < 36))
  return VAR_1 *
      VAR_3 +
      VAR_2 *
      VAR_4 + (VAR_7 -
          32) *
      VAR_6;
 else if ((VAR_7 >= 36) && (VAR_7 < 40))
  return VAR_1 *
      VAR_3 +
      VAR_2 *
      VAR_4 +
      4 * VAR_6 + (VAR_7 -
       36) *
      VAR_5;
 else




  return VAR_0;
}
