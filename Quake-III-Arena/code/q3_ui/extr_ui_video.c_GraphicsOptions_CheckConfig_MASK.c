
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_22__ {int curvalue; } ;
struct TYPE_21__ {scalar_t__ curvalue; } ;
struct TYPE_20__ {scalar_t__ curvalue; } ;
struct TYPE_19__ {scalar_t__ curvalue; } ;
struct TYPE_18__ {scalar_t__ curvalue; } ;
struct TYPE_17__ {scalar_t__ curvalue; } ;
struct TYPE_16__ {scalar_t__ curvalue; } ;
struct TYPE_15__ {scalar_t__ curvalue; } ;
struct TYPE_14__ {scalar_t__ curvalue; } ;
struct TYPE_13__ {TYPE_9__ list; TYPE_8__ filter; TYPE_7__ geometry; TYPE_6__ lighting; TYPE_5__ tq; TYPE_4__ fs; TYPE_3__ mode; TYPE_2__ driver; TYPE_1__ colordepth; } ;
struct TYPE_12__ {scalar_t__ colordepth; scalar_t__ driver; scalar_t__ mode; scalar_t__ fullscreen; scalar_t__ tq; scalar_t__ lighting; scalar_t__ geometry; scalar_t__ filter; } ;


 int VAR_0 ;
 TYPE_11__ VAR_1 ;
 TYPE_10__* VAR_2 ;

__attribute__((used)) static void FUNC_0( void )
{
 int VAR_3;

 for ( VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
 {
  if ( VAR_2[VAR_3].colordepth != VAR_1.colordepth.curvalue )
   continue;
  if ( VAR_2[VAR_3].driver != VAR_1.driver.curvalue )
   continue;
  if ( VAR_2[VAR_3].mode != VAR_1.mode.curvalue )
   continue;
  if ( VAR_2[VAR_3].fullscreen != VAR_1.fs.curvalue )
   continue;
  if ( VAR_2[VAR_3].tq != VAR_1.tq.curvalue )
   continue;
  if ( VAR_2[VAR_3].lighting != VAR_1.lighting.curvalue )
   continue;
  if ( VAR_2[VAR_3].geometry != VAR_1.geometry.curvalue )
   continue;
  if ( VAR_2[VAR_3].filter != VAR_1.filter.curvalue )
   continue;


  VAR_1.list.curvalue = VAR_3;
  return;
 }
 VAR_1.list.curvalue = 4;
}
