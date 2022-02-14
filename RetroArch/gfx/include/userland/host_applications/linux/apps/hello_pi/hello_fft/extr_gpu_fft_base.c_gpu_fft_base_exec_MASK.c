
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GPU_FFT_BASE {scalar_t__ vc_msg; int mb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,scalar_t__,int ,int ) ;
 int FUNC_1 (struct GPU_FFT_BASE*,int) ;

unsigned FUNC_2(
    struct GPU_FFT_BASE *VAR_2,
    int VAR_3) {

    if (VAR_2->vc_msg) {


        return FUNC_0(VAR_2->mb, VAR_3, VAR_2->vc_msg, VAR_0, VAR_1);
    }
    else {

        return FUNC_1(VAR_2, VAR_3);
    }
}
