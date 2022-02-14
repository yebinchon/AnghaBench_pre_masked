
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ con_state; int * rem_dev_address; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* FUNC_1 (int ) ;

UINT8 *FUNC_2 (UINT16 VAR_1)
{
    tGAP_CCB *VAR_2 = FUNC_1 (VAR_1);

    FUNC_0 ("GAP_ConnGetRemoteAddr gap_handle = %d", VAR_1);

    if ((VAR_2) && (VAR_2->con_state > VAR_0)) {
        FUNC_0("GAP_ConnGetRemoteAddr bda :0x%02x:0x%02x:0x%02x:0x%02x:0x%02x:0x%02x\n", VAR_2->rem_dev_address[0], VAR_2->rem_dev_address[1], VAR_2->rem_dev_address[2],

                        VAR_2->rem_dev_address[3], VAR_2->rem_dev_address[4], VAR_2->rem_dev_address[5]);
        return (VAR_2->rem_dev_address);
    } else {
        FUNC_0 ("GAP_ConnGetRemoteAddr return Error ");
        return (((void*)0));
    }
}
