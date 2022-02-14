
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {int reset_required; } ;





__attribute__((used)) static bool FUNC_0(struct vmballoon *VAR_0, unsigned long VAR_1)
{
 switch (VAR_1) {
 case 128:
  return 1;

 case 129:
  VAR_0->reset_required = 1;


 default:
  return 0;
 }
}
