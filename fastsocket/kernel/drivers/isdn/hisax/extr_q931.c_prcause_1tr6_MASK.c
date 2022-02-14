
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int nr; char* descr; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2, u_char * VAR_3)
{
 char *VAR_4 = VAR_2;
 int VAR_5, VAR_6;

 VAR_3++;
 if (0 == *VAR_3) {
  VAR_4 += FUNC_1(VAR_4, "   OK (cause length=0)\n");
  return (VAR_4 - VAR_2);
 } else if (*VAR_3 > 1) {
  VAR_4 += FUNC_1(VAR_4, "    coding ");
  VAR_4 += FUNC_0(VAR_4, VAR_3[2], 7, 2);
  VAR_4 += FUNC_1(VAR_4, " location ");
  VAR_4 += FUNC_0(VAR_4, VAR_3[2], 4, 4);
  *VAR_4++ = '\n';
 }
 VAR_3++;
 VAR_6 = 0x7f & *VAR_3;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_0[VAR_5].nr == VAR_6)
   break;


 if (VAR_5 == VAR_1)
  VAR_4 += FUNC_1(VAR_4, "Unknown cause type %x!\n", VAR_6);
 else
  VAR_4 += FUNC_1(VAR_4, "  cause value %x : %s \n", VAR_6, VAR_0[VAR_5].descr);

 return (VAR_4 - VAR_2);

}
