
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;

void FUNC_2(int VAR_2, int VAR_3, const char *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4) * 8;
 int VAR_6, VAR_7;

 VAR_5++;
 if (VAR_2 + VAR_5 > VAR_1)
  VAR_5 = VAR_1 - VAR_2;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  unsigned short *VAR_8;
  VAR_8 = (unsigned short *)VAR_0
   + VAR_2 + VAR_1 * (VAR_3 + VAR_7);
  for (VAR_6 = VAR_5; VAR_6 > 0; VAR_6--, VAR_8++)
   *VAR_8 = (*VAR_8 >> 2) & 0x39e7;
 }
 FUNC_0(VAR_2, VAR_3, VAR_4);
}
