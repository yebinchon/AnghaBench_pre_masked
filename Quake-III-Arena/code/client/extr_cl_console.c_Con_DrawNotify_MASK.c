
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pm_type; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_16__ {TYPE_2__ snap; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int realtime; int keyCatchers; } ;
struct TYPE_13__ {int current; int* times; short* text; int totallines; int linewidth; scalar_t__ xadjust; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int (* SetColor ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,int,char*,float) ;
 int FUNC_2 (scalar_t__,int,short) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_8__ VAR_12 ;
 TYPE_7__* VAR_13 ;
 TYPE_6__ VAR_14 ;
 TYPE_5__ VAR_15 ;
 TYPE_4__* VAR_16 ;
 int ** VAR_17 ;
 int VAR_18 ;
 TYPE_3__ VAR_19 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6 (void)
{
 int VAR_20, VAR_21;
 short *VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_26 = 7;
 VAR_19.SetColor( VAR_17[VAR_26] );

 VAR_21 = 0;
 for (VAR_23= VAR_15.current-VAR_5+1 ; VAR_23<=VAR_15.current ; VAR_23++)
 {
  if (VAR_23 < 0)
   continue;
  VAR_24 = VAR_15.times[VAR_23 % VAR_5];
  if (VAR_24 == 0)
   continue;
  VAR_24 = VAR_14.realtime - VAR_24;
  if (VAR_24 > VAR_16->value*1000)
   continue;
  VAR_22 = VAR_15.text + (VAR_23 % VAR_15.totallines)*VAR_15.linewidth;

  if (VAR_12.snap.ps.pm_type != VAR_6 && VAR_14.keyCatchers & (VAR_4 | VAR_2) ) {
   continue;
  }

  for (VAR_20 = 0 ; VAR_20 < VAR_15.linewidth ; VAR_20++) {
   if ( ( VAR_22[VAR_20] & 0xff ) == ' ' ) {
    continue;
   }
   if ( ( (VAR_22[VAR_20]>>8)&7 ) != VAR_26 ) {
    VAR_26 = (VAR_22[VAR_20]>>8)&7;
    VAR_19.SetColor( VAR_17[VAR_26] );
   }
   FUNC_2( VAR_13->integer + VAR_15.xadjust + (VAR_20+1)*VAR_9, VAR_21, VAR_22[VAR_20] & 0xff );
  }

  VAR_21 += VAR_8;
 }

 VAR_19.SetColor( ((void*)0) );

 if (VAR_14.keyCatchers & (VAR_4 | VAR_2) ) {
  return;
 }


 if ( VAR_14.keyCatchers & VAR_3 )
 {
  if (VAR_11)
  {
   FUNC_1 (8, VAR_21, "say_team:", 1.0f );
   VAR_25 = 11;
  }
  else
  {
   FUNC_1 (8, VAR_21, "say:", 1.0f );
   VAR_25 = 5;
  }

  FUNC_0( &VAR_10, VAR_25 * VAR_1, VAR_21,
   VAR_7 - ( VAR_25 + 1 ) * VAR_1, VAR_18 );

  VAR_21 += VAR_0;
 }

}
