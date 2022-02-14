
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int xshift; int yshift; scalar_t__ render; int ntsc; int bilinear; } ;
struct TYPE_3__ {int fbWidth; int viWidth; int viXOrigin; int efbHeight; int viHeight; } ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int*,int*) ;
 TYPE_1__* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_3(u32 VAR_3)
{
  int VAR_4 = 0;
  int VAR_5 = 0;
  int VAR_6 = 0;


  FUNC_2(&VAR_4, &VAR_5);


  VAR_1->fbWidth = 640;


  if (!VAR_0.bilinear && !VAR_0.ntsc)
  {
    if ((VAR_3 <= 320) && (VAR_3 <= VAR_4))
      VAR_1->fbWidth = VAR_3 * 2;
    else if (VAR_3 <= 640)
      VAR_1->fbWidth = VAR_3;
  }


  if ((VAR_4 * 2) > VAR_1->fbWidth)
  {

    if (VAR_4 > 360)
    {

      VAR_6 = ((VAR_4 - 360) * VAR_1->fbWidth) / VAR_1->viWidth;


      VAR_4 = 360;
    }


    VAR_1->viWidth = VAR_4 * 2;
    VAR_1->viXOrigin = (720 - (VAR_4 * 2)) / 2;


    VAR_4 = (VAR_1->fbWidth / 2);


    if (VAR_6)
    {

      if (!VAR_0.bilinear && !VAR_0.ntsc)
        VAR_1->fbWidth -= (VAR_6 * 2);


      else
        VAR_4 += VAR_6;
    }
  }
  else
  {

    VAR_1->viWidth = VAR_1->fbWidth;
    VAR_1->viXOrigin = (720 - VAR_1->fbWidth) / 2;
  }


  int VAR_7 = (VAR_0.xshift * VAR_1->fbWidth) / VAR_1->viWidth;
  int VAR_8 = (VAR_0.yshift * VAR_1->efbHeight) / VAR_1->viHeight;


  if (VAR_0.render)
  {
    VAR_5 = VAR_5 * 2;
  }


  VAR_2[6] = VAR_2[3] = VAR_7 + VAR_4;
  VAR_2[0] = VAR_2[9] = VAR_7 - VAR_4;
  VAR_2[4] = VAR_2[1] = VAR_8 + VAR_5;
  VAR_2[7] = VAR_2[10] = VAR_8 - VAR_5;
  FUNC_0(VAR_2, 32);
  FUNC_1();
}
