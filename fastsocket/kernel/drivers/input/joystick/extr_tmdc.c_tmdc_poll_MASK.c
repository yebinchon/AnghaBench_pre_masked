
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmdc {unsigned char exists; unsigned char bads; int * port; int gameport; int reads; } ;
struct gameport {int dummy; } ;


 int VAR_0 ;
 struct tmdc* FUNC_0 (struct gameport*) ;
 scalar_t__ FUNC_1 (int ,unsigned char*) ;
 unsigned char FUNC_2 (int ,unsigned char**) ;

__attribute__((used)) static void FUNC_3(struct gameport *VAR_1)
{
 unsigned char VAR_2[2][VAR_0];
 struct tmdc *VAR_3 = FUNC_0(VAR_1);
 unsigned char VAR_4, VAR_5 = 0;
 int VAR_6;

 VAR_3->reads++;

 if ((VAR_4 = FUNC_2(VAR_3->gameport, VAR_2)) != VAR_3->exists)
  VAR_5 = 1;
 else {
  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
   if (VAR_4 & (1 << VAR_6) & VAR_3->exists) {

    if (FUNC_1(VAR_3->port[VAR_6], VAR_2[VAR_6]))
     VAR_5 = 1;
   }
  }
 }

 VAR_3->bads += VAR_5;
}
