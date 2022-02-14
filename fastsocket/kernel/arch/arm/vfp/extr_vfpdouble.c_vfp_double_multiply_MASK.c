
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_double {int exponent; int sign; int significand; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct vfp_double VAR_1 ;
 int FUNC_1 (char*,struct vfp_double*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct vfp_double*,struct vfp_double*,struct vfp_double*,int ) ;

__attribute__((used)) static u32
FUNC_4(struct vfp_double *VAR_2, struct vfp_double *VAR_3,
      struct vfp_double *VAR_4, u32 VAR_5)
{
 FUNC_1("VDN", VAR_3);
 FUNC_1("VDM", VAR_4);






 if (VAR_3->exponent < VAR_4->exponent) {
  struct vfp_double *VAR_6 = VAR_3;
  VAR_3 = VAR_4;
  VAR_4 = VAR_6;
  FUNC_0("VFP: swapping M <-> N\n");
 }

 VAR_2->sign = VAR_3->sign ^ VAR_4->sign;




 if (VAR_3->exponent == 2047) {
  if (VAR_3->significand || (VAR_4->exponent == 2047 && VAR_4->significand))
   return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
  if ((VAR_4->exponent | VAR_4->significand) == 0) {
   *VAR_2 = VAR_1;
   return VAR_0;
  }
  VAR_2->exponent = VAR_3->exponent;
  VAR_2->significand = 0;
  return 0;
 }





 if ((VAR_4->exponent | VAR_4->significand) == 0) {
  VAR_2->exponent = 0;
  VAR_2->significand = 0;
  return 0;
 }






 VAR_2->exponent = VAR_3->exponent + VAR_4->exponent - 1023 + 2;
 VAR_2->significand = FUNC_2(VAR_3->significand, VAR_4->significand);

 FUNC_1("VDD", VAR_2);
 return 0;
}
