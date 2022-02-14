
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ m64; } ;
struct fp_ext {scalar_t__ sign; int exp; TYPE_1__ mant; scalar_t__ lowmant; } ;
struct TYPE_4__ {scalar_t__ rnd; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (struct fp_ext*) ;
 scalar_t__ FUNC_1 (struct fp_ext*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct fp_ext*) ;
 scalar_t__ FUNC_4 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_5 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_6 (struct fp_ext*,int) ;
 int FUNC_7 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_8 (struct fp_ext*) ;
 int FUNC_9 (struct fp_ext*,struct fp_ext*,struct fp_ext*) ;

struct fp_ext *
FUNC_10(struct fp_ext *VAR_3, struct fp_ext *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_2, "fadd\n");

 FUNC_7(VAR_3, VAR_4);

 if (FUNC_0(VAR_3)) {

  if (FUNC_0(VAR_4) && (VAR_4->sign != VAR_3->sign))
   FUNC_8(VAR_3);
  return VAR_3;
 }
 if (FUNC_0(VAR_4)) {
  FUNC_5(VAR_3, VAR_4);
  return VAR_3;
 }

 if (FUNC_1(VAR_3)) {
  if (FUNC_1(VAR_4)) {
   if (VAR_4->sign != VAR_3->sign) {
    if (VAR_1->rnd == VAR_0)
     VAR_3->sign = 1;
    else
     VAR_3->sign = 0;
   }
  } else
   FUNC_5(VAR_3, VAR_4);
  return VAR_3;
 }

 VAR_3->lowmant = VAR_4->lowmant = 0;

 if ((VAR_5 = VAR_3->exp - VAR_4->exp) > 0)
  FUNC_6(VAR_4, VAR_5);
 else if ((VAR_5 = -VAR_5) > 0)
  FUNC_6(VAR_3, VAR_5);

 if (VAR_3->sign == VAR_4->sign) {
  if (FUNC_4(VAR_3, VAR_4))
   if (!FUNC_3(VAR_3))
    return VAR_3;
 } else {
  if (VAR_3->mant.m64 < VAR_4->mant.m64) {
   FUNC_9(VAR_3, VAR_4, VAR_3);
   VAR_3->sign = !VAR_3->sign;
  } else
   FUNC_9(VAR_3, VAR_3, VAR_4);
 }

 return VAR_3;
}
