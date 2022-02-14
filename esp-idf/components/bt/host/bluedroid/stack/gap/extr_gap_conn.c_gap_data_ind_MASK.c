
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ con_state; int gap_handle; int (* p_callback ) (int ,int ) ;int rx_queue_size; int rx_queue; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT16 ;
struct TYPE_8__ {scalar_t__ len; } ;
typedef TYPE_2__ BT_HDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4 (UINT16 VAR_3, BT_HDR *VAR_4)
{
    tGAP_CCB *VAR_5;


    if ((VAR_5 = FUNC_1 (VAR_3)) == ((void*)0)) {
        FUNC_2 (VAR_4);
        return;
    }

    if (VAR_5->con_state == VAR_1) {
        FUNC_0(VAR_5->rx_queue, VAR_4, VAR_0);

        VAR_5->rx_queue_size += VAR_4->len;





        VAR_5->p_callback (VAR_5->gap_handle, VAR_2);
    } else {
        FUNC_2 (VAR_4);
    }
}
