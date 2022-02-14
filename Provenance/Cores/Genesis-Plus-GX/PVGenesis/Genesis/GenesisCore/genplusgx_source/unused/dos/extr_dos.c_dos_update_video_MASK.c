
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int x; int h; int y; scalar_t__ changed; } ;
struct TYPE_6__ {scalar_t__ remap; TYPE_1__ viewport; } ;
struct TYPE_5__ {scalar_t__ scanlines; scalar_t__ vsync; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,int,int,int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,int,char*,int ) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int ,int ,int,int,int,int,int,int) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
  int VAR_8 = (VAR_2.viewport.w + 2 * VAR_2.viewport.x);
  int VAR_9 = (VAR_2.viewport.h + 2 * VAR_2.viewport.y) << (VAR_5 ? 1:0);
  int VAR_10 = (VAR_1 - VAR_8) / 2;
  int VAR_11 = (VAR_0 / (VAR_6.scanlines ? 4 : 2)) - (VAR_9 / 2);


  if(VAR_6.vsync) FUNC_6();

  if(VAR_2.viewport.changed)
  {
    VAR_2.viewport.changed = 0;
    if(VAR_2.remap)
    {
      FUNC_1(VAR_7);
    }
    else
    {
      FUNC_2(VAR_7, 0xFF);
    }
  }
  FUNC_4(2, 2, "%d", VAR_3);

  if(VAR_6.scanlines)
  {
    int VAR_12;
    for(VAR_12 = 0; VAR_12 < VAR_9; VAR_12 += 1)
    {
      FUNC_0(VAR_4, VAR_7, 0x0, VAR_12, VAR_10, (VAR_11 + VAR_12) << 1, VAR_8, 1);
    }
  }
  else
  {
    FUNC_5(VAR_4, VAR_7, 0, 0, VAR_8, VAR_9, (VAR_1-352)/2, (VAR_0-240)/2, 352,240 << (VAR_5 ? 1:0));
  }
}
