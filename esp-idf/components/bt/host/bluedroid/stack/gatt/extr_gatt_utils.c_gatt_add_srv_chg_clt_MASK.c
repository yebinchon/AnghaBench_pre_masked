
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tGATTS_SRV_CHG ;
typedef int UINT16 ;
struct TYPE_2__ {int srv_chg_clt_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;

tGATTS_SRV_CHG *FUNC_4(tGATTS_SRV_CHG *VAR_2)
{
    tGATTS_SRV_CHG *VAR_3;
    FUNC_0 ("gatt_add_srv_chg_clt");
    if ((VAR_3 = (tGATTS_SRV_CHG *)FUNC_3((UINT16)sizeof(tGATTS_SRV_CHG))) != ((void*)0)) {
        FUNC_0 ("enqueue a srv chg client");
        FUNC_2(VAR_3, VAR_2, sizeof(tGATTS_SRV_CHG));
    FUNC_1(VAR_1.srv_chg_clt_q, VAR_3, VAR_0);
    }

    return VAR_3;
}
