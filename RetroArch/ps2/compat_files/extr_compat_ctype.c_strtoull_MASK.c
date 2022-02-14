
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char) ;

unsigned long long FUNC_1(const char * __restrict VAR_4, char ** __restrict VAR_5, int VAR_6)
{
 const char *VAR_7;
 unsigned long long VAR_8;
 char VAR_9;
 unsigned long long VAR_10;
 int VAR_11, VAR_12, VAR_13;




 VAR_7 = VAR_4;
 do {
  VAR_9 = *VAR_7++;
 } while (FUNC_0((unsigned char)VAR_9));
 if (VAR_9 == '-') {
  VAR_11 = 1;
  VAR_9 = *VAR_7++;
 } else {
  VAR_11 = 0;
  if (VAR_9 == '+')
   VAR_9 = *VAR_7++;
 }
 if ((VAR_6 == 0 || VAR_6 == 16) &&
     VAR_9 == '0' && (*VAR_7 == 'x' || *VAR_7 == 'X')) {
  VAR_9 = VAR_7[1];
  VAR_7 += 2;
  VAR_6 = 16;
 }
 if (VAR_6 == 0)
  VAR_6 = VAR_9 == '0' ? 8 : 10;
 VAR_8 = VAR_12 = 0;
 if (VAR_6 < 2 || VAR_6 > 36)
  goto noconv;

 VAR_10 = VAR_2 / VAR_6;
 VAR_13 = VAR_2 % VAR_6;
 for ( ; ; VAR_9 = *VAR_7++) {
  if (VAR_9 >= '0' && VAR_9 <= '9')
   VAR_9 -= '0';
  else if (VAR_9 >= 'A' && VAR_9 <= 'Z')
   VAR_9 -= 'A' - 10;
  else if (VAR_9 >= 'a' && VAR_9 <= 'z')
   VAR_9 -= 'a' - 10;
  else
   break;
  if (VAR_9 >= VAR_6)
   break;
  if (VAR_12 < 0 || VAR_8 > VAR_10 || (VAR_8 == VAR_10 && VAR_9 > VAR_13))
   VAR_12 = -1;
  else {
   VAR_12 = 1;
   VAR_8 *= VAR_6;
   VAR_8 += VAR_9;
  }
 }
 if (VAR_12 < 0) {
  VAR_8 = VAR_2;
  VAR_3 = VAR_1;
 } else if (!VAR_12) {
noconv:
  VAR_3 = VAR_0;
 } else if (VAR_11)
  VAR_8 = -VAR_8;
 if (VAR_5 != ((void*)0))
  *VAR_5 = (char *)(VAR_12 ? VAR_7 - 1 : VAR_4);
 return (VAR_8);
}
