
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ viewportWidth; scalar_t__ viewportHeight; int frameCount; int frameSceneNum; } ;
typedef TYPE_2__ viewParms_t ;
struct TYPE_5__ {int numDrawSurfs; scalar_t__ drawSurfs; } ;
struct TYPE_7__ {TYPE_1__ refdef; int viewCount; int frameCount; TYPE_2__ viewParms; int frameSceneNum; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int) ;
 TYPE_3__ VAR_0 ;

void FUNC_5 (viewParms_t *VAR_1) {
 int VAR_2;

 if ( VAR_1->viewportWidth <= 0 || VAR_1->viewportHeight <= 0 ) {
  return;
 }

 VAR_0.viewCount++;

 VAR_0.viewParms = *VAR_1;
 VAR_0.viewParms.frameSceneNum = VAR_0.frameSceneNum;
 VAR_0.viewParms.frameCount = VAR_0.frameCount;

 VAR_2 = VAR_0.refdef.numDrawSurfs;

 VAR_0.viewCount++;


 FUNC_2 ();

 FUNC_3 ();

 FUNC_1();

 FUNC_4( VAR_0.refdef.drawSurfs + VAR_2, VAR_0.refdef.numDrawSurfs - VAR_2 );


 FUNC_0();
}
