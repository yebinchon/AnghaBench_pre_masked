
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; int refs; } ;
struct aliasinfo {char* name; } ;


 int VAR_0 ;
 struct aliasinfo* FUNC_0 (struct slabinfo*) ;
 int VAR_1 ;
 struct slabinfo* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct slabinfo *VAR_4;
 struct aliasinfo *VAR_5;

 for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_3; VAR_4++) {
  if (*VAR_4->name != ':')
   continue;

  if (VAR_4->refs > 1 && !VAR_1)
   continue;

  VAR_5 = FUNC_0(VAR_4);

  if (VAR_5)
   VAR_4->name = VAR_5->name;
  else {
   VAR_4->name = "*";
   VAR_0--;
  }
 }
}
