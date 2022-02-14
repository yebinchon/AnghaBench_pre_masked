
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* glyphs; } ;
struct TYPE_8__ {TYPE_2__ textFont; } ;
struct TYPE_9__ {TYPE_3__ Assets; } ;
struct TYPE_10__ {TYPE_4__ uiDC; } ;
struct TYPE_6__ {int glyph; } ;


 int FUNC_0 (char*,...) ;
 TYPE_5__ VAR_0 ;

void FUNC_1() {
  int VAR_1;
  FUNC_0("Font Info\n");
  FUNC_0("=========\n");
  for ( VAR_1 = 32; VAR_1 < 96; VAR_1++) {
    FUNC_0("Glyph handle %i: %i\n", VAR_1, VAR_0.uiDC.Assets.textFont.glyphs[VAR_1].glyph);
  }
}
