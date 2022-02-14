
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int FUNC_0 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_1(struct wm8350 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4) &
     VAR_5;
 switch (VAR_7) {
 case 129:
  return VAR_1;
 case 128:
  return VAR_2;
 case 130:
  return VAR_0;
 default:
  return VAR_3;
 }
}
