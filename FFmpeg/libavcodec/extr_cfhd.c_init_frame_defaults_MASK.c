
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bpc; int channel_cnt; int lowpass_precision; int quantisation; int wavelet_depth; int pshift; scalar_t__ progressive; scalar_t__ difference_coding; scalar_t__ codebook; scalar_t__ channel_num; int subband_cnt; scalar_t__ cropped_height; scalar_t__ coded_height; scalar_t__ coded_width; } ;
typedef TYPE_1__ CFHDContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(CFHDContext *VAR_1)
{
    VAR_1->coded_width = 0;
    VAR_1->coded_height = 0;
    VAR_1->cropped_height = 0;
    VAR_1->bpc = 10;
    VAR_1->channel_cnt = 4;
    VAR_1->subband_cnt = VAR_0;
    VAR_1->channel_num = 0;
    VAR_1->lowpass_precision = 16;
    VAR_1->quantisation = 1;
    VAR_1->wavelet_depth = 3;
    VAR_1->pshift = 1;
    VAR_1->codebook = 0;
    VAR_1->difference_coding = 0;
    VAR_1->progressive = 0;
    FUNC_1(VAR_1);
    FUNC_0(VAR_1);
}
