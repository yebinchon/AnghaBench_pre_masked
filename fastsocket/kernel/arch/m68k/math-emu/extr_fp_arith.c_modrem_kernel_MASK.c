
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m64; } ;
struct fp_ext {int sign; TYPE_1__ mant; } ;


 scalar_t__ FUNC_0 (struct fp_ext*) ;
 scalar_t__ FUNC_1 (struct fp_ext*) ;
 int FUNC_2 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_3 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_4 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_5 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_6 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_7 (struct fp_ext*,int) ;
 int FUNC_8 (struct fp_ext*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static struct fp_ext *
FUNC_10(struct fp_ext *VAR_0, struct fp_ext *VAR_1, int VAR_2)
{
 struct fp_ext VAR_3;

 FUNC_3(VAR_0, VAR_1);


 if (FUNC_0(VAR_0) || FUNC_1(VAR_1)) {
  FUNC_8(VAR_0);
  return VAR_0;
 }
 if (FUNC_1(VAR_0) || FUNC_0(VAR_1))
  return VAR_0;


 FUNC_2(&VAR_3, VAR_0);
 FUNC_4(&VAR_3, VAR_1);
 FUNC_7(&VAR_3, VAR_2);
 FUNC_5(&VAR_3, VAR_1);
 FUNC_6(VAR_0, &VAR_3);


 FUNC_9((VAR_0->mant.m64 & 0x7f) | (VAR_0->sign << 7));
 return VAR_0;
}
