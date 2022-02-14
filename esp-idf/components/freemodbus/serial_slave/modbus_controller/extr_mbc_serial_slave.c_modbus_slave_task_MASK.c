
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mbs_event_group; } ;
typedef TYPE_1__ mb_slave_options_t ;
struct TYPE_4__ {TYPE_1__ opts; } ;
typedef int BaseType_t ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_5)
{

    FUNC_0(VAR_2 != ((void*)0));
    mb_slave_options_t* VAR_6 = &VAR_2->opts;

    FUNC_0(VAR_6 != ((void*)0));

    for (;;) {
        BaseType_t VAR_7 = FUNC_2(VAR_6->mbs_event_group,
                                                (BaseType_t)(VAR_1),
                                                VAR_3,
                                                VAR_3,
                                                VAR_4);

        if (VAR_7 & VAR_1) {
            (void)FUNC_1();

            BOOL VAR_8 = FUNC_4();
            if (VAR_8) {
                (void)FUNC_3( VAR_0 );
            }
        }
    }
}
