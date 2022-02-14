
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

void
FUNC_1(uint64_t VAR_2[256])
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 if (VAR_2 == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 1) {
  VAR_6 = FUNC_0(VAR_0, VAR_3);
  VAR_7 = FUNC_0(VAR_1, VAR_3);

  if ((VAR_7 | VAR_6) == 0)
   continue;

  for (VAR_4 = (VAR_3 == 0) ? 16 : 0; VAR_4 < 32; VAR_4 += 1) {
   VAR_5 = (32 * VAR_3) + VAR_4;
   if ((VAR_7 | VAR_6) & (1 << VAR_4))
    VAR_2[VAR_5] += 1;
  }
 }
}
