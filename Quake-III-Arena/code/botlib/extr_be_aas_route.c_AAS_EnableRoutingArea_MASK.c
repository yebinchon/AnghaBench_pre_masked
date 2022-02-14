
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numareas; TYPE_1__* areasettings; } ;
struct TYPE_5__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_4__ {int areaflags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(int VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5 <= 0 || VAR_5 >= VAR_2.numareas)
 {
  if (VAR_3)
  {
   VAR_4.Print(VAR_1, "AAS_EnableRoutingArea: areanum %d out of range\n", VAR_5);
  }
  return 0;
 }
 VAR_7 = VAR_2.areasettings[VAR_5].areaflags & VAR_0;
 if (VAR_6 < 0)
  return !VAR_7;

 if (VAR_6)
  VAR_2.areasettings[VAR_5].areaflags &= ~VAR_0;
 else
  VAR_2.areasettings[VAR_5].areaflags |= VAR_0;

 if ( (VAR_7 & VAR_0) != (VAR_2.areasettings[VAR_5].areaflags & VAR_0) )
 {

  FUNC_0( VAR_5 );
 }
 return !VAR_7;
}
