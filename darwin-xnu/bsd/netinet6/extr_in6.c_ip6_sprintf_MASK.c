
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int u_char ;
struct in6_addr {int dummy; } ;



char *
FUNC_0(const struct in6_addr *VAR_0)
{
 static const char VAR_1[] = "0123456789abcdef";
 static int VAR_2 = 0;
 static char VAR_3[8][48];

 int VAR_4;
 char *VAR_5;
 const u_short *VAR_6 = (const u_short *)VAR_0;
 const u_char *VAR_7;
 u_char VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 VAR_2 = (VAR_2 + 1) & 7;
 VAR_5 = VAR_3[VAR_2];

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  if (VAR_9 == 1) {
   if (*VAR_6 == 0) {
    if (VAR_4 == 7)
     *VAR_5++ = ':';
    VAR_6++;
    continue;
   } else
    VAR_9 = 2;
  }
  if (*VAR_6 == 0) {
   if (VAR_9 == 0 && *(VAR_6 + 1) == 0) {
    if (VAR_4 == 0)
     *VAR_5++ = ':';
    *VAR_5++ = ':';
    VAR_9 = 1;
   } else {
    *VAR_5++ = '0';
    *VAR_5++ = ':';
   }
   VAR_6++;
   continue;
  }
  VAR_7 = (const u_char *)VAR_6;
  VAR_10 = 0;
  if ((VAR_8 = *VAR_7 >> 4) != 0) {
   *VAR_5++ = VAR_1[VAR_8];
   VAR_10 = 1;
  }
  if ((VAR_8 = *VAR_7++ & 0xf) != 0 || VAR_10) {
   *VAR_5++ = VAR_1[VAR_8];
   VAR_10 = 1;
  }
  if ((VAR_8 = *VAR_7 >> 4) != 0 || VAR_10) {
   *VAR_5++ = VAR_1[VAR_8];
   VAR_10 = 1;
  }
  if ((VAR_8 = *VAR_7 & 0xf) != 0 || VAR_10)
   *VAR_5++ = VAR_1[VAR_8];
  *VAR_5++ = ':';
  VAR_6++;
 }
 *--VAR_5 = 0;
 return (VAR_3[VAR_2]);
}
