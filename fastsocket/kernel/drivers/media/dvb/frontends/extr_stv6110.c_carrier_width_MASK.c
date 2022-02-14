
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int fe_rolloff_t ;





__attribute__((used)) static u32 FUNC_0(u32 VAR_0, fe_rolloff_t VAR_1)
{
 u32 VAR_2;

 switch (VAR_1) {
 case 129:
  VAR_2 = 20;
  break;
 case 128:
  VAR_2 = 25;
  break;
 default:
  VAR_2 = 35;
  break;
 }

 return VAR_0 + ((VAR_0 * VAR_2) / 100);
}
