
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hres; int vres; int vmode_refresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;

int FUNC_1(int VAR_3, int VAR_4, u32 VAR_5)
{

 int VAR_6, VAR_7 = -1, VAR_8 = 3;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if ((VAR_3 == VAR_2[VAR_6].hres)
      && (VAR_4 == VAR_2[VAR_6].vres)
      && (VAR_8 > (FUNC_0(VAR_5 -
      VAR_2[VAR_6].vmode_refresh)))) {
   VAR_8 = FUNC_0(VAR_5 - VAR_2[VAR_6].
    vmode_refresh);
   VAR_7 = VAR_6;
  }
 }

 if (VAR_7 > 0)
  return VAR_2[VAR_7].vmode_refresh;
 return 60;
}
