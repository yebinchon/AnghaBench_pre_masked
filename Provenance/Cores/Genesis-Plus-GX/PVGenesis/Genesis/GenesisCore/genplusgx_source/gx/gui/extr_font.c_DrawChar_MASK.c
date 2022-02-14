
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_5__ {int cell_width; int cell_height; } ;
struct TYPE_4__ {int b; int g; int r; } ;
typedef int GXTexObj ;
typedef TYPE_1__ GXColor ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int *,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (double,double) ;
 int VAR_5 ;
 int FUNC_10 (unsigned char,int ,int ,int) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static void FUNC_12(unsigned char VAR_8, int VAR_9, int VAR_10, int VAR_11, GXColor VAR_12)
{

  GXTexObj VAR_13;
  FUNC_5(&VAR_13, VAR_7, VAR_6->cell_width, VAR_6->cell_height, VAR_4, VAR_0, VAR_0, VAR_1);
  FUNC_7(&VAR_13, VAR_3);


  FUNC_11(VAR_7,0,VAR_6->cell_width * VAR_6->cell_height / 2);
  FUNC_10(VAR_8,VAR_7,0,VAR_6->cell_width/2);
  FUNC_0(VAR_7, VAR_6->cell_width * VAR_6->cell_height / 2);
  FUNC_6();


  s32 VAR_14 = (VAR_6->cell_width * VAR_11) / VAR_6->cell_height;


  FUNC_1(VAR_2, VAR_5, 4);
  FUNC_8(VAR_9, VAR_10 - VAR_11);
  FUNC_2(VAR_12.r, VAR_12.g, VAR_12.b, 0xff);
  FUNC_9(0.0, 0.0);
  FUNC_8(VAR_9 + VAR_14, VAR_10 - VAR_11);
  FUNC_2(VAR_12.r, VAR_12.g, VAR_12.b, 0xff);
  FUNC_9(1.0, 0.0);
  FUNC_8(VAR_9 + VAR_14, VAR_10);
  FUNC_2(VAR_12.r, VAR_12.g, VAR_12.b, 0xff);
  FUNC_9(1.0, 1.0);
  FUNC_8(VAR_9, VAR_10);
  FUNC_2(VAR_12.r, VAR_12.g, VAR_12.b, 0xff);
  FUNC_9(0.0, 1.0);
  FUNC_4();
  FUNC_3();
}
