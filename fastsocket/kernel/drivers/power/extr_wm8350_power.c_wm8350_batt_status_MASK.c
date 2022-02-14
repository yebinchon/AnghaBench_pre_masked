
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int FUNC_0 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_1(struct wm8350 *VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_6 &= VAR_4;

 switch (VAR_6) {
 case 129:
  return VAR_1;

 case 128:
 case 130:
  return VAR_0;

 default:
  return VAR_2;
 }
}
