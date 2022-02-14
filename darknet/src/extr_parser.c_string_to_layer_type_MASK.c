
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LAYER_TYPE ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (char*,char*) ;

LAYER_TYPE FUNC_1(char * VAR_29)
{

    if (FUNC_0(VAR_29, "[shortcut]")==0) return VAR_25;
    if (FUNC_0(VAR_29, "[crop]")==0) return VAR_8;
    if (FUNC_0(VAR_29, "[cost]")==0) return VAR_6;
    if (FUNC_0(VAR_29, "[detection]")==0) return VAR_10;
    if (FUNC_0(VAR_29, "[region]")==0) return VAR_21;
    if (FUNC_0(VAR_29, "[yolo]")==0) return VAR_28;
    if (FUNC_0(VAR_29, "[iseg]")==0) return VAR_13;
    if (FUNC_0(VAR_29, "[local]")==0) return VAR_15;
    if (FUNC_0(VAR_29, "[conv]")==0
            || FUNC_0(VAR_29, "[convolutional]")==0) return VAR_5;
    if (FUNC_0(VAR_29, "[deconv]")==0
            || FUNC_0(VAR_29, "[deconvolutional]")==0) return VAR_9;
    if (FUNC_0(VAR_29, "[activation]")==0) return VAR_0;
    if (FUNC_0(VAR_29, "[logistic]")==0) return VAR_16;
    if (FUNC_0(VAR_29, "[l2norm]")==0) return VAR_14;
    if (FUNC_0(VAR_29, "[net]")==0
            || FUNC_0(VAR_29, "[network]")==0) return VAR_19;
    if (FUNC_0(VAR_29, "[crnn]")==0) return VAR_7;
    if (FUNC_0(VAR_29, "[gru]")==0) return VAR_12;
    if (FUNC_0(VAR_29, "[lstm]") == 0) return VAR_17;
    if (FUNC_0(VAR_29, "[rnn]")==0) return VAR_23;
    if (FUNC_0(VAR_29, "[conn]")==0
            || FUNC_0(VAR_29, "[connected]")==0) return VAR_4;
    if (FUNC_0(VAR_29, "[max]")==0
            || FUNC_0(VAR_29, "[maxpool]")==0) return VAR_18;
    if (FUNC_0(VAR_29, "[reorg]")==0) return VAR_22;
    if (FUNC_0(VAR_29, "[avg]")==0
            || FUNC_0(VAR_29, "[avgpool]")==0) return VAR_1;
    if (FUNC_0(VAR_29, "[dropout]")==0) return VAR_11;
    if (FUNC_0(VAR_29, "[lrn]")==0
            || FUNC_0(VAR_29, "[normalization]")==0) return VAR_20;
    if (FUNC_0(VAR_29, "[batchnorm]")==0) return VAR_2;
    if (FUNC_0(VAR_29, "[soft]")==0
            || FUNC_0(VAR_29, "[softmax]")==0) return VAR_26;
    if (FUNC_0(VAR_29, "[route]")==0) return VAR_24;
    if (FUNC_0(VAR_29, "[upsample]")==0) return VAR_27;
    return VAR_3;
}
