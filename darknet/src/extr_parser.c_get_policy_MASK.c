
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int learning_rate_policy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (char*,char*) ;

learning_rate_policy FUNC_2(char *VAR_8)
{
    if (FUNC_1(VAR_8, "random")==0) return VAR_3;
    if (FUNC_1(VAR_8, "poly")==0) return VAR_2;
    if (FUNC_1(VAR_8, "constant")==0) return VAR_0;
    if (FUNC_1(VAR_8, "step")==0) return VAR_5;
    if (FUNC_1(VAR_8, "exp")==0) return VAR_1;
    if (FUNC_1(VAR_8, "sigmoid")==0) return VAR_4;
    if (FUNC_1(VAR_8, "steps")==0) return VAR_6;
    FUNC_0(VAR_7, "Couldn't find policy %s, going with constant\n", VAR_8);
    return VAR_0;
}
