
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct video_clip {int x; int y; int width; int height; } ;
struct TYPE_2__ {int width; int height; int x; int swidth; int y; int sheight; } ;
struct saa7146 {TYPE_1__ win; int * dmavid2; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct saa7146 *VAR_1, struct video_clip *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 u32 *VAR_7;

 VAR_7 = VAR_1->dmavid2;
 if ((VAR_5 = VAR_1->win.width) > 1023)
  VAR_5 = 1023;
 if ((VAR_6 = VAR_1->win.height) > 640)
  VAR_6 = 639;
 if (VAR_3 > 0) {

  FUNC_1(VAR_7, 0, VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_0(VAR_7, VAR_2[VAR_4].x, VAR_2[VAR_4].y,
    VAR_2[VAR_4].width, VAR_2[VAR_4].height);
 }



 FUNC_0(VAR_7, (VAR_1->win.x + VAR_5 > VAR_1->win.swidth) ?
  (VAR_1->win.swidth - VAR_1->win.x) : VAR_5, 0, 1024, 768);
 FUNC_0(VAR_7, 0,
  (VAR_1->win.y + VAR_6 > VAR_1->win.sheight) ?
  (VAR_1->win.sheight - VAR_1->win.y) : VAR_6, 1024, 768);
 if (VAR_1->win.x < 0)
  FUNC_0(VAR_7, 0, 0, -VAR_1->win.x, 768);
 if (VAR_1->win.y < 0)
  FUNC_0(VAR_7, 0, 0, 1024, -VAR_1->win.y);
}
