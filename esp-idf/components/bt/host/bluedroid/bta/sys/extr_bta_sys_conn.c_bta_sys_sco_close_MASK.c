
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_2__ {int (* ppm_cb ) (int ,scalar_t__,scalar_t__,int ) ;int (* p_sco_cb ) (int ,scalar_t__,scalar_t__,int ) ;} ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ) ;

void FUNC_3(UINT8 VAR_3, UINT8 VAR_4, BD_ADDR VAR_5)
{
    UINT8 VAR_6;

    if ((VAR_3 != VAR_0) && (VAR_2.p_sco_cb)) {
        VAR_6 = FUNC_0();
        VAR_2.p_sco_cb(VAR_1, VAR_6, VAR_4, VAR_5);
    }

    if (VAR_2.ppm_cb) {
        VAR_2.ppm_cb(VAR_1, VAR_3, VAR_4, VAR_5);
    }
}
