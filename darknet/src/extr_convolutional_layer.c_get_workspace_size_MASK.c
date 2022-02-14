
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t out_w; size_t size; size_t c; size_t groups; scalar_t__ out_h; int bd_algo; int dsrcTensorDesc; int convDesc; int ddstTensorDesc; int weightDesc; int bf_algo; int dweightDesc; int srcTensorDesc; int fw_algo; int dstTensorDesc; } ;
typedef TYPE_1__ layer ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,size_t*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,size_t*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,size_t*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t FUNC_4(layer VAR_1){
    return (size_t)VAR_1.out_h*VAR_1.out_w*VAR_1.size*VAR_1.size*VAR_1.c/VAR_1.groups*sizeof(float);
}
