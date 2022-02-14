
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union fp_mant128 {scalar_t__* m32; } ;
struct TYPE_2__ {scalar_t__* m32; scalar_t__ m64; } ;
struct fp_ext {int sign; int exp; TYPE_1__ mant; scalar_t__ lowmant; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fp_ext*) ;
 scalar_t__ FUNC_1 (struct fp_ext*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_4 (struct fp_ext*,int) ;
 int FUNC_5 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_6 (union fp_mant128*,struct fp_ext*,struct fp_ext*) ;
 scalar_t__ FUNC_7 (struct fp_ext*) ;
 int FUNC_8 (struct fp_ext*,union fp_mant128*,int) ;
 int FUNC_9 (struct fp_ext*) ;
 int FUNC_10 (struct fp_ext*) ;
 int FUNC_11 (int ) ;

struct fp_ext *
FUNC_12(struct fp_ext *VAR_2, struct fp_ext *VAR_3)
{
 union fp_mant128 VAR_4;
 int VAR_5;

 FUNC_2(VAR_1, "fmul\n");

 FUNC_5(VAR_2, VAR_3);


 VAR_2->sign = VAR_3->sign ^ VAR_2->sign;


 if (FUNC_0(VAR_2)) {
  if (FUNC_1(VAR_3))
   FUNC_9(VAR_2);
  return VAR_2;
 }
 if (FUNC_0(VAR_3)) {
  if (FUNC_1(VAR_2))
   FUNC_9(VAR_2);
  else
   FUNC_3(VAR_2, VAR_3);
  return VAR_2;
 }




 if (FUNC_1(VAR_2) || FUNC_1(VAR_3)) {
  VAR_2->exp = 0;
  VAR_2->mant.m64 = 0;
  VAR_2->lowmant = 0;

  return VAR_2;
 }

 VAR_5 = VAR_2->exp + VAR_3->exp - 0x3ffe;




 if ((long)VAR_2->mant.m32[0] >= 0)
  VAR_5 -= FUNC_7(VAR_2);
 if ((long)VAR_3->mant.m32[0] >= 0)
  VAR_5 -= FUNC_7(VAR_3);


 FUNC_6(&VAR_4, VAR_2, VAR_3);



 if ((long)VAR_4.m32[0] > 0) {
  VAR_5--;
  FUNC_8(VAR_2, &VAR_4, 1);
 } else
  FUNC_8(VAR_2, &VAR_4, 0);

 if (VAR_5 >= 0x7fff) {
  FUNC_10(VAR_2);
  return VAR_2;
 }
 VAR_2->exp = VAR_5;
 if (VAR_5 < 0) {
  FUNC_11(VAR_0);
  FUNC_4(VAR_2, -VAR_5);
 }

 return VAR_2;
}
