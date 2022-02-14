
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * vec4_t ;
typedef int newColor ;
struct TYPE_8__ {float top; float xSkip; int glyph; int t2; int s2; int t; int s; int imageHeight; int imageWidth; } ;
typedef TYPE_2__ glyphInfo_t ;
struct TYPE_9__ {float glyphScale; TYPE_2__* glyphs; } ;
typedef TYPE_3__ fontInfo_t ;
struct TYPE_7__ {TYPE_3__ bigFont; TYPE_3__ smallFont; TYPE_3__ textFont; } ;
struct TYPE_12__ {TYPE_1__ Assets; } ;
struct TYPE_11__ {float value; } ;
struct TYPE_10__ {float value; } ;


 int FUNC_0 (float,float,int ,int ,float,int ,int ,int ,int ,int ) ;
 float FUNC_1 (char const*,float,int) ;
 size_t FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const*) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(float *VAR_4, float VAR_5, float VAR_6, float VAR_7, vec4_t VAR_8, const char* VAR_9, float VAR_10, int VAR_11) {
  int VAR_12, VAR_13;
 vec4_t VAR_14;
 glyphInfo_t *VAR_15;
  if (VAR_9) {


    const char *VAR_16 = VAR_9;
  float VAR_17 = *VAR_4;
  float VAR_18;
  fontInfo_t *VAR_19 = &VAR_0.Assets.textFont;
  if (VAR_7 <= VAR_2.value) {
   VAR_19 = &VAR_0.Assets.smallFont;
  } else if (VAR_7 > VAR_1.value) {
   VAR_19 = &VAR_0.Assets.bigFont;
  }
  VAR_18 = VAR_7 * VAR_19->glyphScale;
  FUNC_6( VAR_8 );
    VAR_12 = FUNC_5(VAR_9);
  if (VAR_11 > 0 && VAR_12 > VAR_11) {
   VAR_12 = VAR_11;
  }
  VAR_13 = 0;
  while (VAR_16 && *VAR_16 && VAR_13 < VAR_12) {
   VAR_15 = &VAR_19->glyphs[(int)*VAR_16];
   if ( FUNC_3( VAR_16 ) ) {
    FUNC_4( VAR_14, VAR_3[FUNC_2(*(VAR_16+1))], sizeof( VAR_14 ) );
    VAR_14[3] = VAR_8[3];
    FUNC_6( VAR_14 );
    VAR_16 += 2;
    continue;
   } else {
       float VAR_20 = VAR_18 * VAR_15->top;
    if (FUNC_1(VAR_16, VAR_18, 1) + VAR_5 > VAR_17) {
     *VAR_4 = 0;
     break;
    }
      FUNC_0(VAR_5, VAR_6 - VAR_20,
                       VAR_15->imageWidth,
                      VAR_15->imageHeight,
                     VAR_18,
                    VAR_15->s,
                   VAR_15->t,
                  VAR_15->s2,
                 VAR_15->t2,
                VAR_15->glyph);
       VAR_5 += (VAR_15->xSkip * VAR_18) + VAR_10;
    *VAR_4 = VAR_5;
    VAR_13++;
    VAR_16++;
     }
  }
   FUNC_6( ((void*)0) );
  }

}
