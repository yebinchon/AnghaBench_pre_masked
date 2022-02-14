
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gap_handle; int (* p_callback ) (int ,int ) ;} ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5 (UINT16 VAR_1, BOOLEAN VAR_2)
{
    tGAP_CCB *VAR_3;

    FUNC_0 ("GAP_CONN - Rcvd L2CAP disc, CID: 0x%x", VAR_1);


    if ((VAR_3 = FUNC_2 (VAR_1)) == ((void*)0)) {
        return;
    }

    if (VAR_2) {
        FUNC_1 (VAR_1);
    }

    VAR_3->p_callback (VAR_3->gap_handle, VAR_0);
    FUNC_3 (VAR_3);
}
