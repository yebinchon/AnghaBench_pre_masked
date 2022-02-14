
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_4__ {int xshift; int yshift; } ;
struct TYPE_3__ {int fbWidth; int viWidth; int efbHeight; int viHeight; } ;
typedef int GXTexObj ;
typedef int GXColor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (double,double) ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_9 (int ,int ,int,int,int,int ) ;
 int FUNC_10 (int*,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;

void FUNC_11(u8 VAR_13)
{
  if (!VAR_8) return;


  GXTexObj VAR_14;
  FUNC_4(&VAR_14, VAR_9, VAR_12, VAR_10, VAR_5, VAR_1, VAR_1, VAR_2);
  FUNC_6(&VAR_14, VAR_4);
  FUNC_5();


  int VAR_15,VAR_16;
  FUNC_10(&VAR_15, &VAR_16);


  VAR_15 = (VAR_15 * VAR_11->fbWidth) / VAR_11->viWidth;


  int VAR_17 = (VAR_7.xshift * VAR_11->fbWidth) / VAR_11->viWidth;
  int VAR_18 = (VAR_7.yshift * VAR_11->efbHeight) / VAR_11->viHeight;


  s32 VAR_19 = VAR_17 - VAR_15;
  s32 VAR_20 = VAR_18 - (VAR_16 * 2);
  s32 VAR_21 = VAR_15 * 2;
  s32 VAR_22 = VAR_16 * 4;


  if ((VAR_21 < 640) || (VAR_22 < 480))
  {
    FUNC_9(0, 0, 640, 480, 255, (GXColor)VAR_0);
  }


  FUNC_0(VAR_3, VAR_6, 4);
  FUNC_7(VAR_19,VAR_20+VAR_22);
  FUNC_1(0xff,0xff,0xff,VAR_13);
  FUNC_8(0.0, 1.0);
  FUNC_7(VAR_19+VAR_21,VAR_20+VAR_22);
  FUNC_1(0xff,0xff,0xff,VAR_13);
  FUNC_8(1.0, 1.0);
  FUNC_7(VAR_19+VAR_21,VAR_20);
  FUNC_1(0xff,0xff,0xff,VAR_13);
  FUNC_8(1.0, 0.0);
  FUNC_7(VAR_19,VAR_20);
  FUNC_1(0xff,0xff,0xff,VAR_13);
  FUNC_8(0.0, 0.0);
  FUNC_3();
  FUNC_2();
}
