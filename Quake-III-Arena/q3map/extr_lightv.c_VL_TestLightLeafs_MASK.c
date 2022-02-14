
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int * origin; } ;
typedef TYPE_1__ vlight_t ;
struct TYPE_6__ {int cluster; } ;
typedef TYPE_2__ dleaf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 TYPE_1__** VAR_4 ;

void FUNC_2(void)
{
 int VAR_5, VAR_6;
 vlight_t *VAR_7;
 dleaf_t *VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  VAR_7 = VAR_4[VAR_6];
  if (VAR_7->type != VAR_0 &&
   VAR_7->type != VAR_1)
   continue;
  VAR_5 = FUNC_0(VAR_7->origin);
  VAR_8 = &VAR_2[VAR_5];
  if (VAR_8->cluster == -1)
   if (VAR_7->type == VAR_0)
    FUNC_1("light in solid at %1.1f %1.1f %1.1f\n", VAR_7->origin[0], VAR_7->origin[1], VAR_7->origin[2]);
   else if (VAR_7->type == VAR_1)
    FUNC_1("spot light in solid at %1.1f %1.1f %1.1f\n", VAR_7->origin[0], VAR_7->origin[1], VAR_7->origin[2]);
 }
}
