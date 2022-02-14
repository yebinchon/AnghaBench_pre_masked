
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int height; int width; scalar_t__ data; } ;
typedef TYPE_1__ gx_texture ;
struct TYPE_5__ {int fbWidth; int efbHeight; } ;
typedef int GXTexObj ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ,double,double,double,int ,int ,int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (double,double) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;

void FUNC_10(gx_texture *VAR_11, s32 VAR_12, s32 VAR_13, s32 VAR_14, s32 VAR_15, u8 VAR_16)
{
  if (!VAR_11) return;
  if (VAR_11->data)
  {

    GXTexObj VAR_17;
    FUNC_4(&VAR_17, VAR_11->data, VAR_11->width, VAR_11->height, VAR_7, VAR_1, VAR_1, VAR_2);
    FUNC_5(&VAR_17,VAR_3,VAR_4,0.0,10.0,0.0,VAR_2,VAR_8,VAR_0);
    FUNC_7(&VAR_17, VAR_6);
    FUNC_6();


    VAR_12 -= (VAR_10->fbWidth/2);
    VAR_13 -= (VAR_10->efbHeight/2);


    FUNC_0(VAR_5, VAR_9, 4);
    FUNC_8(VAR_12,VAR_13+VAR_15);
    FUNC_1(0xff,0xff,0xff,VAR_16);
    FUNC_9(0.0, 1.0);
    FUNC_8(VAR_12+VAR_14,VAR_13+VAR_15);
    FUNC_1(0xff,0xff,0xff,VAR_16);
    FUNC_9(1.0, 1.0);
    FUNC_8(VAR_12+VAR_14,VAR_13);
    FUNC_1(0xff,0xff,0xff,VAR_16);
    FUNC_9(1.0, 0.0);
    FUNC_8(VAR_12,VAR_13);
    FUNC_1(0xff,0xff,0xff,VAR_16);
    FUNC_9(0.0, 0.0);
    FUNC_3();
    FUNC_2();
  }
}
