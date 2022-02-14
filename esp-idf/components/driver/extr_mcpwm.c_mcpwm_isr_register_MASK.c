
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mcpwm_unit_t ;
typedef int intr_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int,void (*) (void*),void*,int *) ;

esp_err_t FUNC_2(mcpwm_unit_t VAR_5, void (*VAR_6)(void *), void *VAR_7, int VAR_8, intr_handle_t *VAR_9)
{
    esp_err_t VAR_10;
    FUNC_0(VAR_5 < VAR_3, VAR_4, VAR_0);
    FUNC_0(VAR_6 != ((void*)0), VAR_2, VAR_0);
    VAR_10 = FUNC_1((VAR_1 + VAR_5), VAR_8, VAR_6, VAR_7, VAR_9);
    return VAR_10;
}
