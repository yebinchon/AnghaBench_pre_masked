
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* dpcd; } ;




 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct intel_dp *VAR_1)
{
 int VAR_2 = VAR_1->dpcd[VAR_0];

 switch (VAR_2) {
 case 129:
 case 128:
  break;
 default:
  VAR_2 = 129;
  break;
 }
 return VAR_2;
}
