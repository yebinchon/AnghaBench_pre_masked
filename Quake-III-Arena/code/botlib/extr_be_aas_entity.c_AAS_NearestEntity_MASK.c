
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_4__ {int modelindex; int origin; } ;
struct TYPE_5__ {TYPE_1__ i; } ;
typedef TYPE_2__ aas_entity_t ;
struct TYPE_6__ {int maxentities; TYPE_2__* entities; } ;


 float FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int ) ;

int FUNC_3(vec3_t VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 float VAR_5, VAR_6;
 aas_entity_t *VAR_7;
 vec3_t VAR_8;

 VAR_4 = 0;
 VAR_6 = 99999;
 for (VAR_3 = 0; VAR_3 < VAR_0.maxentities; VAR_3++)
 {
  VAR_7 = &VAR_0.entities[VAR_3];
  if (VAR_7->i.modelindex != VAR_2) continue;
  FUNC_1(VAR_7->i.origin, VAR_1, VAR_8);
  if (FUNC_2(VAR_8[0]) < 40)
  {
   if (FUNC_2(VAR_8[1]) < 40)
   {
    VAR_5 = FUNC_0(VAR_8);
    if (VAR_5 < VAR_6)
    {
     VAR_6 = VAR_5;
     VAR_4 = VAR_3;
    }
   }
  }
 }
 return VAR_4;
}
