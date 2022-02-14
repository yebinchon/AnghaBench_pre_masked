
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {float height; } ;
typedef TYPE_3__ glyphInfo_t ;
struct TYPE_11__ {float glyphScale; TYPE_3__* glyphs; } ;
typedef TYPE_4__ fontInfo_t ;
struct TYPE_8__ {TYPE_4__ bigFont; TYPE_4__ smallFont; TYPE_4__ textFont; } ;
struct TYPE_9__ {TYPE_1__ Assets; } ;
struct TYPE_14__ {TYPE_2__ uiDC; } ;
struct TYPE_13__ {float value; } ;
struct TYPE_12__ {float value; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 TYPE_7__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;

int FUNC_2(const char *VAR_3, float VAR_4, int VAR_5) {
  int VAR_6, VAR_7;
 float VAR_8;
 glyphInfo_t *VAR_9;
 float VAR_10;
 const char *VAR_11 = VAR_3;
 fontInfo_t *VAR_12 = &VAR_0.uiDC.Assets.textFont;
 if (VAR_4 <= VAR_2.value) {
  VAR_12 = &VAR_0.uiDC.Assets.smallFont;
 } else if (VAR_4 >= VAR_1.value) {
  VAR_12 = &VAR_0.uiDC.Assets.bigFont;
 }
 VAR_10 = VAR_4 * VAR_12->glyphScale;
  VAR_8 = 0;
  if (VAR_3) {
    VAR_6 = FUNC_1(VAR_3);
  if (VAR_5 > 0 && VAR_6 > VAR_5) {
   VAR_6 = VAR_5;
  }
  VAR_7 = 0;
  while (VAR_11 && *VAR_11 && VAR_7 < VAR_6) {
   if ( FUNC_0(VAR_11) ) {
    VAR_11 += 2;
    continue;
   } else {
    VAR_9 = &VAR_12->glyphs[(int)*VAR_11];
       if (VAR_8 < VAR_9->height) {
        VAR_8 = VAR_9->height;
     }
    VAR_11++;
    VAR_7++;
   }
    }
  }
  return VAR_8 * VAR_10;
}
