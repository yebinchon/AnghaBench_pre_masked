
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_32__ {int curvalue; } ;
struct TYPE_25__ {int flags; } ;
struct TYPE_31__ {int curvalue; TYPE_2__ generic; } ;
struct TYPE_30__ {scalar_t__ curvalue; } ;
struct TYPE_29__ {scalar_t__ curvalue; } ;
struct TYPE_28__ {scalar_t__ curvalue; } ;
struct TYPE_24__ {int flags; } ;
struct TYPE_27__ {int curvalue; TYPE_1__ generic; } ;
struct TYPE_26__ {scalar_t__ curvalue; } ;
struct TYPE_20__ {int flags; } ;
struct TYPE_21__ {TYPE_13__ generic; } ;
struct TYPE_19__ {scalar_t__ curvalue; } ;
struct TYPE_18__ {scalar_t__ curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_23__ {TYPE_14__ apply; TYPE_12__ filter; TYPE_11__ geometry; TYPE_10__ texturebits; TYPE_9__ driver; TYPE_8__ colordepth; TYPE_7__ lighting; TYPE_6__ tq; TYPE_5__ allow_extensions; TYPE_4__ fs; TYPE_3__ mode; } ;
struct TYPE_22__ {scalar_t__ mode; int fullscreen; scalar_t__ extensions; scalar_t__ tq; scalar_t__ lighting; int colordepth; int driver; int texturebits; scalar_t__ geometry; scalar_t__ filter; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_16__ VAR_3 ;
 TYPE_15__ VAR_4 ;

__attribute__((used)) static void FUNC_1( void )
{
 if ( VAR_3.driver.curvalue == 1 )
 {
  VAR_3.fs.curvalue = 1;
  VAR_3.fs.generic.flags |= VAR_0;
  VAR_3.colordepth.curvalue = 1;
 }
 else
 {
  VAR_3.fs.generic.flags &= ~VAR_0;
 }

 if ( VAR_3.fs.curvalue == 0 || VAR_3.driver.curvalue == 1 )
 {
  VAR_3.colordepth.curvalue = 0;
  VAR_3.colordepth.generic.flags |= VAR_0;
 }
 else
 {
  VAR_3.colordepth.generic.flags &= ~VAR_0;
 }

 if ( VAR_3.allow_extensions.curvalue == 0 )
 {
  if ( VAR_3.texturebits.curvalue == 0 )
  {
   VAR_3.texturebits.curvalue = 1;
  }
 }

 VAR_3.apply.generic.flags |= VAR_1|VAR_2;

 if ( VAR_4.mode != VAR_3.mode.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.fullscreen != VAR_3.fs.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.extensions != VAR_3.allow_extensions.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.tq != VAR_3.tq.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.lighting != VAR_3.lighting.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.colordepth != VAR_3.colordepth.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.driver != VAR_3.driver.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.texturebits != VAR_3.texturebits.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.geometry != VAR_3.geometry.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.filter != VAR_3.filter.curvalue )
 {
  VAR_3.apply.generic.flags &= ~(VAR_1|VAR_2);
 }

 FUNC_0();
}
