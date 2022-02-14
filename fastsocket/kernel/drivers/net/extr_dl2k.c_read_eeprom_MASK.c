
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_2 (long VAR_4, int VAR_5)
{
 int VAR_6 = 1000;
 FUNC_1 (VAR_1 | (VAR_5 & 0xff), VAR_4 + VAR_2);
 while (VAR_6-- > 0) {
  if (!(FUNC_0 (VAR_4 + VAR_2) & VAR_0)) {
   return FUNC_0 (VAR_4 + VAR_3);
  }
 }
 return 0;
}
