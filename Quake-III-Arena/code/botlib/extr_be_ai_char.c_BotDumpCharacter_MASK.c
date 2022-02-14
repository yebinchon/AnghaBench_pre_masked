
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* c; int skill; int filename; } ;
typedef TYPE_3__ bot_character_t ;
struct TYPE_5__ {int string; int _float; int integer; } ;
struct TYPE_6__ {int type; TYPE_1__ value; } ;





 int FUNC_0 (char*,...) ;
 int VAR_0 ;

void FUNC_1(bot_character_t *VAR_1)
{
 int VAR_2;

 FUNC_0("%s", VAR_1->filename);
 FUNC_0("skill %d\n", VAR_1->skill);
 FUNC_0("{\n");
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
 {
  switch(VAR_1->c[VAR_2].type)
  {
   case 129: FUNC_0(" %4d %d\n", VAR_2, VAR_1->c[VAR_2].value.integer); break;
   case 130: FUNC_0(" %4d %f\n", VAR_2, VAR_1->c[VAR_2].value._float); break;
   case 128: FUNC_0(" %4d %s\n", VAR_2, VAR_1->c[VAR_2].value.string); break;
  }
 }
 FUNC_0("}\n");
}
