
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uuid_le ;
struct TYPE_8__ {int bytes_avail_towrite; int bytes_avail_toread; int current_write_index; int current_read_index; int current_interrupt_mask; } ;
struct TYPE_6__ {int bytes_avail_towrite; int bytes_avail_toread; int current_write_index; int current_read_index; int current_interrupt_mask; } ;
struct vmbus_channel_debug_info {TYPE_4__ outbound; TYPE_2__ inbound; int clientmonitor_connectionid; int clientmonitor_latency; int clientmonitor_pending; int servermonitor_connectionid; int servermonitor_latency; int servermonitor_pending; int monitorid; int interface_instance; int interfacetype; int state; int relid; } ;
struct TYPE_7__ {int bytes_avail_towrite; int bytes_avail_toread; int write_idx; int read_idx; int int_mask; } ;
struct TYPE_5__ {int bytes_avail_towrite; int bytes_avail_toread; int write_idx; int read_idx; int int_mask; } ;
struct hv_device_info {TYPE_3__ outbound; TYPE_1__ inbound; int client_monitor_conn_id; int client_monitor_latency; int client_monitor_pending; int server_monitor_conn_id; int server_monitor_latency; int server_monitor_pending; int monitor_id; int chn_instance; int chn_type; int chn_state; int chn_id; } ;
struct hv_device {int channel; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,struct vmbus_channel_debug_info*) ;

__attribute__((used)) static void FUNC_2(struct hv_device *VAR_0,
        struct hv_device_info *VAR_1)
{
 struct vmbus_channel_debug_info VAR_2;

 if (!VAR_0->channel)
  return;

 FUNC_1(VAR_0->channel, &VAR_2);

 VAR_1->chn_id = VAR_2.relid;
 VAR_1->chn_state = VAR_2.state;
 FUNC_0(&VAR_1->chn_type, &VAR_2.interfacetype,
        sizeof(uuid_le));
 FUNC_0(&VAR_1->chn_instance, &VAR_2.interface_instance,
        sizeof(uuid_le));

 VAR_1->monitor_id = VAR_2.monitorid;

 VAR_1->server_monitor_pending = VAR_2.servermonitor_pending;
 VAR_1->server_monitor_latency = VAR_2.servermonitor_latency;
 VAR_1->server_monitor_conn_id = VAR_2.servermonitor_connectionid;

 VAR_1->client_monitor_pending = VAR_2.clientmonitor_pending;
 VAR_1->client_monitor_latency = VAR_2.clientmonitor_latency;
 VAR_1->client_monitor_conn_id = VAR_2.clientmonitor_connectionid;

 VAR_1->inbound.int_mask = VAR_2.inbound.current_interrupt_mask;
 VAR_1->inbound.read_idx = VAR_2.inbound.current_read_index;
 VAR_1->inbound.write_idx = VAR_2.inbound.current_write_index;
 VAR_1->inbound.bytes_avail_toread =
  VAR_2.inbound.bytes_avail_toread;
 VAR_1->inbound.bytes_avail_towrite =
  VAR_2.inbound.bytes_avail_towrite;

 VAR_1->outbound.int_mask =
  VAR_2.outbound.current_interrupt_mask;
 VAR_1->outbound.read_idx = VAR_2.outbound.current_read_index;
 VAR_1->outbound.write_idx = VAR_2.outbound.current_write_index;
 VAR_1->outbound.bytes_avail_toread =
  VAR_2.outbound.bytes_avail_toread;
 VAR_1->outbound.bytes_avail_towrite =
  VAR_2.outbound.bytes_avail_towrite;
}
