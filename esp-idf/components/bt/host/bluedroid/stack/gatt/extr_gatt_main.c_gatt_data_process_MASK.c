
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tGATT_TCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {int offset; scalar_t__ len; } ;
typedef TYPE_1__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int *,int,scalar_t__,int*) ;
 int FUNC_3 (int *,int ,int,int ,int ) ;
 int FUNC_4 (int *,int,scalar_t__,int*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7 (tGATT_TCB *VAR_6, BT_HDR *VAR_7)
{
    UINT8 *VAR_8 = (UINT8 *)(VAR_7 + 1) + VAR_7->offset;
    UINT8 VAR_9, VAR_10;

    UINT16 VAR_11;



    if (VAR_7->len > 0) {

        VAR_11 = VAR_7->len - 1;

        FUNC_1(VAR_9, VAR_8);


        VAR_10 = VAR_9 & (~VAR_5);

        if (VAR_10 < VAR_2) {
            if (VAR_9 == VAR_4) {

                FUNC_5(VAR_6, VAR_7);

            } else {

                if ((VAR_9 % 2) == 0) {

                    FUNC_4 (VAR_6, VAR_9, VAR_11, VAR_8);

                } else {

                    FUNC_2 (VAR_6, VAR_9, VAR_11, VAR_8);

                }
            }
        } else {
            if (VAR_9 & VAR_1) {
                FUNC_0 ("ATT - Rcvd L2CAP data, unknown cmd: 0x%x\n", VAR_9);
            } else {
                FUNC_0 ("ATT - Rcvd L2CAP data, unknown req: 0x%x\n", VAR_9);
                FUNC_3 (VAR_6, VAR_3, VAR_9, 0, VAR_0);
            }
        }
    } else {
        FUNC_0 ("invalid data length, ignore\n");
    }

    FUNC_6 (VAR_7);
}
