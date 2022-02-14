
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int link_speed; } ;






__attribute__((used)) static int FUNC_0(struct ixgbe_adapter *VAR_0)
{
 switch (VAR_0->link_speed) {
 case 130:
  return 100;
 case 128:
  return 1000;
 case 129:
  return 10000;
 default:
  return 0;
 }
}
