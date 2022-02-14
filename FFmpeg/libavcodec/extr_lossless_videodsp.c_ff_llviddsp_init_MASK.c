
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int add_gradient_pred; int add_left_pred_int16; int add_left_pred; int add_median_pred; int add_bytes; } ;
typedef TYPE_1__ LLVidDSPContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(LLVidDSPContext *VAR_7)
{
    VAR_7->add_bytes = VAR_2;
    VAR_7->add_median_pred = VAR_6;
    VAR_7->add_left_pred = VAR_4;

    VAR_7->add_left_pred_int16 = VAR_5;
    VAR_7->add_gradient_pred = VAR_3;

    if (VAR_0)
        FUNC_0(VAR_7);
    if (VAR_1)
        FUNC_1(VAR_7);
}
