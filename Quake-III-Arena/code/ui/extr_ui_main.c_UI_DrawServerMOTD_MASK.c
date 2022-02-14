
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_8__ {int x; int w; scalar_t__ h; scalar_t__ y; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_7__ {size_t motdLen; int motdWidth; int motdPaintX; int motdPaintX2; size_t motdOffset; scalar_t__ motdTime; int * motd; } ;
struct TYPE_6__ {scalar_t__ realTime; } ;
struct TYPE_9__ {TYPE_2__ serverStatus; TYPE_1__ uiDC; } ;


 int FUNC_0 (float*,int,scalar_t__,float,int ,int *,int ,size_t) ;
 int FUNC_1 (int *,float,int) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3) {
 if (VAR_0.serverStatus.motdLen) {
  float VAR_4;

  if (VAR_0.serverStatus.motdWidth == -1) {
   VAR_0.serverStatus.motdWidth = 0;
   VAR_0.serverStatus.motdPaintX = VAR_1->x + 1;
   VAR_0.serverStatus.motdPaintX2 = -1;
  }

  if (VAR_0.serverStatus.motdOffset > VAR_0.serverStatus.motdLen) {
   VAR_0.serverStatus.motdOffset = 0;
   VAR_0.serverStatus.motdPaintX = VAR_1->x + 1;
   VAR_0.serverStatus.motdPaintX2 = -1;
  }

  if (VAR_0.uiDC.realTime > VAR_0.serverStatus.motdTime) {
   VAR_0.serverStatus.motdTime = VAR_0.uiDC.realTime + 10;
   if (VAR_0.serverStatus.motdPaintX <= VAR_1->x + 2) {
    if (VAR_0.serverStatus.motdOffset < VAR_0.serverStatus.motdLen) {
     VAR_0.serverStatus.motdPaintX += FUNC_1(&VAR_0.serverStatus.motd[VAR_0.serverStatus.motdOffset], VAR_2, 1) - 1;
     VAR_0.serverStatus.motdOffset++;
    } else {
     VAR_0.serverStatus.motdOffset = 0;
     if (VAR_0.serverStatus.motdPaintX2 >= 0) {
      VAR_0.serverStatus.motdPaintX = VAR_0.serverStatus.motdPaintX2;
     } else {
      VAR_0.serverStatus.motdPaintX = VAR_1->x + VAR_1->w - 2;
     }
     VAR_0.serverStatus.motdPaintX2 = -1;
    }
   } else {

    VAR_0.serverStatus.motdPaintX -= 2;
    if (VAR_0.serverStatus.motdPaintX2 >= 0) {

     VAR_0.serverStatus.motdPaintX2 -= 2;
    }
   }
  }

  VAR_4 = VAR_1->x + VAR_1->w - 2;
  FUNC_0(&VAR_4, VAR_0.serverStatus.motdPaintX, VAR_1->y + VAR_1->h - 3, VAR_2, VAR_3, &VAR_0.serverStatus.motd[VAR_0.serverStatus.motdOffset], 0, 0);
  if (VAR_0.serverStatus.motdPaintX2 >= 0) {
   float VAR_5 = VAR_1->x + VAR_1->w - 2;
   FUNC_0(&VAR_5, VAR_0.serverStatus.motdPaintX2, VAR_1->y + VAR_1->h - 3, VAR_2, VAR_3, VAR_0.serverStatus.motd, 0, VAR_0.serverStatus.motdOffset);
  }
  if (VAR_0.serverStatus.motdOffset && VAR_4 > 0) {

   if (VAR_0.serverStatus.motdPaintX2 == -1) {
      VAR_0.serverStatus.motdPaintX2 = VAR_1->x + VAR_1->w - 2;
   }
  } else {
   VAR_0.serverStatus.motdPaintX2 = -1;
  }

 }
}
