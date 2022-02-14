
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_1(struct wm831x *VAR_8, int *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_10 & VAR_6) {
  *VAR_9 = VAR_1;
  return 0;
 }

 VAR_10 = FUNC_0(VAR_8, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_10 & VAR_5) {
 case 129:
  *VAR_9 = VAR_2;
  break;
 case 128:
 case 130:
  *VAR_9 = VAR_0;
  break;

 default:
  *VAR_9 = VAR_3;
  break;
 }

 return 0;
}
