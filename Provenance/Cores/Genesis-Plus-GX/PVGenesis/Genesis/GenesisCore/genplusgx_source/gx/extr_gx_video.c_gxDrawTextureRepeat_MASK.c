
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {scalar_t__ height; scalar_t__ width; scalar_t__ data; } ;
typedef TYPE_1__ gx_texture ;
typedef double f32 ;
struct TYPE_5__ {int fbWidth; int efbHeight; } ;
typedef int GXTexObj ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (double,double) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

void FUNC_9(gx_texture *VAR_7, s32 VAR_8, s32 VAR_9, s32 VAR_10, s32 VAR_11, u8 VAR_12)
{
  if (!VAR_7) return;
  if (VAR_7->data)
  {

    GXTexObj VAR_13;
    FUNC_4(&VAR_13, VAR_7->data, VAR_7->width, VAR_7->height, VAR_4, VAR_2, VAR_2, VAR_0);
    FUNC_6(&VAR_13, VAR_3);
    FUNC_5();


    VAR_8 -= (VAR_6->fbWidth/2);
    VAR_9 -= (VAR_6->efbHeight/2);


    f32 VAR_14 = (f32)VAR_10 / (f32)VAR_7->width;
    f32 VAR_15 = (f32)VAR_11 / (f32)VAR_7->height;


    FUNC_0(VAR_1, VAR_5, 4);
    FUNC_7(VAR_8,VAR_9+VAR_11);
    FUNC_1(0xff,0xff,0xff,VAR_12);
    FUNC_8(0.0, VAR_15);
    FUNC_7(VAR_8+VAR_10,VAR_9+VAR_11);
    FUNC_1(0xff,0xff,0xff,VAR_12);
    FUNC_8(VAR_14, VAR_15);
    FUNC_7(VAR_8+VAR_10,VAR_9);
    FUNC_1(0xff,0xff,0xff,VAR_12);
    FUNC_8(VAR_14, 0.0);
    FUNC_7(VAR_8,VAR_9);
    FUNC_1(0xff,0xff,0xff,VAR_12);
    FUNC_8(0.0, 0.0);
    FUNC_3();
    FUNC_2();
  }
}
