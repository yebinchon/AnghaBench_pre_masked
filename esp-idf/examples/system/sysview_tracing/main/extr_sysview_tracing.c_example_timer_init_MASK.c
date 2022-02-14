
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long uint64_t ;
typedef unsigned long uint32_t ;
struct TYPE_3__ {int alarm_en; int auto_reload; int divider; int counter_en; int intr_type; int counter_dir; } ;
typedef TYPE_1__ timer_config_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,TYPE_1__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,unsigned long) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static void FUNC_5(int VAR_4, int VAR_5, uint32_t VAR_6)
{
    timer_config_t VAR_7;
    uint64_t VAR_8 = (VAR_6 * (VAR_0 / 1000000UL)) / 2;

    VAR_7.alarm_en = 1;
    VAR_7.auto_reload = 1;
    VAR_7.counter_dir = VAR_1;
    VAR_7.divider = 2;
    VAR_7.intr_type = VAR_2;
    VAR_7.counter_en = VAR_3;

    FUNC_1(VAR_4, VAR_5, &VAR_7);

    FUNC_2(VAR_4, VAR_5);

    FUNC_4(VAR_4, VAR_5, 0x00000000ULL);

    FUNC_3(VAR_4, VAR_5, VAR_8);

    FUNC_0(VAR_4, VAR_5);
}
