
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


 int FUNC_0 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_1(struct wm831x *VAR_5, int *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_7 & VAR_4) {
 case 129:
 case 128:
  *VAR_6 = VAR_2;
  break;
 case 131:
 case 130:
  *VAR_6 = VAR_0;
  break;
 default:
  *VAR_6 = VAR_1;
  break;
 }

 return 0;
}
