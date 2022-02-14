
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bot_characteristic_t ;
struct TYPE_8__ {float skill; char* filename; TYPE_2__* c; } ;
typedef TYPE_3__ bot_character_t ;
struct TYPE_6__ {float _float; char* string; int integer; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ value; } ;


 TYPE_3__* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__** VAR_5 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5(int VAR_6, int VAR_7, float VAR_8)
{
 bot_character_t *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 float VAR_14;

 VAR_9 = FUNC_0(VAR_6);
 VAR_10 = FUNC_0(VAR_7);
 if (!VAR_9 || !VAR_10)
  return 0;

 for (VAR_13 = 1; VAR_13 <= VAR_4; VAR_13++)
 {
  if (!VAR_5[VAR_13]) break;
 }
 if (VAR_13 > VAR_4) return 0;
 VAR_11 = (bot_character_t *) FUNC_1(sizeof(bot_character_t) +
     VAR_3 * sizeof(bot_characteristic_t));
 VAR_11->skill = VAR_8;
 FUNC_3(VAR_11->filename, VAR_9->filename);
 VAR_5[VAR_13] = VAR_11;

 VAR_14 = (float) (VAR_8 - VAR_9->skill) / (VAR_10->skill - VAR_9->skill);
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
 {

  if (VAR_9->c[VAR_12].type == VAR_0 && VAR_10->c[VAR_12].type == VAR_0)
  {
   VAR_11->c[VAR_12].type = VAR_0;
   VAR_11->c[VAR_12].value._float = VAR_9->c[VAR_12].value._float +
        (VAR_10->c[VAR_12].value._float - VAR_9->c[VAR_12].value._float) * VAR_14;
  }
  else if (VAR_9->c[VAR_12].type == VAR_1)
  {
   VAR_11->c[VAR_12].type = VAR_1;
   VAR_11->c[VAR_12].value.integer = VAR_9->c[VAR_12].value.integer;
  }
  else if (VAR_9->c[VAR_12].type == VAR_2)
  {
   VAR_11->c[VAR_12].type = VAR_2;
   VAR_11->c[VAR_12].value.string = (char *) FUNC_2(FUNC_4(VAR_9->c[VAR_12].value.string)+1);
   FUNC_3(VAR_11->c[VAR_12].value.string, VAR_9->c[VAR_12].value.string);
  }
 }
 return VAR_13;
}
