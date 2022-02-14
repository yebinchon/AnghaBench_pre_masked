
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int bd_addr; int link_type; } ;
struct TYPE_10__ {TYPE_1__ data; } ;
struct TYPE_12__ {TYPE_2__ esco; int * p_disc_cb; int * p_conn_cb; } ;
typedef TYPE_4__ tSCO_CONN ;
typedef int tBTM_SCO_CB ;
struct TYPE_13__ {int packet_types; } ;
typedef TYPE_5__ tBTM_ESCO_PARAMS ;
typedef size_t UINT16 ;
struct TYPE_11__ {TYPE_4__* sco_db; } ;
struct TYPE_14__ {TYPE_3__ sco_cb; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_2 (size_t,int ,int ,TYPE_5__*) ;
 int FUNC_3 (size_t) ;

void FUNC_4(UINT16 VAR_4, tBTM_ESCO_PARAMS *VAR_5,
                         tBTM_SCO_CB *VAR_6, tBTM_SCO_CB *VAR_7)
{
    FUNC_3(VAR_4);

}
