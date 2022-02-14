
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(char *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;

 do {
  VAR_5 = *VAR_2++;
 } while (FUNC_2(VAR_5));
 if (VAR_5 == '-') {
  VAR_7 = 1;
  VAR_5 = *VAR_2++;
 } else if (VAR_5 == '+')
  VAR_5 = *VAR_2++;

 VAR_6 = VAR_7 ? -(unsigned long)VAR_1 : VAR_0;
 VAR_9 = VAR_6 % (unsigned long)VAR_3;
 VAR_6 /= (unsigned long)VAR_3;
 for (VAR_4 = 0, VAR_8 = 0;; VAR_5 = *VAR_2++) {
  if (FUNC_1(VAR_5))
   VAR_5 -= '0';
  else if (FUNC_0(VAR_5))
   VAR_5 -= FUNC_3(VAR_5) ? 'A' - 10 : 'a' - 10;
  else
   break;

  if (VAR_5 >= VAR_3)
   break;

  if (VAR_8 < 0 || VAR_4 > VAR_6 || VAR_4 == VAR_6 && VAR_5 > VAR_9)
   VAR_8 = -1;
  else {
   VAR_8 = 1;
   VAR_4 *= VAR_3;
   VAR_4 += VAR_5;
  }
 }
 if (VAR_8 < 0) {
  VAR_4 = VAR_7 ? VAR_1 : VAR_0;
 } else if (VAR_7)
  VAR_4 = -VAR_4;
 return (VAR_4);
}
