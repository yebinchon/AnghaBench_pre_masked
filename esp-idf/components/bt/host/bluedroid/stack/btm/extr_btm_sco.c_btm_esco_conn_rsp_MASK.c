
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ link_type; } ;
struct TYPE_12__ {size_t packet_types; int retrans_effort; int voice_contfmt; int max_latency; int rx_bw; int tx_bw; } ;
struct TYPE_10__ {TYPE_2__ data; TYPE_5__ setup; } ;
struct TYPE_11__ {scalar_t__ state; TYPE_3__ esco; } ;
typedef TYPE_4__ tSCO_CONN ;
typedef TYPE_5__ tBTM_ESCO_PARAMS ;
typedef scalar_t__ UINT8 ;
typedef size_t UINT16 ;
struct TYPE_8__ {TYPE_5__ def_esco_parms; int esco_supported; TYPE_4__* sco_db; } ;
struct TYPE_13__ {size_t btm_sco_pkt_types_supported; TYPE_1__ sco_cb; } ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_7__ VAR_10 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,size_t) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4 (UINT16 VAR_11, UINT8 VAR_12, BD_ADDR VAR_13,
                               tBTM_ESCO_PARAMS *VAR_14)
{
}
