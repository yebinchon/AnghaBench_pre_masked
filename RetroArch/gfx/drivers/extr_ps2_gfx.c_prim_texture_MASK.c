
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct retro_hw_ps2_insets {float left; float right; float top; float bottom; } ;
struct TYPE_8__ {float Width; float Height; } ;
struct TYPE_7__ {float Width; float Height; } ;
typedef TYPE_1__ GSTEXTURE ;
typedef TYPE_2__ GSGLOBAL ;


 int VAR_0 ;
 float FUNC_0 (float,float) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,float,float,float,float,float,float,float,float,int,int ) ;

__attribute__((used)) static void FUNC_2(GSGLOBAL *VAR_1, GSTEXTURE *VAR_2, int VAR_3, bool VAR_4, struct retro_hw_ps2_insets VAR_5)
{
      float VAR_6, VAR_7, VAR_8, VAR_9;
      float VAR_10 = VAR_2->Width - VAR_5.left - VAR_5.right;
      float VAR_11 = VAR_2->Height - VAR_5.top - VAR_5.bottom;
   if (VAR_4) {
      float VAR_12 = (float)VAR_1->Width / (float)VAR_10;
      float VAR_13 = (float)VAR_1->Height / (float)VAR_11;
      float VAR_14 = FUNC_0(VAR_12, VAR_13);
      float VAR_15 = VAR_10 * VAR_14;
      float VAR_16 = VAR_11 * VAR_14;

      VAR_6 = (VAR_1->Width - VAR_15) / 2.0f;
      VAR_7 = (VAR_1->Height - VAR_16) / 2.0f;
      VAR_8 = VAR_15 + VAR_6;
      VAR_9 = VAR_16 + VAR_7;

   } else {
      VAR_6 = 0.0f;
      VAR_7 = 0.0f;
      VAR_8 = VAR_1->Width;
      VAR_9 = VAR_1->Height;
   }

   FUNC_1( VAR_1, VAR_2,
                              VAR_6,
                              VAR_7,
                              VAR_5.left,
                              VAR_5.top,
                              VAR_8,
                              VAR_9,
                              VAR_2->Width - VAR_5.right,
                              VAR_2->Height - VAR_5.bottom,
                              VAR_3,
                              VAR_0);
}
