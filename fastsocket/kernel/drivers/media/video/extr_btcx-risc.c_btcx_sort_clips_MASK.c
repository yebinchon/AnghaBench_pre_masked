
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ left; } ;
struct v4l2_clip {TYPE_1__ c; } ;



void
FUNC_0(struct v4l2_clip *VAR_0, unsigned int VAR_1)
{
 struct v4l2_clip VAR_2;
 int VAR_3,VAR_4,VAR_5;

 if (VAR_1 < 2)
  return;
 for (VAR_3 = VAR_1-2; VAR_3 >= 0; VAR_3--) {
  for (VAR_5 = 0, VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++) {
   if (VAR_0[VAR_4].c.left > VAR_0[VAR_4+1].c.left) {
    VAR_2 = VAR_0[VAR_4];
    VAR_0[VAR_4] = VAR_0[VAR_4+1];
    VAR_0[VAR_4+1] = VAR_2;
    VAR_5++;
   }
  }
  if (0 == VAR_5)
   break;
 }
}
