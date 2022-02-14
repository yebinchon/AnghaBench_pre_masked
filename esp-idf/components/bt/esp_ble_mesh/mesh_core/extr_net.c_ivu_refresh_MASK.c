
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct k_work {int dummy; } ;
struct TYPE_2__ {unsigned int ivu_duration; int iv_index; int flags; int ivu_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,unsigned int,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct k_work *VAR_6)
{
    VAR_5.ivu_duration += VAR_0;

    FUNC_0("%s for %u hour%s",
           FUNC_2(VAR_5.flags, VAR_1) ?
           "IVU in Progress" : "IVU Normal mode",
           VAR_5.ivu_duration, VAR_5.ivu_duration == 1U ? "" : "s");

    if (VAR_5.ivu_duration < VAR_2) {
        if (FUNC_1(VAR_4)) {
            FUNC_5(1);
        }

        FUNC_6(&VAR_5.ivu_timer, VAR_3);
        return;
    }

    if (FUNC_2(VAR_5.flags, VAR_1)) {



        FUNC_4(VAR_5.iv_index, 0);
    } else if (FUNC_1(VAR_4)) {
        FUNC_5(1);
    }
}
