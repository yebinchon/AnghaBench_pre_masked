
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 char FUNC_1 (char const) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_1, const char *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  u8 VAR_4, VAR_5;
  if (!*VAR_2)
   break;
  VAR_4 = FUNC_0(*VAR_2) ? *VAR_2-'0' : FUNC_1(*VAR_2)-'A'+10;
  VAR_2++;
  VAR_5 = FUNC_0(*VAR_2) ? *VAR_2-'0' : FUNC_1(*VAR_2)-'A'+10;
  VAR_2++;
  VAR_1[VAR_3] = (VAR_4<<4) | VAR_5;
 }
}
