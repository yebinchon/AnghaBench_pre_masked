
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fp_ext {int sign; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct fp_ext* FUNC_1 (struct fp_ext*,struct fp_ext*) ;

struct fp_ext *
FUNC_2(struct fp_ext *VAR_1, struct fp_ext *VAR_2)
{
 FUNC_0(VAR_0, "fsub ");

 VAR_2->sign = !VAR_2->sign;
 return FUNC_1(VAR_1, VAR_2);
}
