
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef double uint16_t ;
typedef size_t timer_idx_t ;
typedef size_t timer_group_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {TYPE_2__* hw_timer; } ;
struct TYPE_4__ {double divider; scalar_t__ use_xtal; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__** VAR_2 ;
 double VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 double FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (size_t,size_t,scalar_t__*) ;

esp_err_t FUNC_4(timer_group_t VAR_9, timer_idx_t VAR_10, double* VAR_11)
{
    FUNC_0(VAR_9 < VAR_4, VAR_5, VAR_0);
    FUNC_0(VAR_10 < VAR_6, VAR_7, VAR_0);
    FUNC_0(VAR_11 != ((void*)0), VAR_8, VAR_0);

    uint64_t VAR_12;
    esp_err_t VAR_13 = FUNC_3(VAR_9, VAR_10, &VAR_12);
    if (VAR_13 == VAR_1) {
        uint16_t VAR_14 = VAR_2[VAR_9]->hw_timer[VAR_10].config.divider;
    }
    return VAR_13;
}
