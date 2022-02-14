
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fp_ext {int exp; } ;


 scalar_t__ FUNC_0 (struct fp_ext*) ;
 scalar_t__ FUNC_1 (struct fp_ext*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct fp_ext*,struct fp_ext*) ;

struct fp_ext *
FUNC_4(struct fp_ext *VAR_1, struct fp_ext *VAR_2)
{
 FUNC_2(VAR_0, "fgetman\n");

 FUNC_3(VAR_1, VAR_2);

 if (FUNC_1(VAR_1))
  return VAR_1;

 if (FUNC_0(VAR_1))
  return VAR_1;

 VAR_1->exp = 0x3FFF;

 return VAR_1;
}
