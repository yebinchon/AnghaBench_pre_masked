
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 u32 *VAR_2 = VAR_1;
 int VAR_3 = VAR_0 >> 5;

 while ((VAR_3 != 0) && (VAR_2[(--VAR_3) << 2] == 0))
  continue;

 if (FUNC_1(!VAR_3 && !VAR_2[0]))
  return -1;
 else
  return FUNC_0(VAR_2[VAR_3 << 2]) - 1 + (VAR_3 << 5);
}
