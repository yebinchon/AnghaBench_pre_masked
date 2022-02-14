
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bot_goalstate_t ;
struct TYPE_3__ {int client; } ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;

int FUNC_1(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++)
 {
  if (!VAR_1[VAR_3])
  {
   VAR_1[VAR_3] = FUNC_0(sizeof(bot_goalstate_t));
   VAR_1[VAR_3]->client = VAR_2;
   return VAR_3;
  }
 }
 return 0;
}
