
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(
 char *VAR_0,
 int VAR_1)
{
 char *VAR_2;
 int VAR_3;
 char *VAR_4 = VAR_0 + VAR_1 - 1;

 VAR_2 = VAR_0;
 for (;;) {
  VAR_3 = FUNC_0();
  switch (VAR_3) {
  case '\n':
  case '\r':
   FUNC_1("\n");
   *VAR_2++ = 0;
   return;

  case '\b':
  case '#':
  case '\177':
   if (VAR_2 > VAR_0) {
    FUNC_1("\b \b");
    VAR_2--;
   }
   continue;

  case '@':
  case 'u'&037:
   VAR_2 = VAR_0;
   FUNC_1("\n\r");
   continue;

  default:
   if (VAR_3 >= ' ' && VAR_3 < '\177') {
    if (VAR_2 < VAR_4) {
     *VAR_2++ = VAR_3;
     FUNC_1("%c", VAR_3);
    }
    else {
     FUNC_1("%c", '\007');
    }
   }
  }
 }
}
