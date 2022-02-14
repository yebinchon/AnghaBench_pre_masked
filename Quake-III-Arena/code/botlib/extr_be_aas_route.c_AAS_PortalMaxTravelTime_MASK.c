
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* first; } ;
typedef TYPE_1__ aas_reversedreachability_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ aas_reversedlink_t ;
struct TYPE_8__ {size_t areanum; } ;
typedef TYPE_3__ aas_portal_t ;
struct TYPE_9__ {int numreachableareas; } ;
typedef TYPE_4__ aas_areasettings_t ;
struct TYPE_10__ {int*** areatraveltimes; TYPE_4__* areasettings; TYPE_1__* reversedreachability; TYPE_3__* portals; } ;


 TYPE_5__ VAR_0 ;

int FUNC_0(int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 aas_portal_t *VAR_6;
 aas_reversedreachability_t *VAR_7;
 aas_reversedlink_t *VAR_8;
 aas_areasettings_t *VAR_9;

 VAR_6 = &VAR_0.portals[VAR_1];

 VAR_7 = &VAR_0.reversedreachability[VAR_6->areanum];

 VAR_9 = &VAR_0.areasettings[VAR_6->areanum];

 VAR_5 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_9->numreachableareas; VAR_2++)
 {
  for (VAR_3 = 0, VAR_8 = VAR_7->first; VAR_8; VAR_8 = VAR_8->next, VAR_3++)
  {
   VAR_4 = VAR_0.areatraveltimes[VAR_6->areanum][VAR_2][VAR_3];
   if (VAR_4 > VAR_5)
   {
    VAR_5 = VAR_4;
   }
  }
 }
 return VAR_5;
}
