
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LLVidDSPContext ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int,char*) ;
 int FUNC_4 (int ,int,int,int,char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;

void FUNC_9(void)
{
    LLVidDSPContext VAR_0;
    int VAR_1 = 16 * FUNC_0(FUNC_8(), 16, 128);
    int VAR_2 = FUNC_8() & 0xFF;

    FUNC_6(&VAR_0);

    FUNC_1(VAR_0, VAR_1);
    FUNC_7("add_bytes");

    FUNC_5(VAR_0, VAR_1);
    FUNC_7("add_median_pred");

    FUNC_3(VAR_0, VAR_1, 0, "add_left_pred_zero");
    FUNC_7("add_left_pred_zero");

    FUNC_3(VAR_0, VAR_1, VAR_2, "add_left_pred_rnd_acc");
    FUNC_7("add_left_pred_rnd_acc");

    FUNC_4(VAR_0, 255, VAR_1, VAR_2, "add_left_pred_int16");
    FUNC_7("add_left_pred_int16");

    FUNC_2(VAR_0, VAR_1);
    FUNC_7("add_gradient_pred");
}
