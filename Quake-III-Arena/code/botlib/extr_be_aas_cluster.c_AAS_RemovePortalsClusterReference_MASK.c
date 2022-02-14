
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numportals; TYPE_1__* portals; } ;
struct TYPE_3__ {int frontcluster; int backcluster; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_0.numportals; VAR_2++)
 {
  if (VAR_0.portals[VAR_2].frontcluster == VAR_1)
  {
   VAR_0.portals[VAR_2].frontcluster = 0;
  }
  if (VAR_0.portals[VAR_2].backcluster == VAR_1)
  {
   VAR_0.portals[VAR_2].backcluster = 0;
  }
 }
}
