
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bus_type; } ;
typedef TYPE_1__ MPT_ADAPTER ;






__attribute__((used)) static int
FUNC_0(MPT_ADAPTER *VAR_0)
{
 switch (VAR_0->bus_type) {
 case 130:
  return 40;
 case 129:
  return 30;
 case 128:
 default:
  return 10;
 }
}
