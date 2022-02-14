
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nummightsee; int portalvis; int portalflood; int leaf; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_2 (int VAR_3)
{
 vportal_t *VAR_4;

 VAR_4 = VAR_2+VAR_3;

 if (VAR_4->removed)
  return;

 FUNC_1 (VAR_4->leaf, VAR_4->portalflood, VAR_4->portalvis);


 VAR_4->nummightsee = FUNC_0 (VAR_4->portalvis, VAR_1*2);
 VAR_0 += VAR_4->nummightsee;
}
