
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int timer_idx; int timer_group; } ;
typedef TYPE_1__ timer_info_t ;
typedef int timer_idx_t ;
typedef int timer_group_t ;


 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,double,...) ;
 int FUNC_1 (int const,int const,scalar_t__*) ;
 int FUNC_2 (int const,int const,double*) ;
 int FUNC_3 (int const,int const,scalar_t__*) ;
 scalar_t__ FUNC_4 (int const,int const) ;
 int FUNC_5 (int const,int const) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
    timer_info_t* VAR_3 = (timer_info_t*) VAR_2;
    const timer_group_t VAR_4 = VAR_3->timer_group;
    const timer_idx_t VAR_5 = VAR_3->timer_idx;
    uint64_t VAR_6;
    double VAR_7;
    uint64_t VAR_8;
    VAR_1 = 1;
    if (FUNC_4(VAR_4, VAR_5)) {
        FUNC_5(VAR_4, VAR_5);
        FUNC_0("This is TG%d timer[%d] reload-timer alarm!\n", VAR_4, VAR_5);
        FUNC_3(VAR_4, VAR_5, &VAR_6);
        FUNC_2(VAR_4, VAR_5, &VAR_7);
        FUNC_0("time: %.8f S\n", VAR_7);
    } else {
        FUNC_5(VAR_4, VAR_5);
        FUNC_0("This is TG%d timer[%d] count-up-timer alarm!\n", VAR_4, VAR_5);
        FUNC_3(VAR_4, VAR_5, &VAR_6);
        FUNC_2(VAR_4, VAR_5, &VAR_7);
        FUNC_1(VAR_4, VAR_5, &VAR_8);
        FUNC_0("time: %.8f S\n", VAR_7);
        double VAR_9 = (double) VAR_8 / VAR_0;
        FUNC_0("alarm_time: %.8f S\n", VAR_9);
    }
}
