
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {scalar_t__ type; int modelindex; int origin; } ;
struct TYPE_5__ {TYPE_1__ i; } ;
typedef TYPE_2__ aas_entity_t ;
struct TYPE_6__ {int maxentities; TYPE_2__* entities; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(int VAR_4, vec3_t VAR_5)
{
 int VAR_6;
 aas_entity_t *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1.maxentities; VAR_6++)
 {
  VAR_7 = &VAR_1.entities[VAR_6];
  if (VAR_7->i.type == VAR_0)
  {
   if (VAR_7->i.modelindex == VAR_4)
   {
    FUNC_0(VAR_7->i.origin, VAR_5);
    return VAR_3;
   }
  }
 }
 return VAR_2;
}
