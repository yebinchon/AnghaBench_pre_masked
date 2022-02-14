
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* symbol; } ;
typedef TYPE_4__ symbol_node_t ;
struct TYPE_7__ {TYPE_1__* finfo; } ;
struct TYPE_8__ {char* name; TYPE_2__ info; } ;
struct TYPE_6__ {int value; int mask; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_0, symbol_node_t *VAR_1)
{
 int VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0,
"	{ \"%s\",",
  VAR_1->symbol->name);

 VAR_2 = 3 - (FUNC_2(VAR_1->symbol->name) + 5) / 8;

 while (VAR_2-- > 0)
  FUNC_1('\t', VAR_0);
 FUNC_0(VAR_0, "0x%02x, 0x%02x }",
  VAR_1->symbol->info.finfo->value,
  VAR_1->symbol->info.finfo->mask);
}
