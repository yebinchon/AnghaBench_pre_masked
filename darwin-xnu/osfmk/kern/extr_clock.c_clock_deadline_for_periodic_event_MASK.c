
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;

void
FUNC_2(
 uint64_t VAR_0,
 uint64_t VAR_1,
 uint64_t *VAR_2)
{
 FUNC_0(VAR_0 != 0);

 *VAR_2 += VAR_0;

 if (*VAR_2 <= VAR_1) {
  *VAR_2 = VAR_1 + VAR_0;
  VAR_1 = FUNC_1();

  if (*VAR_2 <= VAR_1)
   *VAR_2 = VAR_1 + VAR_0;
 }
}
