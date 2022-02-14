
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fp_ext {scalar_t__ sign; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fp_ext*,struct fp_ext*) ;

struct fp_ext *
FUNC_2(struct fp_ext *VAR_1, struct fp_ext *VAR_2)
{
 FUNC_0(VAR_0, "fabs\n");

 FUNC_1(VAR_1, VAR_2);

 VAR_1->sign = 0;

 return VAR_1;
}
