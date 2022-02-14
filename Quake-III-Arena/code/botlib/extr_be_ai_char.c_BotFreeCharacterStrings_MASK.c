
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* c; } ;
typedef TYPE_3__ bot_character_t ;
struct TYPE_5__ {int string; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

void FUNC_1(bot_character_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  if (VAR_2->c[VAR_3].type == VAR_0)
  {
   FUNC_0(VAR_2->c[VAR_3].value.string);
  }
 }
}
