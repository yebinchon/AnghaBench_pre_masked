
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int connection_id; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_6__ {int offset; int len; } ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*) ;

void FUNC_8 (tCONN_CB *VAR_3, UINT16 VAR_4, UINT16 VAR_5, char *VAR_6)
{
    UINT8 *VAR_7, *VAR_8, *VAR_9;
    UINT16 VAR_10;
    BT_HDR *VAR_11;


    FUNC_3 ("SDP - sdpu_build_n_send_error  code: 0x%x  CID: 0x%x\n",
                       VAR_5, VAR_3->connection_id);


    if ((VAR_11 = (BT_HDR *)FUNC_6(VAR_1)) == ((void*)0)) {
        FUNC_2 ("SDP - no buf for err msg\n");
        return;
    }
    VAR_11->offset = VAR_0;
    VAR_7 = VAR_8 = (UINT8 *)(VAR_11 + 1) + VAR_0;

    FUNC_5 (VAR_7, VAR_2);
    FUNC_4 (VAR_7, VAR_4);


    VAR_9 = VAR_7;
    VAR_7 += 2;

    FUNC_4 (VAR_7, VAR_5);


    if (VAR_6) {
        FUNC_0 (VAR_7, VAR_6, (int) FUNC_7 (VAR_6));
    }


    VAR_10 = VAR_7 - VAR_9 - 2;
    FUNC_4 (VAR_9, VAR_10);


    VAR_11->len = VAR_7 - VAR_8;



    FUNC_1 (VAR_3->connection_id, VAR_11);
}
