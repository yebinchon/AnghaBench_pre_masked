
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** crosshairShader; void* sliderThumb; void* sliderBar; void* scrollBarThumb; void* scrollBarArrowRight; void* scrollBarArrowLeft; void* scrollBarArrowUp; void* scrollBarArrowDown; void* scrollBar; void** fxPic; void* fxBasePic; void* gradientBar; } ;
struct TYPE_5__ {TYPE_1__ Assets; } ;
struct TYPE_6__ {int newHighScoreSound; TYPE_2__ uiDC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_3__ VAR_19 ;
 int FUNC_2 (char*,char) ;

void FUNC_3() {
 int VAR_20;




 VAR_19.uiDC.Assets.gradientBar = FUNC_0( VAR_8 );
 VAR_19.uiDC.Assets.fxBasePic = FUNC_0( VAR_0 );
 VAR_19.uiDC.Assets.fxPic[0] = FUNC_0( VAR_4 );
 VAR_19.uiDC.Assets.fxPic[1] = FUNC_0( VAR_7 );
 VAR_19.uiDC.Assets.fxPic[2] = FUNC_0( VAR_3 );
 VAR_19.uiDC.Assets.fxPic[3] = FUNC_0( VAR_5 );
 VAR_19.uiDC.Assets.fxPic[4] = FUNC_0( VAR_1 );
 VAR_19.uiDC.Assets.fxPic[5] = FUNC_0( VAR_2 );
 VAR_19.uiDC.Assets.fxPic[6] = FUNC_0( VAR_6 );
 VAR_19.uiDC.Assets.scrollBar = FUNC_0( VAR_9 );
 VAR_19.uiDC.Assets.scrollBarArrowDown = FUNC_0( VAR_10 );
 VAR_19.uiDC.Assets.scrollBarArrowUp = FUNC_0( VAR_13 );
 VAR_19.uiDC.Assets.scrollBarArrowLeft = FUNC_0( VAR_11 );
 VAR_19.uiDC.Assets.scrollBarArrowRight = FUNC_0( VAR_12 );
 VAR_19.uiDC.Assets.scrollBarThumb = FUNC_0( VAR_14 );
 VAR_19.uiDC.Assets.sliderBar = FUNC_0( VAR_15 );
 VAR_19.uiDC.Assets.sliderThumb = FUNC_0( VAR_16 );

 for( VAR_20 = 0; VAR_20 < VAR_17; VAR_20++ ) {
  VAR_19.uiDC.Assets.crosshairShader[VAR_20] = FUNC_0( FUNC_2("gfx/2d/crosshair%c", 'a' + VAR_20 ) );
 }

 VAR_19.newHighScoreSound = FUNC_1("sound/feedback/voc_newhighscore.wav", VAR_18);
}
