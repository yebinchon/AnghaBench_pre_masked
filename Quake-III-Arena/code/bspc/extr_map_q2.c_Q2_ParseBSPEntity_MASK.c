
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int modelnum; scalar_t__ areaportalnum; int origin; scalar_t__ numbrushes; void* firstbrush; } ;
typedef TYPE_1__ entity_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

qboolean FUNC_7(int VAR_4)
{
 entity_t *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = VAR_2;
 VAR_8 = VAR_3;

 VAR_5 = &VAR_1[VAR_4];
 VAR_5->firstbrush = VAR_2;
 VAR_5->numbrushes = 0;
 VAR_5->modelnum = -1;

 VAR_6 = FUNC_3(VAR_5, "model");
 if (VAR_6 && FUNC_6(VAR_6))
 {
  if (*VAR_6 != '*')
  {
   FUNC_0("Q2_ParseBSPEntity: model number without leading *");
  }

  VAR_5->modelnum = FUNC_4(&VAR_6[1]);
 }

 FUNC_1(VAR_5, "origin", VAR_5->origin);



 if (!FUNC_5("worldspawn", FUNC_3(VAR_5, "classname")))
 {
  VAR_5->modelnum = 0;
 }


 if (VAR_5->modelnum >= 0)
 {

  FUNC_2(VAR_5);
 }






 if (!FUNC_5 ("func_areaportal", FUNC_3 (VAR_5, "classname")))
 {
  VAR_0++;
  VAR_5->areaportalnum = VAR_0;
  return 1;
 }
 return 1;
}
