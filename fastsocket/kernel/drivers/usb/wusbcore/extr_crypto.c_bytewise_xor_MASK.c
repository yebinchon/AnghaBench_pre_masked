
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(void *VAR_0, const void *VAR_1, const void *VAR_2,
    size_t VAR_3)
{
 u8 *VAR_4 = VAR_0;
 const u8 *VAR_5 = VAR_1, *VAR_6 = VAR_2;
 size_t VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_4[VAR_7] = VAR_5[VAR_7] ^ VAR_6[VAR_7];
}
