
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kwqe {int dummy; } ;
struct TYPE_3__ {int flags; int op_code; } ;
struct fcoe_kwqe_conn_destroy {int conn_id; int context_id; TYPE_1__ hdr; } ;
struct bnx2fc_rport {int fcoe_conn_id; int context_id; } ;
struct bnx2fc_hba {TYPE_2__* cnic; } ;
struct TYPE_4__ {int (* submit_kwqes ) (TYPE_2__*,struct kwqe**,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fcoe_kwqe_conn_destroy*,int,int) ;
 int FUNC_1 (TYPE_2__*,struct kwqe**,int) ;

int FUNC_2(struct bnx2fc_hba *VAR_3,
     struct bnx2fc_rport *VAR_4)
{
 struct fcoe_kwqe_conn_destroy VAR_5;
 struct kwqe *VAR_6[2];
 int VAR_7 = 1;
 int VAR_8 = 0;

 FUNC_0(&VAR_5, 0x00, sizeof(struct fcoe_kwqe_conn_destroy));
 VAR_5.hdr.op_code = VAR_2;
 VAR_5.hdr.flags =
  (VAR_1 << VAR_0);

 VAR_5.context_id = VAR_4->context_id;
 VAR_5.conn_id = VAR_4->fcoe_conn_id;

 VAR_6[0] = (struct kwqe *) &VAR_5;

 if (VAR_3->cnic && VAR_3->cnic->submit_kwqes)
  VAR_8 = VAR_3->cnic->submit_kwqes(VAR_3->cnic, VAR_6, VAR_7);

 return VAR_8;
}
