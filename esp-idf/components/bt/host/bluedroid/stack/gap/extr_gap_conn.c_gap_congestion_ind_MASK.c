
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ is_congested; int connection_id; int tx_queue; int gap_handle; int (* p_callback ) (int ,int ) ;} ;
typedef TYPE_1__ tGAP_CCB ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5 (UINT16 VAR_5, BOOLEAN VAR_6)
{
    tGAP_CCB *VAR_7;
    UINT16 VAR_8;
    BT_HDR *VAR_9;
    UINT8 VAR_10;

    FUNC_0 ("GAP_CONN - Rcvd L2CAP Is Congested (%d), CID: 0x%x",
                     VAR_6, VAR_5);


    if ((VAR_7 = FUNC_3 (VAR_5)) == ((void*)0)) {
        return;
    }

    VAR_7->is_congested = VAR_6;

    VAR_8 = (VAR_6) ? VAR_0 : VAR_1;
    VAR_7->p_callback (VAR_7->gap_handle, VAR_8);

    if (!VAR_6) {
        while ((VAR_9 = (BT_HDR *)FUNC_2(VAR_7->tx_queue, 0)) != ((void*)0)) {
            VAR_10 = FUNC_1 (VAR_7->connection_id, VAR_9);

            if (VAR_10 == VAR_2) {
                VAR_7->is_congested = VAR_4;
                break;
            } else if (VAR_10 != VAR_3) {
                break;
            }
        }
    }
}
