
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int width; int height; int data; } ;
typedef TYPE_2__ gx_texture ;
struct TYPE_8__ {int x; int w; int y; int h; } ;
struct TYPE_12__ {TYPE_1__ viewport; } ;
struct TYPE_11__ {int aspect; int bilinear; } ;
struct TYPE_10__ {int fbWidth; int viWidth; int efbHeight; int viHeight; } ;
typedef int GXTexObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ,double,double,double,int ,int ,int ) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (double,double) ;
 int VAR_13 ;
 TYPE_7__ VAR_14 ;
 TYPE_6__ VAR_15 ;
 int FUNC_9 (int) ;
 TYPE_3__* VAR_16 ;
 int* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_10(gx_texture *VAR_21, gx_texture *VAR_22)
{

  int VAR_23 = (VAR_21->width * VAR_16->fbWidth) / (VAR_16->viWidth);
  int VAR_24 = (VAR_21->height * VAR_16->efbHeight) / (VAR_16->viHeight);


  if (VAR_15.aspect & 2) VAR_23 = (VAR_23 * 3) / 4;


  int VAR_25 = VAR_17[3] - VAR_17[9];
  int VAR_26 = VAR_17[4] - VAR_17[10];


  int VAR_27 = ((VAR_14.viewport.x * VAR_25) / VAR_20) + VAR_17[9] + 8;
  int VAR_28 = (((VAR_14.viewport.x + VAR_14.viewport.w) * VAR_25) / VAR_20) + VAR_17[9] - 8 - VAR_23;
  int VAR_29 = (((VAR_14.viewport.y + VAR_14.viewport.h - 4) * VAR_26) / VAR_19) + VAR_17[10] - VAR_24;


  FUNC_9(1);


  GXTexObj VAR_30;
  FUNC_3(&VAR_30, VAR_21->data, VAR_21->width, VAR_21->height, VAR_11, VAR_2, VAR_2, VAR_3);
  FUNC_4(&VAR_30,VAR_4,VAR_5,0.0,10.0,0.0,VAR_3,VAR_12,VAR_1);
  FUNC_6(&VAR_30, VAR_9);
  FUNC_5();


  FUNC_0(VAR_8, VAR_13, 4);
  FUNC_7(VAR_27,VAR_29+VAR_24);
  FUNC_1(0xff,0xff,0xff,0xff);
  FUNC_8(0.0, 1.0);
  FUNC_7(VAR_27+VAR_23,VAR_29+VAR_24);
  FUNC_1(0xff,0xff,0xff,0xff);
  FUNC_8(1.0, 1.0);
  FUNC_7(VAR_27+VAR_23,VAR_29);
  FUNC_1(0xff,0xff,0xff,0xff);
  FUNC_8(1.0, 0.0);
  FUNC_7(VAR_27,VAR_29);
  FUNC_1(0xff,0xff,0xff,0xff);
  FUNC_8(0.0, 0.0);
  FUNC_2();


  FUNC_3(&VAR_30, VAR_22->data, VAR_22->width, VAR_22->height, VAR_11, VAR_2, VAR_2, VAR_3);
  FUNC_4(&VAR_30,VAR_4,VAR_5,0.0,10.0,0.0,VAR_3,VAR_12,VAR_1);
  FUNC_6(&VAR_30, VAR_9);
  FUNC_5();


  FUNC_0(VAR_8, VAR_13, 4);
  FUNC_7(VAR_28,VAR_29+VAR_24);
  FUNC_1(0xff,0xff,0xff,0xff);
  FUNC_8(0.0, 1.0);
  FUNC_7(VAR_28+VAR_23,VAR_29+VAR_24);
  FUNC_1(0xff,0xff,0xff,0xff);
  FUNC_8(1.0, 1.0);
  FUNC_7(VAR_28+VAR_23,VAR_29);
  FUNC_1(0xff,0xff,0xff,0xff);
  FUNC_8(1.0, 0.0);
  FUNC_7(VAR_28,VAR_29);
  FUNC_1(0xff,0xff,0xff,0xff);
  FUNC_8(0.0, 0.0);
  FUNC_2();


  FUNC_9(0);


  GXTexObj VAR_31;
  FUNC_3(&VAR_31, VAR_18, VAR_20, VAR_19, VAR_10, VAR_2, VAR_2, VAR_3);
  if (!VAR_15.bilinear)
  {
    FUNC_4(&VAR_31,VAR_6,VAR_7,0.0,10.0,0.0,VAR_3,VAR_3,VAR_0);
  }
  FUNC_6(&VAR_31, VAR_9);
  FUNC_5();
}
