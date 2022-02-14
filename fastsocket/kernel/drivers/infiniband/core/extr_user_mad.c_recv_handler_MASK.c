
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int grh_present; void* flow_label; int gid; int traffic_class; int hop_limit; int gid_index; int pkey_index; int path_bits; int sl; int lid; void* qpn; scalar_t__ length; scalar_t__ status; } ;
struct TYPE_8__ {TYPE_2__ hdr; } ;
struct ib_umad_packet {TYPE_3__ mad; struct ib_mad_recv_wc* recv_wc; scalar_t__ length; } ;
struct ib_umad_file {int dummy; } ;
struct TYPE_6__ {int grh; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; TYPE_5__* wc; scalar_t__ mad_len; } ;
struct ib_mad_agent {int port_num; int device; struct ib_umad_file* context; } ;
struct TYPE_9__ {int flow_label; int dgid; int traffic_class; int hop_limit; int sgid_index; } ;
struct ib_ah_attr {TYPE_4__ grh; } ;
struct TYPE_10__ {scalar_t__ status; int wc_flags; int pkey_index; int dlid_path_bits; int sl; int slid; int src_qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ib_umad_file*) ;
 int FUNC_3 (struct ib_mad_recv_wc*) ;
 int FUNC_4 (int ,int ,TYPE_5__*,int ,struct ib_ah_attr*) ;
 int FUNC_5 (struct ib_umad_packet*) ;
 struct ib_umad_packet* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *,int) ;
 scalar_t__ FUNC_8 (struct ib_umad_file*,struct ib_mad_agent*,struct ib_umad_packet*) ;

__attribute__((used)) static void FUNC_9(struct ib_mad_agent *VAR_3,
    struct ib_mad_recv_wc *VAR_4)
{
 struct ib_umad_file *VAR_5 = VAR_3->context;
 struct ib_umad_packet *VAR_6;

 if (VAR_4->wc->status != VAR_2)
  goto err1;

 VAR_6 = FUNC_6(sizeof *VAR_6, VAR_0);
 if (!VAR_6)
  goto err1;

 VAR_6->length = VAR_4->mad_len;
 VAR_6->recv_wc = VAR_4;

 VAR_6->mad.hdr.status = 0;
 VAR_6->mad.hdr.length = FUNC_2(VAR_5) + VAR_4->mad_len;
 VAR_6->mad.hdr.qpn = FUNC_1(VAR_4->wc->src_qp);
 VAR_6->mad.hdr.lid = FUNC_0(VAR_4->wc->slid);
 VAR_6->mad.hdr.sl = VAR_4->wc->sl;
 VAR_6->mad.hdr.path_bits = VAR_4->wc->dlid_path_bits;
 VAR_6->mad.hdr.pkey_index = VAR_4->wc->pkey_index;
 VAR_6->mad.hdr.grh_present = !!(VAR_4->wc->wc_flags & VAR_1);
 if (VAR_6->mad.hdr.grh_present) {
  struct ib_ah_attr VAR_7;

  FUNC_4(VAR_3->device, VAR_3->port_num,
       VAR_4->wc, VAR_4->recv_buf.grh,
       &VAR_7);

  VAR_6->mad.hdr.gid_index = VAR_7.grh.sgid_index;
  VAR_6->mad.hdr.hop_limit = VAR_7.grh.hop_limit;
  VAR_6->mad.hdr.traffic_class = VAR_7.grh.traffic_class;
  FUNC_7(VAR_6->mad.hdr.gid, &VAR_7.grh.dgid, 16);
  VAR_6->mad.hdr.flow_label = FUNC_1(VAR_7.grh.flow_label);
 }

 if (FUNC_8(VAR_5, VAR_3, VAR_6))
  goto err2;
 return;

err2:
 FUNC_5(VAR_6);
err1:
 FUNC_3(VAR_4);
}
