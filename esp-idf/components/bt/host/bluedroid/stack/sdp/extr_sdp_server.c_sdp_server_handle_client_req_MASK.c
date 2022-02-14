
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int timer_entry; } ;
typedef TYPE_1__ tCONN_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_10__ {int offset; int len; } ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 (int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int,int,int*,int*) ;
 int FUNC_4 (TYPE_1__*,int,int,int*,int*) ;
 int FUNC_5 (TYPE_1__*,int,int,int*,int*) ;
 int FUNC_6 (TYPE_1__*,int,int ,int ) ;

void FUNC_7 (tCONN_CB *VAR_6, BT_HDR *VAR_7)
{
    UINT8 *VAR_8 = (UINT8 *) (VAR_7 + 1) + VAR_7->offset;
    UINT8 *VAR_9 = VAR_8 + VAR_7->len;
    UINT8 VAR_10;
    UINT16 VAR_11, VAR_12;



    FUNC_2 (&VAR_6->timer_entry, VAR_0, VAR_1);


    VAR_10 = *VAR_8++;


    FUNC_0 (VAR_11, VAR_8);
    FUNC_0 (VAR_12, VAR_8);

    if ((VAR_8 + VAR_12) != VAR_9) {
        FUNC_6 (VAR_6, VAR_11, VAR_2, VAR_4);
        return;
    }

    switch (VAR_10) {
    case 128:
        FUNC_4 (VAR_6, VAR_11, VAR_12, VAR_8, VAR_9);
        break;

    case 130:
        FUNC_3 (VAR_6, VAR_11, VAR_12, VAR_8, VAR_9);
        break;

    case 129:
        FUNC_5 (VAR_6, VAR_11, VAR_12, VAR_8, VAR_9);
        break;

    default:
        FUNC_6 (VAR_6, VAR_11, VAR_3, VAR_5);
        FUNC_1 ("SDP - server got unknown PDU: 0x%x\n", VAR_10);
        break;
    }
}
