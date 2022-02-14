
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(int VAR_11)
{
 FUNC_1(VAR_9, VAR_11 + VAR_1);
 FUNC_1(VAR_6, VAR_11 + VAR_1);
 if(FUNC_0(VAR_11 + VAR_1) != VAR_6)
  return 0;
 if(!FUNC_0(VAR_11 + VAR_10) || FUNC_0(VAR_11 + VAR_10) == 0xFF)
  return 0;
 if((FUNC_0(VAR_11 + VAR_8) & (VAR_5 | VAR_3 | VAR_0 | VAR_7 | VAR_4 | VAR_2)) != VAR_3)
  return 0;
 return 1;
}
