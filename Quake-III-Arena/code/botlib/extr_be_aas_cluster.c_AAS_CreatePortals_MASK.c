
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int areanum; scalar_t__ backcluster; scalar_t__ frontcluster; } ;
typedef TYPE_2__ aas_portal_t ;
struct TYPE_6__ {int numareas; size_t numportals; TYPE_2__* portals; TYPE_1__* areasettings; } ;
struct TYPE_4__ {int contents; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

void FUNC_1(void)
{
 int VAR_3;
 aas_portal_t *VAR_4;

 for (VAR_3 = 1; VAR_3 < VAR_2.numareas; VAR_3++)
 {

  if (VAR_2.areasettings[VAR_3].contents & VAR_1)
  {
   if (VAR_2.numportals >= VAR_0)
   {
    FUNC_0("AAS_MAX_PORTALS");
    return;
   }
   VAR_4 = &VAR_2.portals[VAR_2.numportals];
   VAR_4->areanum = VAR_3;
   VAR_4->frontcluster = 0;
   VAR_4->backcluster = 0;
   VAR_2.numportals++;
  }
 }
}
