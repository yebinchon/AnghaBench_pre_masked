
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ command_credits; int packet_queue; int command_queue; } ;
struct TYPE_3__ {int (* fragment_and_dispatch ) (int *) ;int * (* fragment_current_packet ) () ;} ;
typedef int BT_HDR ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
    if (FUNC_0()) {

        BT_HDR *VAR_3 = VAR_1->fragment_current_packet();
        if (VAR_3 != ((void*)0)) {
            VAR_1->fragment_and_dispatch(VAR_3);
        } else {
            if (!FUNC_1(VAR_0.command_queue) &&
                    VAR_0.command_credits > 0) {
                FUNC_2(VAR_0.command_queue);
            } else if (!FUNC_1(VAR_0.packet_queue)) {
                FUNC_2(VAR_0.packet_queue);
            }
        }
    }
}
