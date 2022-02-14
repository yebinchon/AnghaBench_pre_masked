
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_STATUS ;
struct TYPE_11__ {int bd_addr; int status; } ;
typedef TYPE_3__ tBTA_HF_CLIENT_OPEN ;
struct TYPE_9__ {int bd_addr; } ;
struct TYPE_12__ {TYPE_1__ api_open; } ;
typedef TYPE_4__ tBTA_HF_CLIENT_DATA ;
typedef int evt ;
struct TYPE_10__ {int peer_addr; } ;
struct TYPE_13__ {int (* p_cback ) (int ,TYPE_3__*) ;TYPE_2__ scb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_8__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(tBTA_HF_CLIENT_DATA *VAR_2, tBTA_HF_CLIENT_STATUS VAR_3)
{
    tBTA_HF_CLIENT_OPEN VAR_4;

    FUNC_1(&VAR_4, 0, sizeof(VAR_4));


    VAR_4.status = VAR_3;
    if (VAR_2) {

        FUNC_0(VAR_4.bd_addr, VAR_2->api_open.bd_addr);
    } else {
        FUNC_0(VAR_4.bd_addr, VAR_1.scb.peer_addr);
    }

    (*VAR_1.p_cback)(VAR_0, &VAR_4);
}
