
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fp_ext {int exp; } ;
struct TYPE_2__ {int rnd; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fp_ext*) ;
 scalar_t__ FUNC_1 (struct fp_ext*) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct fp_ext*) ;
 int FUNC_4 (struct fp_ext*,int) ;
 int FUNC_5 (struct fp_ext*,struct fp_ext*) ;
 int FUNC_6 (struct fp_ext*) ;
 int FUNC_7 (struct fp_ext*) ;
 int FUNC_8 (int ) ;

struct fp_ext *
FUNC_9(struct fp_ext *VAR_4, struct fp_ext *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_2(VAR_3, "fscale\n");

 FUNC_5(VAR_4, VAR_5);


 if (FUNC_0(VAR_5)) {
  FUNC_6(VAR_4);
  return VAR_4;
 }
 if (FUNC_0(VAR_4))
  return VAR_4;


 if (FUNC_1(VAR_5) || FUNC_1(VAR_4))
  return VAR_4;


 if (VAR_5->exp >= 0x400c) {
  FUNC_7(VAR_4);
  return VAR_4;
 }


 VAR_7 = VAR_1->rnd;
 VAR_1->rnd = VAR_0;
 VAR_6 = FUNC_3(VAR_5);
 VAR_1->rnd = VAR_7;


 VAR_6 += VAR_4->exp;

 if (VAR_6 >= 0x7fff) {
  FUNC_7(VAR_4);
 } else if (VAR_6 <= 0) {
  FUNC_8(VAR_2);
  FUNC_4(VAR_4, -VAR_6);
 } else
  VAR_4->exp = VAR_6;

 return VAR_4;
}
