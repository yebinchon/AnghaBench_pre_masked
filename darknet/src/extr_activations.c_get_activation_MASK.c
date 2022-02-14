
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACTIVATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (char*,char*) ;

ACTIVATION FUNC_2(char *VAR_15)
{
    if (FUNC_1(VAR_15, "logistic")==0) return VAR_6;
    if (FUNC_1(VAR_15, "loggy")==0) return VAR_5;
    if (FUNC_1(VAR_15, "relu")==0) return VAR_10;
    if (FUNC_1(VAR_15, "elu")==0) return VAR_0;
    if (FUNC_1(VAR_15, "selu")==0) return VAR_11;
    if (FUNC_1(VAR_15, "relie")==0) return VAR_9;
    if (FUNC_1(VAR_15, "plse")==0) return VAR_7;
    if (FUNC_1(VAR_15, "hardtan")==0) return VAR_1;
    if (FUNC_1(VAR_15, "lhtan")==0) return VAR_3;
    if (FUNC_1(VAR_15, "linear")==0) return VAR_4;
    if (FUNC_1(VAR_15, "ramp")==0) return VAR_8;
    if (FUNC_1(VAR_15, "leaky")==0) return VAR_2;
    if (FUNC_1(VAR_15, "tanh")==0) return VAR_13;
    if (FUNC_1(VAR_15, "stair")==0) return VAR_12;
    FUNC_0(VAR_14, "Couldn't find activation function %s, going with ReLU\n", VAR_15);
    return VAR_10;
}
