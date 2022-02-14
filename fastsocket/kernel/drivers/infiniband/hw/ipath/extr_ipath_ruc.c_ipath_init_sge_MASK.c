
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wc ;
typedef scalar_t__ u32 ;
struct ipath_sge_state {int num_sge; int sge; int * sg_list; } ;
struct ipath_rwqe {int num_sge; int wr_id; TYPE_2__* sg_list; } ;
struct TYPE_3__ {int recv_cq; } ;
struct ipath_qp {TYPE_1__ ibqp; } ;
struct ib_wc {TYPE_1__* qp; int opcode; int status; int wr_id; } ;
struct TYPE_4__ {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ib_wc*,int) ;
 int FUNC_1 (struct ipath_qp*,int *,TYPE_2__*,int ) ;
 int FUNC_2 (struct ib_wc*,int ,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct ipath_qp *VAR_3, struct ipath_rwqe *VAR_4,
     u32 *VAR_5, struct ipath_sge_state *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct ib_wc VAR_10;

 *VAR_5 = 0;
 for (VAR_7 = VAR_8 = 0; VAR_7 < VAR_4->num_sge; VAR_7++) {
  if (VAR_4->sg_list[VAR_7].length == 0)
   continue;

  if (!FUNC_1(VAR_3, VAR_8 ? &VAR_6->sg_list[VAR_8 - 1] : &VAR_6->sge,
       &VAR_4->sg_list[VAR_7], VAR_0))
   goto bad_lkey;
  *VAR_5 += VAR_4->sg_list[VAR_7].length;
  VAR_8++;
 }
 VAR_6->num_sge = VAR_8;
 VAR_9 = 1;
 goto bail;

bad_lkey:
 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.wr_id = VAR_4->wr_id;
 VAR_10.status = VAR_1;
 VAR_10.opcode = VAR_2;
 VAR_10.qp = &VAR_3->ibqp;

 FUNC_0(FUNC_3(VAR_3->ibqp.recv_cq), &VAR_10, 1);
 VAR_9 = 0;
bail:
 return VAR_9;
}
