
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static const u_char *
FUNC_1(char *VAR_0, const u_char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;


 VAR_2 = *VAR_1++;
 if (VAR_2 == '^') {
  VAR_4 = 1;
  VAR_2 = *VAR_1++;
 } else
  VAR_4 = 0;


 (void) FUNC_0(VAR_0, VAR_4, 256);

 if (VAR_2 == 0)
  return (VAR_1 - 1);
 VAR_4 = 1 - VAR_4;
 for (;;) {
  VAR_0[VAR_2] = VAR_4;
doswitch:
  VAR_3 = *VAR_1++;
  switch (VAR_3) {

  case 0:
   return (VAR_1 - 1);

  case '-':
   VAR_3 = *VAR_1;
   if (VAR_3 == ']' || VAR_3 < VAR_2) {
    VAR_2 = '-';
    break;
   }
   VAR_1++;

   do {
       VAR_0[++VAR_2] = VAR_4;
   } while (VAR_2 < VAR_3);
   VAR_2 = VAR_3;





   goto doswitch;

  case ']':
   return (VAR_1);

  default:
   VAR_2 = VAR_3;
   break;
  }
 }

}
