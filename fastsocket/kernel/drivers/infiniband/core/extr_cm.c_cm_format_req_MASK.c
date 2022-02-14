
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ib_sa_path_rec {int hop_limit; int packet_life_time; int sl; int traffic_class; int rate; int flow_label; int dgid; int sgid; void* dlid; void* slid; int mtu; int pkey; } ;
struct ib_cm_req_param {scalar_t__ qp_type; scalar_t__ private_data_len; scalar_t__ private_data; int srq; int rnr_retry_count; int retry_count; int responder_resources; int max_cm_retries; struct ib_sa_path_rec* primary_path; int local_cm_response_timeout; int starting_psn; int flow_control; int remote_cm_response_timeout; int initiator_depth; int qp_num; int service_id; struct ib_sa_path_rec* alternate_path; } ;
struct cm_req_msg {int primary_hop_limit; int alt_hop_limit; int private_data; int alt_traffic_class; int alt_remote_gid; int alt_local_gid; void* alt_remote_lid; void* alt_local_lid; int primary_traffic_class; int primary_remote_gid; int primary_local_gid; void* primary_remote_lid; void* primary_local_lid; int pkey; int local_ca_guid; int service_id; int local_comm_id; int hdr; } ;
struct TYPE_10__ {TYPE_4__* port; } ;
struct TYPE_7__ {TYPE_1__* device; int local_id; } ;
struct cm_id_private {TYPE_5__ av; TYPE_2__ id; } ;
struct TYPE_9__ {TYPE_3__* cm_dev; } ;
struct TYPE_8__ {int ack_delay; } ;
struct TYPE_6__ {int node_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cm_id_private*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct cm_req_msg*,int ) ;
 int FUNC_4 (struct cm_req_msg*,int ) ;
 int FUNC_5 (struct cm_req_msg*,int ) ;
 int FUNC_6 (struct cm_req_msg*,int ) ;
 int FUNC_7 (struct cm_req_msg*,int) ;
 int FUNC_8 (struct cm_req_msg*,int ) ;
 int FUNC_9 (struct cm_req_msg*,int ) ;
 int FUNC_10 (struct cm_req_msg*,int ) ;
 int FUNC_11 (struct cm_req_msg*,int ) ;
 int FUNC_12 (struct cm_req_msg*,int ) ;
 int FUNC_13 (struct cm_req_msg*,int ) ;
 int FUNC_14 (struct cm_req_msg*,int ) ;
 int FUNC_15 (struct cm_req_msg*,int ) ;
 int FUNC_16 (struct cm_req_msg*,int ) ;
 int FUNC_17 (struct cm_req_msg*,int ) ;
 int FUNC_18 (struct cm_req_msg*,int) ;
 int FUNC_19 (struct cm_req_msg*,scalar_t__) ;
 int FUNC_20 (struct cm_req_msg*,int ) ;
 int FUNC_21 (struct cm_req_msg*,int ) ;
 int FUNC_22 (struct cm_req_msg*,int ) ;
 int FUNC_23 (struct cm_req_msg*,int ) ;
 int FUNC_24 (struct cm_req_msg*,int ) ;
 int FUNC_25 (struct cm_req_msg*,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_28(struct cm_req_msg *VAR_4,
     struct cm_id_private *VAR_5,
     struct ib_cm_req_param *VAR_6)
{
 struct ib_sa_path_rec *VAR_7 = VAR_6->primary_path;
 struct ib_sa_path_rec *VAR_8 = VAR_6->alternate_path;

 FUNC_2(&VAR_4->hdr, VAR_1,
     FUNC_1(VAR_5, VAR_0));

 VAR_4->local_comm_id = VAR_5->id.local_id;
 VAR_4->service_id = VAR_6->service_id;
 VAR_4->local_ca_guid = VAR_5->id.device->node_guid;
 FUNC_10(VAR_4, FUNC_26(VAR_6->qp_num));
 FUNC_9(VAR_4, VAR_6->initiator_depth);
 FUNC_20(VAR_4,
           VAR_6->remote_cm_response_timeout);
 FUNC_19(VAR_4, VAR_6->qp_type);
 FUNC_8(VAR_4, VAR_6->flow_control);
 FUNC_25(VAR_4, FUNC_26(VAR_6->starting_psn));
 FUNC_11(VAR_4,
          VAR_6->local_cm_response_timeout);
 VAR_4->pkey = VAR_6->primary_path->pkey;
 FUNC_13(VAR_4, VAR_6->primary_path->mtu);
 FUNC_12(VAR_4, VAR_6->max_cm_retries);

 if (VAR_6->qp_type != VAR_3) {
  FUNC_21(VAR_4, VAR_6->responder_resources);
  FUNC_22(VAR_4, VAR_6->retry_count);
  FUNC_23(VAR_4, VAR_6->rnr_retry_count);
  FUNC_24(VAR_4, VAR_6->srq);
 }

 if (VAR_7->hop_limit <= 1) {
  VAR_4->primary_local_lid = VAR_7->slid;
  VAR_4->primary_remote_lid = VAR_7->dlid;
 } else {

  VAR_4->primary_local_lid = VAR_2;
  VAR_4->primary_remote_lid = VAR_2;
 }
 VAR_4->primary_local_gid = VAR_7->sgid;
 VAR_4->primary_remote_gid = VAR_7->dgid;
 FUNC_14(VAR_4, VAR_7->flow_label);
 FUNC_16(VAR_4, VAR_7->rate);
 VAR_4->primary_traffic_class = VAR_7->traffic_class;
 VAR_4->primary_hop_limit = VAR_7->hop_limit;
 FUNC_17(VAR_4, VAR_7->sl);
 FUNC_18(VAR_4, (VAR_7->hop_limit <= 1));
 FUNC_15(VAR_4,
  FUNC_0(VAR_5->av.port->cm_dev->ack_delay,
          VAR_7->packet_life_time));

 if (VAR_8) {
  if (VAR_8->hop_limit <= 1) {
   VAR_4->alt_local_lid = VAR_8->slid;
   VAR_4->alt_remote_lid = VAR_8->dlid;
  } else {
   VAR_4->alt_local_lid = VAR_2;
   VAR_4->alt_remote_lid = VAR_2;
  }
  VAR_4->alt_local_gid = VAR_8->sgid;
  VAR_4->alt_remote_gid = VAR_8->dgid;
  FUNC_3(VAR_4,
       VAR_8->flow_label);
  FUNC_5(VAR_4, VAR_8->rate);
  VAR_4->alt_traffic_class = VAR_8->traffic_class;
  VAR_4->alt_hop_limit = VAR_8->hop_limit;
  FUNC_6(VAR_4, VAR_8->sl);
  FUNC_7(VAR_4, (VAR_8->hop_limit <= 1));
  FUNC_4(VAR_4,
   FUNC_0(VAR_5->av.port->cm_dev->ack_delay,
           VAR_8->packet_life_time));
 }

 if (VAR_6->private_data && VAR_6->private_data_len)
  FUNC_27(VAR_4->private_data, VAR_6->private_data,
         VAR_6->private_data_len);
}
