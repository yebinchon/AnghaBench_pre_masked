
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* string; struct TYPE_8__* next; } ;
typedef TYPE_2__ bot_matchstring_t ;
struct TYPE_9__ {scalar_t__ type; size_t variable; TYPE_2__* firststring; struct TYPE_9__* next; } ;
typedef TYPE_3__ bot_matchpiece_t ;
struct TYPE_10__ {char* string; TYPE_1__* variables; } ;
typedef TYPE_4__ bot_match_t ;
struct TYPE_7__ {int length; int offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;

int FUNC_3(bot_matchpiece_t *VAR_4, bot_match_t *VAR_5)
{
 int VAR_6, VAR_7;
 char *VAR_8, *VAR_9;
 bot_matchpiece_t *VAR_10;
 bot_matchstring_t *VAR_11;


 VAR_6 = -1;

 VAR_8 = VAR_5->string;


 for (VAR_10 = VAR_4; VAR_10; VAR_10 = VAR_10->next)
 {

  if (VAR_10->type == VAR_0)
  {
   VAR_9 = ((void*)0);
   for (VAR_11 = VAR_10->firststring; VAR_11; VAR_11 = VAR_11->next)
   {
    if (!FUNC_2(VAR_11->string))
    {
     VAR_9 = VAR_8;
     break;
    }

    VAR_7 = FUNC_0(VAR_8, VAR_11->string, VAR_2);
    if (VAR_7 >= 0)
    {
     VAR_9 = VAR_8 + VAR_7;
     if (VAR_6 >= 0)
     {
      VAR_5->variables[VAR_6].length =
        (VAR_9 - VAR_5->string) - VAR_5->variables[VAR_6].offset;

      VAR_6 = -1;
      break;
     }
     else if (VAR_7 == 0)
     {
      break;
     }
     VAR_9 = ((void*)0);
    }
   }
   if (!VAR_9) return VAR_2;
   VAR_8 = VAR_9 + FUNC_2(VAR_11->string);
  }

  else if (VAR_10->type == VAR_1)
  {

   VAR_5->variables[VAR_10->variable].offset = VAR_8 - VAR_5->string;
   VAR_6 = VAR_10->variable;
  }
 }

 if (!VAR_10 && (VAR_6 >= 0 || !FUNC_2(VAR_8)))
 {

  if (VAR_6 >= 0)
  {
          FUNC_1( VAR_5->variables[VAR_6].offset >= 0 );
   VAR_5->variables[VAR_6].length =
    FUNC_2(&VAR_5->string[ (int) VAR_5->variables[VAR_6].offset]);
  }
  return VAR_3;
 }
 return VAR_2;
}
