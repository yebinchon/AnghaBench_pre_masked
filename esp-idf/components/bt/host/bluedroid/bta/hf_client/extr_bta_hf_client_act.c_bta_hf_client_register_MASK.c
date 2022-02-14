
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {int minor; int major; int service; } ;
typedef TYPE_3__ tBTA_UTL_COD ;
struct TYPE_16__ {int status; } ;
typedef TYPE_4__ tBTA_HF_CLIENT_REGISTER ;
struct TYPE_14__ {int features; int sec_mask; } ;
struct TYPE_17__ {TYPE_2__ api_register; } ;
typedef TYPE_5__ tBTA_HF_CLIENT_DATA ;
typedef int evt ;
struct TYPE_13__ {int features; int serv_sec_mask; } ;
struct TYPE_12__ {int (* p_cback ) (int ,TYPE_4__*) ;TYPE_1__ scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 TYPE_11__ VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;

void FUNC_7(tBTA_HF_CLIENT_DATA *VAR_7)
{
    tBTA_HF_CLIENT_REGISTER VAR_8;
    tBTA_UTL_COD VAR_9;

    FUNC_4(&VAR_8, 0, sizeof(VAR_8));


    FUNC_2();

    VAR_6.scb.serv_sec_mask = VAR_7->api_register.sec_mask;
    VAR_6.scb.features = VAR_7->api_register.features;


    FUNC_0();


    FUNC_1(VAR_7);


    VAR_9.service = VAR_5;
    VAR_9.major = VAR_3;
    VAR_9.minor = VAR_4;
    FUNC_6(&VAR_9, VAR_2);


    FUNC_3();


    VAR_8.status = VAR_1;
    (*VAR_6.p_cback)(VAR_0, &VAR_8);
}
