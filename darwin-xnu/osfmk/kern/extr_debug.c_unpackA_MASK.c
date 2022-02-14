
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {char a; char b; char c; char d; char e; char f; char g; char h; } ;
typedef TYPE_1__ pasc_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*,int ) ;

void
FUNC_2(char *VAR_0, uint32_t VAR_1)
{
 pasc_t VAR_2;
 unsigned VAR_3 = 0;
 VAR_1 = (VAR_1 * 8)/7;

 while (VAR_3 < VAR_1) {
   VAR_2 = *(pasc_t *)&VAR_0[VAR_3];
   FUNC_1(&VAR_0[VAR_3+7], &VAR_0[VAR_3+8], FUNC_0(0, (int) (VAR_1 - VAR_3 - 8)));
   VAR_0[VAR_3++] = VAR_2.a;
   VAR_0[VAR_3++] = VAR_2.b;
   VAR_0[VAR_3++] = VAR_2.c;
   VAR_0[VAR_3++] = VAR_2.d;
   VAR_0[VAR_3++] = VAR_2.e;
   VAR_0[VAR_3++] = VAR_2.f;
   VAR_0[VAR_3++] = VAR_2.g;
   VAR_0[VAR_3++] = VAR_2.h;
 }
}
