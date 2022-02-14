
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ s32 ;
struct TYPE_5__ {int fbWidth; int efbHeight; } ;
struct TYPE_4__ {int b; int g; int r; } ;
typedef TYPE_1__ GXColor ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;

void FUNC_8(s32 VAR_9, s32 VAR_10, s32 VAR_11, s32 VAR_12, u8 VAR_13, GXColor VAR_14)
{

  FUNC_6 (VAR_5, VAR_3);
  FUNC_7 (VAR_6, VAR_2);
  FUNC_4();


  VAR_9 -= (VAR_8->fbWidth/2);
  VAR_10 -= (VAR_8->efbHeight/2);


  FUNC_0(VAR_4, VAR_7, 4);
  FUNC_5(VAR_9,VAR_10+VAR_12);
  FUNC_1(VAR_14.r,VAR_14.g,VAR_14.b,VAR_13);
  FUNC_5(VAR_9+VAR_11,VAR_10+VAR_12);
  FUNC_1(VAR_14.r,VAR_14.g,VAR_14.b,VAR_13);
  FUNC_5(VAR_9+VAR_11,VAR_10);
  FUNC_1(VAR_14.r,VAR_14.g,VAR_14.b,VAR_13);
  FUNC_5(VAR_9,VAR_10);
  FUNC_1(VAR_14.r,VAR_14.g,VAR_14.b,VAR_13);
  FUNC_3();
  FUNC_2();


  FUNC_7(VAR_6, VAR_0);
  FUNC_6 (VAR_5, VAR_1);
  FUNC_4();
}
