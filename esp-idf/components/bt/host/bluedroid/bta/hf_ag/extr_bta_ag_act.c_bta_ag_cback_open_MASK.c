
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tBTA_AG_STATUS ;
struct TYPE_12__ {size_t conn_service; int peer_addr; int app_id; } ;
typedef TYPE_3__ tBTA_AG_SCB ;
struct TYPE_11__ {int app_id; int handle; } ;
struct TYPE_13__ {int bd_addr; int service_id; int status; TYPE_2__ hdr; } ;
typedef TYPE_4__ tBTA_AG_OPEN ;
struct TYPE_10__ {int bd_addr; } ;
struct TYPE_14__ {TYPE_1__ api_open; } ;
typedef TYPE_5__ tBTA_AG_DATA ;
typedef int tBTA_AG ;
struct TYPE_15__ {int (* p_cback ) (int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_9__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int * VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(tBTA_AG_SCB *VAR_3, tBTA_AG_DATA *VAR_4, tBTA_AG_STATUS VAR_5)
{
    tBTA_AG_OPEN VAR_6;

    VAR_6.hdr.handle = FUNC_1(VAR_3);
    VAR_6.hdr.app_id = VAR_3->app_id;
    VAR_6.status = VAR_5;
    VAR_6.service_id = VAR_2[VAR_3->conn_service];
    if (VAR_4) {

        FUNC_0(VAR_6.bd_addr, VAR_4->api_open.bd_addr);
    } else {
        FUNC_0(VAR_6.bd_addr, VAR_3->peer_addr);
    }
    (*VAR_1.p_cback)(VAR_0, (tBTA_AG *) &VAR_6);
}
