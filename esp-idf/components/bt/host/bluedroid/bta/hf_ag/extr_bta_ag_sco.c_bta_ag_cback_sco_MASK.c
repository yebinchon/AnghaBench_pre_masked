
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int app_id; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
struct TYPE_7__ {int app_id; int handle; } ;
typedef TYPE_2__ tBTA_AG_HDR ;
typedef int tBTA_AG ;
typedef int UINT8 ;
struct TYPE_8__ {int (* p_cback ) (int ,int *) ;} ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(tBTA_AG_SCB *VAR_1, UINT8 VAR_2)
{
    tBTA_AG_HDR VAR_3;

    VAR_3.handle = FUNC_0(VAR_1);
    VAR_3.app_id = VAR_1->app_id;


    (*VAR_0.p_cback)(VAR_2, (tBTA_AG *) &VAR_3);
}
