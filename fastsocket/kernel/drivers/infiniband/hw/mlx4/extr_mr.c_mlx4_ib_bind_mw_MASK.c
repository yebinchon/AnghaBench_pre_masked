
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wr ;
struct TYPE_3__ {int rkey; int bind_info; struct ib_mw* mw; } ;
struct TYPE_4__ {TYPE_1__ bind_mw; } ;
struct ib_send_wr {TYPE_2__ wr; int send_flags; int wr_id; int opcode; } ;
struct ib_qp {int dummy; } ;
struct ib_mw_bind {int bind_info; int send_flags; int wr_id; } ;
struct ib_mw {int rkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_send_wr*,int ,int) ;
 int FUNC_2 (struct ib_qp*,struct ib_send_wr*,struct ib_send_wr**) ;

int FUNC_3(struct ib_qp *VAR_1, struct ib_mw *VAR_2,
      struct ib_mw_bind *VAR_3)
{
 struct ib_send_wr VAR_4;
 struct ib_send_wr *VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.opcode = VAR_0;
 VAR_4.wr_id = VAR_3->wr_id;
 VAR_4.send_flags = VAR_3->send_flags;
 VAR_4.wr.bind_mw.mw = VAR_2;
 VAR_4.wr.bind_mw.bind_info = VAR_3->bind_info;
 VAR_4.wr.bind_mw.rkey = FUNC_0(VAR_2->rkey);

 VAR_6 = FUNC_2(VAR_1, &VAR_4, &VAR_5);
 if (!VAR_6)
  VAR_2->rkey = VAR_4.wr.bind_mw.rkey;

 return VAR_6;
}
