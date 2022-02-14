
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {int (* p_sco_cb ) (int ,int ,int ,int ) ;} ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3(UINT8 VAR_2, UINT8 VAR_3, BD_ADDR VAR_4)
{
    UINT8 VAR_5;
    FUNC_1(VAR_2);

    if ((VAR_1.p_sco_cb)) {
        VAR_5 = FUNC_0();
        VAR_1.p_sco_cb(VAR_0, VAR_5, VAR_3, VAR_4);
    }
}
