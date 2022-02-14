
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aliasinfo {char* name; TYPE_1__* slab; } ;
struct TYPE_2__ {int refs; char* name; } ;


 int VAR_0 ;
 struct aliasinfo* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct aliasinfo *VAR_4;
 char *VAR_5 = ((void*)0);

 FUNC_2();
 FUNC_0();

 for(VAR_4 = VAR_1; VAR_4 < VAR_1 + VAR_0; VAR_4++) {

  if (!VAR_3 && VAR_4->slab->refs == 1)
   continue;

  if (!VAR_2) {
   if (VAR_5) {
    if (FUNC_3(VAR_4->slab->name, VAR_5) == 0) {
     FUNC_1(" %s", VAR_4->name);
     continue;
    }
   }
   FUNC_1("\n%-12s <- %s", VAR_4->slab->name, VAR_4->name);
   VAR_5 = VAR_4->slab->name;
  }
  else
   FUNC_1("%-20s -> %s\n", VAR_4->name, VAR_4->slab->name);
 }
 if (VAR_5)
  FUNC_1("\n");
}
