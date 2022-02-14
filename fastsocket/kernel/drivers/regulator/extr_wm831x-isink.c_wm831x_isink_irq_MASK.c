
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_isink {int regulator; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct wm831x_isink *VAR_4 = VAR_3;

 FUNC_0(VAR_4->regulator,
          VAR_1,
          ((void*)0));

 return VAR_0;
}
