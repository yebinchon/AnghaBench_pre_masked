
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uuid_le ;
typedef int u8 ;
struct vmbus_channel_debug_info {int outbound; int inbound; int clientmonitor_connectionid; int clientmonitor_latency; int clientmonitor_pending; int servermonitor_connectionid; int servermonitor_latency; int servermonitor_pending; scalar_t__ monitorid; int interface_instance; int interfacetype; int state; int relid; } ;
struct TYPE_8__ {int if_instance; int if_type; } ;
struct TYPE_9__ {scalar_t__ monitorid; TYPE_1__ offer; int child_relid; } ;
struct vmbus_channel {int outbound; int inbound; TYPE_2__ offermsg; int state; } ;
struct hv_monitor_page {TYPE_6__** parameter; int ** latency; TYPE_3__* trigger_group; } ;
struct TYPE_14__ {scalar_t__ monitor_pages; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_12__ {TYPE_4__ u; } ;
struct TYPE_13__ {TYPE_5__ connectionid; } ;
struct TYPE_10__ {int pending; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 TYPE_7__ VAR_0 ;

void FUNC_2(struct vmbus_channel *VAR_1,
         struct vmbus_channel_debug_info *VAR_2)
{
 struct hv_monitor_page *VAR_3;
 u8 VAR_4 = (u8)VAR_1->offermsg.monitorid / 32;
 u8 VAR_5 = (u8)VAR_1->offermsg.monitorid % 32;

 VAR_2->relid = VAR_1->offermsg.child_relid;
 VAR_2->state = VAR_1->state;
 FUNC_1(&VAR_2->interfacetype,
        &VAR_1->offermsg.offer.if_type, sizeof(uuid_le));
 FUNC_1(&VAR_2->interface_instance,
        &VAR_1->offermsg.offer.if_instance,
        sizeof(uuid_le));

 VAR_3 = (struct hv_monitor_page *)VAR_0.monitor_pages;

 VAR_2->monitorid = VAR_1->offermsg.monitorid;

 VAR_2->servermonitor_pending =
   VAR_3->trigger_group[VAR_4].pending;
 VAR_2->servermonitor_latency =
   VAR_3->latency[VAR_4][VAR_5];
 VAR_2->servermonitor_connectionid =
   VAR_3->parameter[VAR_4]
     [VAR_5].connectionid.u.id;

 VAR_3++;

 VAR_2->clientmonitor_pending =
   VAR_3->trigger_group[VAR_4].pending;
 VAR_2->clientmonitor_latency =
   VAR_3->latency[VAR_4][VAR_5];
 VAR_2->clientmonitor_connectionid =
   VAR_3->parameter[VAR_4]
     [VAR_5].connectionid.u.id;

 FUNC_0(&VAR_1->inbound, &VAR_2->inbound);
 FUNC_0(&VAR_1->outbound, &VAR_2->outbound);
}
