
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ con_state; int connection_id; int con_flags; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int tBT_TRANSPORT ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4 (BD_ADDR VAR_3, tBT_TRANSPORT VAR_4, void *VAR_5, UINT8 VAR_6)
{
    tGAP_CCB *VAR_7 = (tGAP_CCB *)VAR_5;
    FUNC_2(VAR_3);
    FUNC_2 (VAR_4);

    FUNC_0 ("gap_sec_check_complete conn_state:%d, conn_flags:0x%x, status:%d",
                     VAR_7->con_state, VAR_7->con_flags, VAR_6);
    if (VAR_7->con_state == VAR_2) {
        return;
    }

    if (VAR_6 == VAR_0) {
        VAR_7->con_flags |= VAR_1;
        FUNC_3 (VAR_7);
    } else {

        FUNC_1 (VAR_7->connection_id);
    }
}
