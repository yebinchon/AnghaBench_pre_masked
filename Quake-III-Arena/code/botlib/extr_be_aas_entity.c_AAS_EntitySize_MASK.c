
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {int maxs; int mins; } ;
struct TYPE_6__ {TYPE_1__ i; } ;
typedef TYPE_2__ aas_entity_t ;
struct TYPE_8__ {int maxentities; TYPE_2__* entities; int initialized; } ;
struct TYPE_7__ {int (* Print ) (int ,char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2(int VAR_3, vec3_t VAR_4, vec3_t VAR_5)
{
 aas_entity_t *VAR_6;

 if (!VAR_1.initialized) return;

 if (VAR_3 < 0 || VAR_3 >= VAR_1.maxentities)
 {
  VAR_2.Print(VAR_0, "AAS_EntitySize: entnum %d out of range\n", VAR_3);
  return;
 }

 VAR_6 = &VAR_1.entities[VAR_3];
 FUNC_0(VAR_6->i.mins, VAR_4);
 FUNC_0(VAR_6->i.maxs, VAR_5);
}
