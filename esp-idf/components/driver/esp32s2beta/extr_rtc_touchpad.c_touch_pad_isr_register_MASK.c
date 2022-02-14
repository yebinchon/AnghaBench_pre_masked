
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int touch_pad_intr_mask_t ;
typedef int * intr_handler_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void*,int) ;

esp_err_t FUNC_2(intr_handler_t VAR_2, void *VAR_3, touch_pad_intr_mask_t VAR_4)
{
    FUNC_0(VAR_2 != ((void*)0));
    return FUNC_1(VAR_2, VAR_3, VAR_1 & (VAR_4 << VAR_0));
}
