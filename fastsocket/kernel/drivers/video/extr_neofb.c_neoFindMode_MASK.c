
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x_res; int mode; int y_res; } ;
typedef TYPE_1__ biosMode ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;
 biosMode *VAR_10;

 switch (VAR_6) {
 case 8:
  VAR_9 = FUNC_0(VAR_3);
  VAR_10 = VAR_3;
  break;
 case 16:
  VAR_9 = FUNC_0(VAR_0);
  VAR_10 = VAR_0;
  break;
 case 24:
  VAR_9 = FUNC_0(VAR_1);
  VAR_10 = VAR_1;
  break;






 default:
  return 0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_4 <= VAR_10[VAR_8].x_res) {
   VAR_7 = VAR_10[VAR_8].x_res;
   for (; VAR_8 < VAR_9; VAR_8++) {
    if (VAR_10[VAR_8].x_res != VAR_7)
     return VAR_10[VAR_8 - 1].mode;
    if (VAR_5 <= VAR_10[VAR_8].y_res)
     return VAR_10[VAR_8].mode;
   }
  }
 }
 return VAR_10[VAR_9 - 1].mode;
}
