
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int transport; int peer_bda; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_STATUS ;
typedef int UINT8 ;


 int FUNC_0 (int ,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;

tGATT_STATUS FUNC_2(tGATT_TCB *VAR_6)
{
    tGATT_STATUS VAR_7 = VAR_5;
    UINT8 VAR_8 = 0;

    FUNC_0(VAR_6->peer_bda, &VAR_8, VAR_6->transport);

    if ((VAR_8 & VAR_0) && (VAR_8 & VAR_2)) {
        VAR_7 = VAR_4;
        if (VAR_8 & VAR_1) {
            VAR_7 = VAR_3;
        }
    }

    FUNC_1("gatt_get_link_encrypt_status status=0x%x", VAR_7);
    return VAR_7 ;
}
