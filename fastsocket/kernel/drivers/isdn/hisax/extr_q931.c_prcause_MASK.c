
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int nr; char* edescr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int* FUNC_1 (int*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static
int
FUNC_3(char *VAR_2, u_char * VAR_3)
{
 u_char *VAR_4;
 char *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 VAR_4 = VAR_3 + VAR_3[1] + 1;
 VAR_3 += 2;
 VAR_5 += FUNC_2(VAR_5, "    coding ");
 VAR_5 += FUNC_0(VAR_5, *VAR_3, 7, 2);
 VAR_5 += FUNC_2(VAR_5, " location ");
 VAR_5 += FUNC_0(VAR_5, *VAR_3, 4, 4);
 *VAR_5++ = '\n';
 VAR_3 = FUNC_1(VAR_3);

 VAR_7 = 0x7f & *VAR_3++;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_1[VAR_6].nr == VAR_7)
   break;


 if (VAR_6 == VAR_0)
  VAR_5 += FUNC_2(VAR_5, "Unknown cause type %x!\n", VAR_7);
 else
  VAR_5 += FUNC_2(VAR_5, "  cause value %x : %s \n", VAR_7, VAR_1[VAR_6].edescr);

 while (!0) {
  if (VAR_3 > VAR_4)
   break;
  VAR_5 += FUNC_2(VAR_5, "    diag attribute %d ", *VAR_3++ & 0x7f);
  VAR_5 += FUNC_2(VAR_5, " rej %d ", *VAR_3 & 0x7f);
  if (*VAR_3 & 0x80) {
   *VAR_5++ = '\n';
   break;
  } else
   VAR_5 += FUNC_2(VAR_5, " av %d\n", (*++VAR_3) & 0x7f);
 }
 return (VAR_5 - VAR_2);

}
