
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int locked; } ;
__attribute__((used)) static int FUNC_0(struct wm831x *VAR_0, unsigned short VAR_1)
{
 if (!VAR_0->locked)
  return 0;

 switch (VAR_1) {
 case 128:
 case 130:
 case 129:
 case 133:
 case 132:
 case 131:
  return 1;

 default:
  return 0;
 }
}
