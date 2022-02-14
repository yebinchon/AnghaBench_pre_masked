
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(int VAR_0)
{
 switch (VAR_0) {
 case 0:
  FUNC_0("Joystick 0");
  break;
 case 1:
  FUNC_0("Joystick 1");
  break;
 case 2:
  FUNC_0("Joystick 2");
  break;
 case 3:
  FUNC_0("Joystick 3");
  break;
 default:
  FUNC_0("not available");
  break;
 }
}
