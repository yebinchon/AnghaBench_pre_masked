
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfp_double {scalar_t__ sign; int significand; int exponent; } ;


 int FUNC_0 (char*,char const*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, struct vfp_double *VAR_1)
{
 FUNC_0("VFP: %s: sign=%d exponent=%d significand=%016llx\n",
   VAR_0, VAR_1->sign != 0, VAR_1->exponent, VAR_1->significand);
}
