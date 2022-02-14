
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ train; int input; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {scalar_t__ type; int outputs; int batch; int out_h; int out_w; int out_c; int biases; int output; int scales; int rolling_variance; int rolling_mean; int x_norm; int variance; int mean; int x; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int,int ,int) ;
 int FUNC_1 (int ,double,int ,int,int ,int) ;
 int FUNC_2 (int,int ,int,int ,int) ;
 int FUNC_3 (int ,int,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int) ;
 int FUNC_5 (int ,double,int ,int) ;
 int FUNC_6 (int ,int ,int,int ,int) ;
 int FUNC_7 (int ,int ,int,int ,int,int ) ;

void FUNC_8(layer VAR_1, network VAR_2)
{
    if(VAR_1.type == VAR_0) FUNC_2(VAR_1.outputs*VAR_1.batch, VAR_2.input, 1, VAR_1.output, 1);
    FUNC_2(VAR_1.outputs*VAR_1.batch, VAR_1.output, 1, VAR_1.x, 1);
    if(VAR_2.train){
        FUNC_3(VAR_1.output, VAR_1.batch, VAR_1.out_c, VAR_1.out_h*VAR_1.out_w, VAR_1.mean);
        FUNC_7(VAR_1.output, VAR_1.mean, VAR_1.batch, VAR_1.out_c, VAR_1.out_h*VAR_1.out_w, VAR_1.variance);

        FUNC_5(VAR_1.out_c, .99, VAR_1.rolling_mean, 1);
        FUNC_1(VAR_1.out_c, .01, VAR_1.mean, 1, VAR_1.rolling_mean, 1);
        FUNC_5(VAR_1.out_c, .99, VAR_1.rolling_variance, 1);
        FUNC_1(VAR_1.out_c, .01, VAR_1.variance, 1, VAR_1.rolling_variance, 1);

        FUNC_4(VAR_1.output, VAR_1.mean, VAR_1.variance, VAR_1.batch, VAR_1.out_c, VAR_1.out_h*VAR_1.out_w);
        FUNC_2(VAR_1.outputs*VAR_1.batch, VAR_1.output, 1, VAR_1.x_norm, 1);
    } else {
        FUNC_4(VAR_1.output, VAR_1.rolling_mean, VAR_1.rolling_variance, VAR_1.batch, VAR_1.out_c, VAR_1.out_h*VAR_1.out_w);
    }
    FUNC_6(VAR_1.output, VAR_1.scales, VAR_1.batch, VAR_1.out_c, VAR_1.out_h*VAR_1.out_w);
    FUNC_0(VAR_1.output, VAR_1.biases, VAR_1.batch, VAR_1.out_c, VAR_1.out_h*VAR_1.out_w);
}
