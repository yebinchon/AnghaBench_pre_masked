
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_mad_send_buf {scalar_t__ mad; } ;
struct TYPE_3__ {scalar_t__ mad; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; } ;
struct cm_port {int dummy; } ;
struct TYPE_4__ {int tid; } ;
struct cm_dreq_msg {int remote_comm_id; int local_comm_id; TYPE_2__ hdr; } ;
struct cm_drep_msg {int local_comm_id; int remote_comm_id; int hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct cm_port*,struct ib_mad_recv_wc*,struct ib_mad_send_buf**) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ib_mad_send_buf*) ;
 int FUNC_3 (struct ib_mad_send_buf*,int *) ;

__attribute__((used)) static int FUNC_4(struct cm_port *VAR_1,
    struct ib_mad_recv_wc *VAR_2)
{
 struct ib_mad_send_buf *VAR_3 = ((void*)0);
 struct cm_dreq_msg *VAR_4;
 struct cm_drep_msg *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_4 = (struct cm_dreq_msg *) VAR_2->recv_buf.mad;
 VAR_5 = (struct cm_drep_msg *) VAR_3->mad;

 FUNC_1(&VAR_5->hdr, VAR_0, VAR_4->hdr.tid);
 VAR_5->remote_comm_id = VAR_4->local_comm_id;
 VAR_5->local_comm_id = VAR_4->remote_comm_id;

 VAR_6 = FUNC_3(VAR_3, ((void*)0));
 if (VAR_6)
  FUNC_2(VAR_3);

 return VAR_6;
}
