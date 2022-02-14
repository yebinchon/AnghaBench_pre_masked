
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_6__ {int width; int height; int data; int format; } ;
typedef TYPE_2__ gx_texture ;
struct TYPE_5__ {int w; int x; int h; int y; } ;
struct TYPE_7__ {TYPE_1__ viewport; } ;
typedef int GXTexObj ;
typedef int GXColor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int,int) ;
 int VAR_3 ;
 int FUNC_12 (int,int,int ,int ) ;
 int FUNC_13 (int ,int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (double,double) ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_15 (int ,int ,int,int,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_16(gx_texture *VAR_14)
{

  GXTexObj VAR_15;
  FUNC_7(&VAR_15, VAR_11, VAR_13, VAR_12, VAR_5, VAR_1, VAR_1, VAR_2);
  FUNC_9(&VAR_15, VAR_4);
  FUNC_8();


  s32 VAR_16 = ((VAR_9.viewport.w + 2*VAR_9.viewport.x) * 640) / VAR_9.viewport.w;
  s32 VAR_17 = (VAR_9.viewport.h + 2*VAR_9.viewport.y) * 2;
  s32 VAR_18 = -VAR_16/2;
  s32 VAR_19 = -(240+ 2*VAR_9.viewport.y);


  if ((VAR_16 < 640) || (VAR_17 < 480))
  {
    FUNC_15(0, 0, 640, 480, 255, (GXColor)VAR_0);
  }


  FUNC_1(VAR_3, VAR_8, 4);
  FUNC_11(VAR_18,VAR_19+VAR_17);
  FUNC_2(0xff,0xff,0xff,0xff);
  FUNC_14(0.0, 1.0);
  FUNC_11(VAR_18+VAR_16,VAR_19+VAR_17);
  FUNC_2(0xff,0xff,0xff,0xff);
  FUNC_14(1.0, 1.0);
  FUNC_11(VAR_18+VAR_16,VAR_19);
  FUNC_2(0xff,0xff,0xff,0xff);
  FUNC_14(1.0, 0.0);
  FUNC_11(VAR_18,VAR_19);
  FUNC_2(0xff,0xff,0xff,0xff);
  FUNC_14(0.0, 0.0);
  FUNC_5();


  VAR_14->format = VAR_6;
  VAR_14->width = 320;
  VAR_14->height = VAR_9.viewport.h;
  VAR_14->data = VAR_10;
  FUNC_13(0, 0, VAR_14->width * 2, VAR_14->height * 2);
  FUNC_12(VAR_14->width, VAR_14->height, VAR_14->format, VAR_7);
  FUNC_4();
  FUNC_3(VAR_14->data, VAR_7);
  FUNC_6();




  FUNC_10();
  FUNC_9(&VAR_15, VAR_4);
  FUNC_8();
  FUNC_6();
  FUNC_0(VAR_14->data, VAR_14->width * VAR_14->height * 4);
}
