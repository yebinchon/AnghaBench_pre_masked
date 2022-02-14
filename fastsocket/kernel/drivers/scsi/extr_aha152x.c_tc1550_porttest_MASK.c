
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3 + VAR_1, 0);
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  FUNC_1(VAR_3 + VAR_0, VAR_4);

 FUNC_1(VAR_3 + VAR_1, 0);
 for (VAR_4 = 0; VAR_4 < 16 && FUNC_0(VAR_3 + VAR_2) == VAR_4; VAR_4++)
  ;

 return (VAR_4 == 16);
}
