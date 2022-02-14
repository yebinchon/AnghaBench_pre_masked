
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int depth; scalar_t__ remap; } ;
struct TYPE_6__ {int video_width; int video_height; int video_depth; int video_driver; scalar_t__ scanlines; } ;
struct TYPE_5__ {int r; int g; int b; } ;


 int VAR_0 ;
 char* VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,int,int,int,char*) ;
 int VAR_5 ;
 int FUNC_6 (int ,int,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(void)
{
  int VAR_6;
  int VAR_7 = VAR_4.video_width;
  int VAR_8 = VAR_4.video_height;

  if(VAR_4.scanlines) VAR_8 *= 2;
  VAR_6 = FUNC_6(VAR_4.video_driver, VAR_7, VAR_8, 0, 0);
  if(VAR_6 != 0)
  {
    FUNC_6(VAR_0, 0, 0, 0, 0);
    FUNC_5("Error setting graphics mode (%dx%d %dbpp).\nAllegro says: `%s'\n", VAR_7, VAR_8, VAR_4.video_depth, VAR_1);
    FUNC_2(1);
  }

  if(VAR_2.depth == 8)
  {
    if(VAR_2.remap)
    {
      int VAR_9;
      for(VAR_9 = 0; VAR_9 < 0x100; VAR_9 += 1)
      {
        VAR_3[VAR_9].r = ((VAR_9 >> 5) & 7) << 3;
        VAR_3[VAR_9].g = ((VAR_9 >> 2) & 7) << 3;
        VAR_3[VAR_9].b = ((VAR_9 >> 0) & 3) << 4;
      }
      FUNC_7(VAR_3);
    }
    else
    {
      FUNC_1(VAR_5, 0xFF);
      VAR_3[0xfe].r = 0xff;
      VAR_3[0xfe].g = 0xff;
      VAR_3[0xfe].b = 0xff;
      FUNC_7(VAR_3);
      FUNC_3(0x3DA);
      FUNC_4(0x3C0, 0x31);
      FUNC_4(0x3C0, 0xFF);
    }
  }
  else
  {
    FUNC_0(VAR_5);
  }
}
