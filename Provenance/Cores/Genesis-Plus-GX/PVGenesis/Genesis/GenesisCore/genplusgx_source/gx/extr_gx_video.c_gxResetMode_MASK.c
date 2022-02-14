
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int f32 ;
struct TYPE_3__ {int efbHeight; int xfbHeight; int fbWidth; scalar_t__ xfbMode; int viHeight; int field_rendering; int vfilter; int sample_pattern; int aa; } ;
typedef int Mtx44 ;
typedef TYPE_1__ GXRModeObj ;
typedef int GXColor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (float,float,int,int,float,float) ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (int ,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_13(GXRModeObj *VAR_6, int VAR_7)
{
  Mtx44 VAR_8;
  f32 VAR_9 = FUNC_1(VAR_6->efbHeight, VAR_6->xfbHeight);
  u16 VAR_10 = FUNC_7(VAR_9);
  u16 VAR_11 = FUNC_11(VAR_6->fbWidth);

  FUNC_3((GXColor)VAR_0,0x00ffffff);
  FUNC_10(0.0F, 0.0F, VAR_6->fbWidth, VAR_6->efbHeight, 0.0F, 1.0F);
  FUNC_9(0, 0, VAR_6->fbWidth, VAR_6->efbHeight);
  FUNC_6(0, 0, VAR_6->fbWidth, VAR_6->efbHeight);
  FUNC_5(VAR_11, VAR_10);
  FUNC_4(VAR_6->aa, VAR_6->sample_pattern, (VAR_6->xfbMode == VAR_5) ? VAR_3 : VAR_7, VAR_6->vfilter);
  FUNC_8(VAR_6->field_rendering, ((VAR_6->viHeight == 2 * VAR_6->xfbHeight) ? VAR_2 : VAR_1));
  FUNC_12(VAR_8, VAR_6->efbHeight/2, -(VAR_6->efbHeight/2), -(VAR_6->fbWidth/2), VAR_6->fbWidth/2, 100, 1000);
  FUNC_2(VAR_8, VAR_4);
  FUNC_0();
}
