
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_16__ {int id; } ;
typedef TYPE_11__ menucommon_s ;
struct TYPE_27__ {int curvalue; } ;
struct TYPE_26__ {int curvalue; } ;
struct TYPE_25__ {int curvalue; } ;
struct TYPE_24__ {int curvalue; } ;
struct TYPE_23__ {int curvalue; } ;
struct TYPE_22__ {int curvalue; } ;
struct TYPE_21__ {int curvalue; } ;
struct TYPE_20__ {size_t curvalue; } ;
struct TYPE_19__ {int curvalue; } ;
struct TYPE_15__ {int curvalue; } ;
struct TYPE_18__ {TYPE_10__ fs; TYPE_9__ filter; TYPE_8__ geometry; TYPE_7__ texturebits; TYPE_6__ colordepth; TYPE_5__ lighting; TYPE_4__ tq; TYPE_3__ mode; TYPE_2__ list; TYPE_1__ driver; } ;
struct TYPE_17__ {int mode; int fullscreen; int filter; int geometry; int texturebits; int colordepth; int lighting; int tq; } ;
typedef TYPE_12__ InitialVideoOptions_s ;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_14__ VAR_1 ;
 TYPE_12__* VAR_2 ;

__attribute__((used)) static void FUNC_5( void* VAR_3, int VAR_4 ) {
 InitialVideoOptions_s *VAR_5;

 if( VAR_4 != VAR_0 ) {
   return;
 }

 switch( ((menucommon_s*)VAR_3)->id ) {
 case 130:

  if ( VAR_1.driver.curvalue == 1 )
  {
   if ( VAR_1.mode.curvalue < 2 )
    VAR_1.mode.curvalue = 2;
   else if ( VAR_1.mode.curvalue > 6 )
    VAR_1.mode.curvalue = 6;
  }
  break;

 case 131:
  VAR_5 = &VAR_2[VAR_1.list.curvalue];

  VAR_1.mode.curvalue = VAR_5->mode;
  VAR_1.tq.curvalue = VAR_5->tq;
  VAR_1.lighting.curvalue = VAR_5->lighting;
  VAR_1.colordepth.curvalue = VAR_5->colordepth;
  VAR_1.texturebits.curvalue = VAR_5->texturebits;
  VAR_1.geometry.curvalue = VAR_5->geometry;
  VAR_1.filter.curvalue = VAR_5->filter;
  VAR_1.fs.curvalue = VAR_5->fullscreen;
  break;

 case 133:
  FUNC_1();
  break;

 case 135:
  FUNC_3();
  break;

 case 132:
  break;

 case 134:
  FUNC_3();
  FUNC_0();
  break;

 case 128:
  FUNC_3();
  FUNC_4();
  break;

 case 129:
  FUNC_3();
  FUNC_2();
  break;
 }
}
