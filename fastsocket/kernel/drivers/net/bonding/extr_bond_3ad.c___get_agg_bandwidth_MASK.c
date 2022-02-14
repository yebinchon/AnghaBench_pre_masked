
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aggregator {int num_of_ports; int lag_ports; } ;







 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct aggregator *VAR_0)
{
 u32 VAR_1=0;
 u32 VAR_2;

 if (VAR_0->num_of_ports) {
  VAR_2 = FUNC_0(VAR_0->lag_ports);
  switch (VAR_2) {
  case 128:
   VAR_1 = VAR_0->num_of_ports;
   break;
  case 129:
   VAR_1 = VAR_0->num_of_ports * 10;
   break;
  case 130:
   VAR_1 = VAR_0->num_of_ports * 100;
   break;
  case 131:
   VAR_1 = VAR_0->num_of_ports * 1000;
   break;
  case 132:
   VAR_1 = VAR_0->num_of_ports * 10000;
   break;
  default:
   VAR_1=0;
  }
 }
 return VAR_1;
}
