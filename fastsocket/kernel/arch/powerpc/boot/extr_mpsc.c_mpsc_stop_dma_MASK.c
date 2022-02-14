
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(volatile char *VAR_7)
{
 FUNC_1((u32 *)(VAR_6 + VAR_0),VAR_2 | VAR_1);
 FUNC_1((u32 *)(VAR_7 + VAR_3), VAR_4 | VAR_5);

 while ((FUNC_0((u32 *)(VAR_7 + VAR_3))
    & (VAR_4 | VAR_5)) != 0)
  FUNC_2(100);
}
