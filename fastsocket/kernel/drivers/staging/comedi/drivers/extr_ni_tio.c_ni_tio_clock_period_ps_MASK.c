
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ni_gpct {int clock_period_ps; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;

 unsigned int VAR_1 ;







__attribute__((used)) static uint64_t FUNC_1(const struct ni_gpct *VAR_2,
           unsigned VAR_3)
{
 uint64_t VAR_4;

 switch (VAR_3 & VAR_0) {
 case 130:
  VAR_4 = 50000;
  break;
 case 129:
  VAR_4 = 10000000;
  break;
 case 128:
  VAR_4 = 12500;
  break;
 case 131:
  VAR_4 = 100000;
  break;
 default:

  return VAR_2->clock_period_ps;
  break;
 }

 switch (VAR_3 & VAR_1) {
 case 134:
  break;
 case 133:
  VAR_4 *= 2;
  break;
 case 132:
  VAR_4 *= 8;
  break;
 default:
  FUNC_0();
  break;
 }
 return VAR_4;
}
