
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int,int) ;
 scalar_t__ VAR_2 ;

void FUNC_1(char *VAR_3)
{
 int VAR_4, VAR_5 = (VAR_1 & VAR_0) ? 0 : 1;
 char *VAR_6, *VAR_7;

 VAR_4 = FUNC_0(VAR_3, VAR_2 + 0x50, 0x30, VAR_5);

 for (VAR_6 = VAR_7 = VAR_3 + 1; VAR_6 < VAR_3+VAR_4; VAR_6++)
 {
  if (*VAR_6 == 0) break;
  if (*VAR_6 != ' ' || VAR_7[-1] != ' ')
   *VAR_7++ = *VAR_6;
 }
 *VAR_7 = 0;
}
