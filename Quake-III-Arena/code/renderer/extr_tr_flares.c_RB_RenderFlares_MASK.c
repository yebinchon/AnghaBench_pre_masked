
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_9__ {int addedFrame; scalar_t__ frameSceneNum; scalar_t__ inPortal; scalar_t__ drawIntensity; struct TYPE_9__* next; } ;
typedef TYPE_2__ flare_t ;
struct TYPE_8__ {int frameCount; scalar_t__ frameSceneNum; scalar_t__ isPortal; scalar_t__ viewportHeight; scalar_t__ viewportY; scalar_t__ viewportWidth; scalar_t__ viewportX; } ;
struct TYPE_11__ {TYPE_1__ viewParms; } ;
struct TYPE_10__ {int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 void* VAR_8 ;

void FUNC_8 (void) {
 flare_t *VAR_9;
 flare_t **VAR_10;
 qboolean VAR_11;

 if ( !VAR_7->integer ) {
  return;
 }




 VAR_11 = VAR_4;
 VAR_10 = &VAR_6;
 while ( ( VAR_9 = *VAR_10 ) != ((void*)0) ) {

  if ( VAR_9->addedFrame < VAR_3.viewParms.frameCount - 1 ) {
   *VAR_10 = VAR_9->next;
   VAR_9->next = VAR_8;
   VAR_8 = VAR_9;
   continue;
  }


  VAR_9->drawIntensity = 0;
  if ( VAR_9->frameSceneNum == VAR_3.viewParms.frameSceneNum
   && VAR_9->inPortal == VAR_3.viewParms.isPortal ) {
   FUNC_1( VAR_9 );
   if ( VAR_9->drawIntensity ) {
    VAR_11 = VAR_5;
   } else {

    *VAR_10 = VAR_9->next;
    VAR_9->next = VAR_8;
    VAR_8 = VAR_9;
    continue;
   }
  }

  VAR_10 = &VAR_9->next;
 }

 if ( !VAR_11 ) {
  return;
 }

 if ( VAR_3.viewParms.isPortal ) {
  FUNC_2 (VAR_0);
 }

 FUNC_7();
    FUNC_3();
 FUNC_4( VAR_2 );
 FUNC_7();
    FUNC_3();
 FUNC_5( VAR_3.viewParms.viewportX, VAR_3.viewParms.viewportX + VAR_3.viewParms.viewportWidth,
     VAR_3.viewParms.viewportY, VAR_3.viewParms.viewportY + VAR_3.viewParms.viewportHeight,
     -99999, 99999 );

 for ( VAR_9 = VAR_6 ; VAR_9 ; VAR_9 = VAR_9->next ) {
  if ( VAR_9->frameSceneNum == VAR_3.viewParms.frameSceneNum
   && VAR_9->inPortal == VAR_3.viewParms.isPortal
   && VAR_9->drawIntensity ) {
   FUNC_0( VAR_9 );
  }
 }

 FUNC_6();
 FUNC_4( VAR_1 );
 FUNC_6();
}
