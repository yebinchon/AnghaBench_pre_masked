
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_flushable; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int *,int ) ;

BOOLEAN FUNC_3 (UINT16 VAR_2, BOOLEAN VAR_3)
{


    tL2C_CCB *VAR_4;


    if ((VAR_4 = FUNC_2 (((void*)0), VAR_2)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no CCB for L2CA_SetChnlFlushability, CID: %d", VAR_2);
        return (VAR_0);
    }

    VAR_4->is_flushable = VAR_3;

    FUNC_0 ("L2CA_SetChnlFlushability()  CID: 0x%04x  is_flushable: %d", VAR_2, VAR_3);



    return (VAR_1);
}
