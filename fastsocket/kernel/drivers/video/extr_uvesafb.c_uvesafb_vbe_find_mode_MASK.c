
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvesafb_par {int vbe_modes_cnt; TYPE_1__* vbe_modes; } ;
struct TYPE_2__ {int x_res; int y_res; int depth; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct uvesafb_par *VAR_2,
  int VAR_3, int VAR_4, int VAR_5, unsigned char VAR_6)
{
 int VAR_7, VAR_8 = -1, VAR_9 = 0, VAR_10 = 0x7fffffff;

 for (VAR_7 = 0; VAR_7 < VAR_2->vbe_modes_cnt; VAR_7++) {
  VAR_9 = FUNC_0(VAR_2->vbe_modes[VAR_7].x_res - VAR_3) +
      FUNC_0(VAR_2->vbe_modes[VAR_7].y_res - VAR_4) +
      FUNC_0(VAR_5 - VAR_2->vbe_modes[VAR_7].depth);





  if (VAR_9 == 0)
   return VAR_7;

  if (VAR_9 < VAR_10 || (VAR_9 == VAR_10 && VAR_2->vbe_modes[VAR_7].depth > VAR_5)) {
   VAR_10 = VAR_9;
   VAR_8 = VAR_7;
  }
 }
 VAR_7 = 1;

 if (VAR_6 & VAR_0 &&
   VAR_2->vbe_modes[VAR_8].depth != VAR_5)
  VAR_7 = 0;

 if (VAR_6 & VAR_1 && VAR_10 > 24)
  VAR_7 = 0;

 if (VAR_7 != 0)
  return VAR_8;
 else
  return -1;
}
