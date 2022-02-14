
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_sa_path_rec {int packet_life_time; int sl; int rate; int hop_limit; int traffic_class; int flow_label; int dgid; int sgid; int dlid; int slid; } ;
struct cm_lap_msg {int private_data; int alt_hop_limit; int alt_remote_gid; int alt_local_gid; int alt_remote_lid; int alt_local_lid; int remote_comm_id; int local_comm_id; int hdr; } ;
struct TYPE_8__ {TYPE_3__* port; } ;
struct TYPE_5__ {int remote_id; int local_id; } ;
struct cm_id_private {TYPE_4__ av; int remote_qpn; TYPE_1__ id; } ;
struct TYPE_7__ {TYPE_2__* cm_dev; } ;
struct TYPE_6__ {int ack_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cm_id_private*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct cm_lap_msg*,int ) ;
 int FUNC_4 (struct cm_lap_msg*,int ) ;
 int FUNC_5 (struct cm_lap_msg*,int ) ;
 int FUNC_6 (struct cm_lap_msg*,int ) ;
 int FUNC_7 (struct cm_lap_msg*,int) ;
 int FUNC_8 (struct cm_lap_msg*,int ) ;
 int FUNC_9 (struct cm_lap_msg*,int) ;
 int FUNC_10 (struct cm_lap_msg*,int ) ;
 int FUNC_11 (int ,void const*,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct cm_lap_msg *VAR_2,
     struct cm_id_private *VAR_3,
     struct ib_sa_path_rec *VAR_4,
     const void *VAR_5,
     u8 VAR_6)
{
 FUNC_2(&VAR_2->hdr, VAR_0,
     FUNC_1(VAR_3, VAR_1));
 VAR_2->local_comm_id = VAR_3->id.local_id;
 VAR_2->remote_comm_id = VAR_3->id.remote_id;
 FUNC_6(VAR_2, VAR_3->remote_qpn);

 FUNC_7(VAR_2, 0x1F);
 VAR_2->alt_local_lid = VAR_4->slid;
 VAR_2->alt_remote_lid = VAR_4->dlid;
 VAR_2->alt_local_gid = VAR_4->sgid;
 VAR_2->alt_remote_gid = VAR_4->dgid;
 FUNC_3(VAR_2, VAR_4->flow_label);
 FUNC_10(VAR_2, VAR_4->traffic_class);
 VAR_2->alt_hop_limit = VAR_4->hop_limit;
 FUNC_5(VAR_2, VAR_4->rate);
 FUNC_8(VAR_2, VAR_4->sl);
 FUNC_9(VAR_2, 1);
 FUNC_4(VAR_2,
  FUNC_0(VAR_3->av.port->cm_dev->ack_delay,
          VAR_4->packet_life_time));

 if (VAR_5 && VAR_6)
  FUNC_11(VAR_2->private_data, VAR_5, VAR_6);
}
