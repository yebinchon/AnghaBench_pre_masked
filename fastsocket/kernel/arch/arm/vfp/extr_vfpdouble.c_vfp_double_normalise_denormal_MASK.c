
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfp_double {int significand; int exponent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct vfp_double*) ;

__attribute__((used)) static void FUNC_2(struct vfp_double *VAR_0)
{
 int VAR_1 = 31 - FUNC_0(VAR_0->significand >> 32);
 if (VAR_1 == 31)
  VAR_1 = 63 - FUNC_0(VAR_0->significand);

 FUNC_1("normalise_denormal: in", VAR_0);

 if (VAR_1) {
  VAR_0->exponent -= VAR_1 - 1;
  VAR_0->significand <<= VAR_1;
 }

 FUNC_1("normalise_denormal: out", VAR_0);
}
