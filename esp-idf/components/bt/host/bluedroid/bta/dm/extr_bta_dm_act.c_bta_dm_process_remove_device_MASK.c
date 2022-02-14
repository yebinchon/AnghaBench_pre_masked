
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tBT_TRANSPORT ;
struct TYPE_6__ {int status; int bd_addr; } ;
struct TYPE_7__ {TYPE_1__ link_down; } ;
typedef TYPE_2__ tBTA_DM_SEC ;
struct TYPE_8__ {int (* p_sec_cback ) (int ,TYPE_2__*) ;} ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 TYPE_5__ VAR_5 ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(BD_ADDR VAR_6, tBT_TRANSPORT VAR_7)
{


    FUNC_0(0, VAR_6, VAR_3);


    FUNC_2(VAR_6, VAR_7);



    FUNC_1(VAR_6, 0);

    if (VAR_5.p_sec_cback) {
        tBTA_DM_SEC VAR_8;
        FUNC_3(VAR_8.link_down.bd_addr, VAR_6);
        VAR_8.link_down.status = VAR_4;
        if (VAR_7 == VAR_2){
            VAR_5.p_sec_cback(VAR_0, &VAR_8);
        } else {
            VAR_5.p_sec_cback(VAR_1, &VAR_8);
        }

    }
}
