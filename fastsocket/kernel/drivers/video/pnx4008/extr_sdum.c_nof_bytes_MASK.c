
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dum_ch_setup {int format; } ;




 int FUNC_0 (struct dum_ch_setup*) ;

__attribute__((used)) static u32 FUNC_1(struct dum_ch_setup *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0);
 switch (VAR_0->format) {
 case 128:
 case 129:
  VAR_1 *= 4;
  break;

 default:
  VAR_1 *= 2;
  break;
 }
 return VAR_1;
}
