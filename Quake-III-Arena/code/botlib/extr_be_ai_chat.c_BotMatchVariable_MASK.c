
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* variables; int * string; } ;
typedef TYPE_2__ bot_match_t ;
struct TYPE_7__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_5__ {scalar_t__ offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(bot_match_t *VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
 if (VAR_4 < 0 || VAR_4 >= VAR_0)
 {
  VAR_2.Print(VAR_1, "BotMatchVariable: variable out of range\n");
  FUNC_1(VAR_5, "");
  return;
 }

 if (VAR_3->variables[VAR_4].offset >= 0)
 {
  if (VAR_3->variables[VAR_4].length < VAR_6)
   VAR_6 = VAR_3->variables[VAR_4].length+1;
  FUNC_0( VAR_3->variables[VAR_4].offset >= 0 );
  FUNC_2(VAR_5, &VAR_3->string[ (int) VAR_3->variables[VAR_4].offset], VAR_6-1);
  VAR_5[VAR_6-1] = '\0';
 }
 else
 {
  FUNC_1(VAR_5, "");
 }
 return;
}
