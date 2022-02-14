
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_1__ enable; } ;
typedef TYPE_2__ tBTA_DM_SEC ;
typedef int UINT8 ;
struct TYPE_7__ {int (* p_sec_cback ) (int ,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(UINT8 *VAR_3)
{
    tBTA_DM_SEC VAR_4;
    FUNC_0(VAR_3);

    VAR_4.enable.status = VAR_1;

    if (VAR_2.p_sec_cback) {
        VAR_2.p_sec_cback(VAR_0, &VAR_4);
    }

}
