
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_24__ {int curvalue; } ;
struct TYPE_23__ {int curvalue; } ;
struct TYPE_22__ {int curvalue; } ;
struct TYPE_21__ {int curvalue; } ;
struct TYPE_20__ {int curvalue; } ;
struct TYPE_19__ {int curvalue; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_16__ {int curvalue; } ;
struct TYPE_13__ {int curvalue; } ;
struct TYPE_15__ {TYPE_9__ texturebits; TYPE_8__ filter; TYPE_7__ geometry; TYPE_6__ lighting; TYPE_5__ tq; TYPE_4__ allow_extensions; TYPE_3__ fs; TYPE_2__ mode; TYPE_1__ driver; TYPE_10__ colordepth; } ;
struct TYPE_14__ {int texturebits; int filter; int geometry; int lighting; int tq; int extensions; int fullscreen; int mode; int driver; int colordepth; } ;


 TYPE_12__ VAR_0 ;
 TYPE_11__ VAR_1 ;

__attribute__((used)) static void FUNC_0( void )
{
 VAR_1.colordepth = VAR_0.colordepth.curvalue;
 VAR_1.driver = VAR_0.driver.curvalue;
 VAR_1.mode = VAR_0.mode.curvalue;
 VAR_1.fullscreen = VAR_0.fs.curvalue;
 VAR_1.extensions = VAR_0.allow_extensions.curvalue;
 VAR_1.tq = VAR_0.tq.curvalue;
 VAR_1.lighting = VAR_0.lighting.curvalue;
 VAR_1.geometry = VAR_0.geometry.curvalue;
 VAR_1.filter = VAR_0.filter.curvalue;
 VAR_1.texturebits = VAR_0.texturebits.curvalue;
}
