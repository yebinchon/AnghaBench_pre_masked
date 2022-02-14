
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct si_pub {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct si_pub*) ;
 int FUNC_1 (struct si_pub*) ;

u32 FUNC_2(struct si_pub *VAR_2)
{
 u32 VAR_3 = VAR_0;


 if (!(FUNC_0(VAR_2) & VAR_1))
  return VAR_3;

 switch (FUNC_1(VAR_2)) {
 case 129:
 case 128:
 case 130:

  VAR_3 = 20000 * 1000;
  break;
 default:
  break;
 }

 return VAR_3;
}
