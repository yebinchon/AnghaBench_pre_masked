
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int width; unsigned int height; } ;
typedef TYPE_1__ VIDEOMODE_resolution_t ;
typedef size_t VIDEOMODE_MODE_t ;
struct TYPE_6__ {unsigned int min_h; unsigned int min_w; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static VIDEOMODE_resolution_t *FUNC_0(VIDEOMODE_MODE_t VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;
 if (VAR_5) {
  VAR_7 = VAR_1[VAR_4].min_h;
  VAR_8 = VAR_1[VAR_4].min_w;
 } else {
  VAR_7 = VAR_1[VAR_4].min_w;
  VAR_8 = VAR_1[VAR_4].min_h;
 }
 if (VAR_2[VAR_0].width >= VAR_7 &&
     VAR_2[VAR_0].height >= VAR_8)

  return &VAR_2[VAR_0];


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 ++) {
  if (VAR_2[VAR_6].width >= VAR_7 &&
      VAR_2[VAR_6].height >= VAR_8)
   return &VAR_2[VAR_6];
 }


 return ((void*)0);
}
