
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mtrr_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(mtrr_type *VAR_3)
{
 unsigned int *VAR_4 = (unsigned int *)VAR_3;
 int VAR_5;

 FUNC_0();

 FUNC_1(VAR_2, VAR_4[0], VAR_4[1]);

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
  FUNC_1(VAR_0 + VAR_5, VAR_4[2 + VAR_5 * 2], VAR_4[3 + VAR_5 * 2]);
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_1(VAR_1 + VAR_5, VAR_4[6 + VAR_5 * 2], VAR_4[7 + VAR_5 * 2]);
}
