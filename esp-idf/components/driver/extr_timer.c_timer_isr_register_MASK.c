
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int timer_isr_handle_t ;
typedef scalar_t__ timer_idx_t ;
typedef int timer_group_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ,int ) ;


 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int ,int,void (*) (void*),void*,int *) ;

esp_err_t FUNC_3(timer_group_t VAR_11, timer_idx_t VAR_12,
    void (*VAR_13)(void*), void * VAR_14, int VAR_15, timer_isr_handle_t *VAR_16)
{
    FUNC_0(VAR_11 < VAR_6, VAR_7, VAR_0);
    FUNC_0(VAR_12 < VAR_8, VAR_9, VAR_0);
    FUNC_0(VAR_13 != ((void*)0), VAR_10, VAR_0);

    int VAR_17 = 0;
    uint32_t VAR_18 = 0;
    int VAR_19 = 0;
    switch(VAR_11) {
        case 129:
        default:
            if((VAR_15 & VAR_1) == 0) {
                VAR_17 = VAR_3 + VAR_12;
            } else {
                VAR_17 = VAR_2 + VAR_12;
            }
            VAR_18 = FUNC_1(0);
            VAR_19 = 1<<VAR_12;
            break;
        case 128:
            if((VAR_15 & VAR_1) == 0) {
                VAR_17 = VAR_5 + VAR_12;
            } else {
                VAR_17 = VAR_4 + VAR_12;
            }
            VAR_18 = FUNC_1(1);
            VAR_19 = 1<<VAR_12;
            break;
    }
    return FUNC_2(VAR_17, VAR_15, VAR_18, VAR_19, VAR_13, VAR_14, VAR_16);
}
