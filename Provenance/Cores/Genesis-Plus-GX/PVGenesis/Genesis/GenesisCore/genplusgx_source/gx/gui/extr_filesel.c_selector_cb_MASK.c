
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int w; int h; int x; int y; TYPE_2__* texture; } ;
typedef TYPE_1__ gui_image ;
struct TYPE_7__ {char* filename; scalar_t__ flags; } ;
struct TYPE_6__ {int width; int height; } ;
typedef int GXColor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int,int,int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int,int,int) ;
 int FUNC_3 (TYPE_2__**) ;
 void* FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_11 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static void FUNC_9(void)
{
  int VAR_12;
  char VAR_13[VAR_3];
  int VAR_14 = 108;


  gui_image VAR_15;
  VAR_15.texture = FUNC_4(VAR_2,0);
  VAR_15.w = VAR_15.texture->width;
  VAR_15.h = VAR_15.texture->height;
  VAR_15.x = 26;
  VAR_15.y = (26 - VAR_15.h)/2;


  gui_image VAR_16;
  VAR_16.texture = FUNC_4(VAR_4,0);
  VAR_16.w = VAR_16.texture->width;
  VAR_16.h = VAR_16.texture->height;
  VAR_16.x = 16;
  VAR_16.y = (26 - VAR_16.h)/2;


  FUNC_1(15, 108, 358, 26, 127, (GXColor)VAR_0);
  FUNC_1(15, 134, 358, 26, 127, (GXColor)VAR_1);
  FUNC_1(15, 160, 358, 26, 127, (GXColor)VAR_0);
  FUNC_1(15, 186, 358, 26, 127, (GXColor)VAR_1);
  FUNC_1(15, 212, 358, 26, 127, (GXColor)VAR_0);
  FUNC_1(15, 238, 358, 26, 127, (GXColor)VAR_1);
  FUNC_1(15, 264, 358, 26, 127, (GXColor)VAR_0);
  FUNC_1(15, 290, 358, 26, 127, (GXColor)VAR_1);
  FUNC_1(15, 316, 358, 26, 127, (GXColor)VAR_0);
  FUNC_1(15, 342, 358, 26, 127, (GXColor)VAR_1);


  for (VAR_12 = VAR_9; (VAR_12 < (VAR_9 + 10)) && (VAR_12 < VAR_8); VAR_12++)
  {
    if (VAR_12 == VAR_10)
    {

      FUNC_2(VAR_16.texture,VAR_16.x,VAR_14+VAR_16.y,VAR_16.w,VAR_16.h,255);


      if ((VAR_11/VAR_5) >= FUNC_7(VAR_7[VAR_12].filename))
      {
        VAR_11 = 0;
      }

      if (VAR_11)
      {
        FUNC_5(VAR_13,"%s ",VAR_7[VAR_12].filename+VAR_11/VAR_5);
        FUNC_8(VAR_13, VAR_7[VAR_12].filename, VAR_11/VAR_5);
      }
      else
      {
        FUNC_6(VAR_13, VAR_7[VAR_12].filename);
      }


      if (VAR_7[VAR_12].flags)
      {

        FUNC_2(VAR_15.texture,VAR_15.x,VAR_14+VAR_15.y,VAR_15.w,VAR_15.h,255);
        if (FUNC_0(VAR_13,18,VAR_15.x+VAR_15.w+6,VAR_14+22,VAR_16.w-VAR_15.w-26,(GXColor)VAR_6))
        {

          VAR_11 ++;
        }
      }
      else
      {
        if (FUNC_0(VAR_13,18,VAR_15.x,VAR_14+22,VAR_16.w-20,(GXColor)VAR_6))
        {

          VAR_11 ++;
        }
      }
    }
    else
    {
      if (VAR_7[VAR_12].flags)
      {

        FUNC_2(VAR_15.texture,VAR_15.x,VAR_14+VAR_15.y,VAR_15.w,VAR_15.h,255);
        FUNC_0(VAR_7[VAR_12].filename,18,VAR_15.x+VAR_15.w+6,VAR_14+22,VAR_16.w-VAR_15.w-26,(GXColor)VAR_6);
      }
      else
      {
        FUNC_0(VAR_7[VAR_12].filename,18,VAR_15.x,VAR_14+22,VAR_16.w-20,(GXColor)VAR_6);
      }
    }

    VAR_14 += 26;
  }

  FUNC_3(&VAR_16.texture);
  FUNC_3(&VAR_15.texture);
}
