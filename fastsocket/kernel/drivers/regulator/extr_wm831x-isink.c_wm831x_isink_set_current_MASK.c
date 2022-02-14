
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_isink {int reg; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct wm831x_isink* FUNC_1 (struct regulator_dev*) ;
 int* VAR_2 ;
 int FUNC_2 (struct wm831x*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
        int VAR_4, int VAR_5)
{
 struct wm831x_isink *VAR_6 = FUNC_1(VAR_3);
 struct wm831x *VAR_7 = VAR_6->wm831x;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
  int VAR_10 = VAR_2[VAR_9];
  if (VAR_4 >= VAR_10 && VAR_10 <= VAR_5) {
   VAR_8 = FUNC_2(VAR_7, VAR_6->reg,
           VAR_1, VAR_9);
   return VAR_8;
  }
 }

 return -VAR_0;
}
