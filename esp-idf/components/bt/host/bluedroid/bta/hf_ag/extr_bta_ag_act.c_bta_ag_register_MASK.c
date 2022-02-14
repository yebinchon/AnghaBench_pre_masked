
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_16__ {int app_id; int reg_services; int features; int serv_sec_mask; } ;
typedef TYPE_3__ tBTA_AG_SCB ;
struct TYPE_15__ {int app_id; int handle; } ;
struct TYPE_17__ {int status; TYPE_2__ hdr; } ;
typedef TYPE_4__ tBTA_AG_REGISTER ;
struct TYPE_14__ {int app_id; int features; int sec_mask; int services; } ;
struct TYPE_18__ {TYPE_1__ api_register; } ;
typedef TYPE_5__ tBTA_AG_DATA ;
typedef int tBTA_AG ;
struct TYPE_13__ {int (* p_cback ) (int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_12__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(tBTA_AG_SCB *VAR_3, tBTA_AG_DATA *VAR_4)
{
    tBTA_AG_REGISTER VAR_5;

    VAR_3->reg_services = VAR_4->api_register.services;
    VAR_3->serv_sec_mask = VAR_4->api_register.sec_mask;
    VAR_3->features = VAR_4->api_register.features;
    VAR_3->app_id = VAR_4->api_register.app_id;

    FUNC_0(VAR_3, VAR_4);

    FUNC_2(VAR_3, VAR_3->reg_services);

    VAR_5.hdr.handle = FUNC_1(VAR_3);
    VAR_5.hdr.app_id = VAR_3->app_id;
    VAR_5.status = VAR_1;
    (*VAR_2.p_cback)(VAR_0, (tBTA_AG *) &VAR_5);
}
