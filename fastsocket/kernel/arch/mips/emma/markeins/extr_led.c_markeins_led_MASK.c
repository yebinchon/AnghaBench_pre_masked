
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char const) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;

void FUNC_4(const char *VAR_1)
{
 int VAR_2;
 int VAR_3 = FUNC_3(VAR_1);

 FUNC_2();
 if (VAR_3 > 8)
  VAR_3 = 8;

 if (FUNC_0(0xb0000800) & (0x1 << 18))
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
   FUNC_1(VAR_0 + VAR_2, VAR_1[VAR_2]);
 else
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
   FUNC_1(VAR_0 + (VAR_2 & 4) + (3 - (VAR_2 & 3)),
         VAR_1[VAR_2]);
}
