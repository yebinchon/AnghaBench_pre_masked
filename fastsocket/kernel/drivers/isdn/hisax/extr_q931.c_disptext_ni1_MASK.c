
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int nr; char* descr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_1(char *VAR_2, u_char * VAR_3)
{
 char *VAR_4 = VAR_2;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_3++;
 VAR_5 = *VAR_3++ - 1;
 if (*VAR_3++ != 0x80) {
  VAR_4 += FUNC_0(VAR_4, "    Unknown display type\n");
  return (VAR_4 - VAR_2);
 }

 while (VAR_5 > 0) {
  VAR_6 = *VAR_3++;
  VAR_7 = *VAR_3++;
  VAR_5 -= VAR_7 + 2;

  if ((VAR_6 == 0x80) || (VAR_6 == 0x81)) VAR_3++;
  else {
   for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
    if (VAR_6 == VAR_1[VAR_8].nr)
     break;


   if (VAR_8 != VAR_0) {
    VAR_4 += FUNC_0(VAR_4, "    %s: ", VAR_1[VAR_8].descr);
    while (VAR_7--)
     *VAR_4++ = *VAR_3++;
   } else {
    VAR_4 += FUNC_0(VAR_4, "    (unknown display tag %2x): ", VAR_6);
    while (VAR_7--)
     *VAR_4++ = *VAR_3++;
   }
   VAR_4 += FUNC_0(VAR_4, "\n");
                }
 }
 return (VAR_4 - VAR_2);
}
