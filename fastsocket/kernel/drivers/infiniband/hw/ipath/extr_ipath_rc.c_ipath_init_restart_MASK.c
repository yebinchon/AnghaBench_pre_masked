
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_swqe {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct ipath_qp {int timerwait; TYPE_1__ ibqp; int path_mtu; int s_psn; int s_sge; int s_len; } ;
struct ipath_ibdev {size_t pending_index; int pending_lock; int * pending; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ipath_swqe*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ipath_ibdev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ipath_qp *VAR_0, struct ipath_swqe *VAR_1)
{
 struct ipath_ibdev *VAR_2;

 VAR_0->s_len = FUNC_3(&VAR_0->s_sge, VAR_1, VAR_0->s_psn,
    FUNC_0(VAR_0->path_mtu));
 VAR_2 = FUNC_6(VAR_0->ibqp.device);
 FUNC_4(&VAR_2->pending_lock);
 if (FUNC_2(&VAR_0->timerwait))
  FUNC_1(&VAR_0->timerwait,
         &VAR_2->pending[VAR_2->pending_index]);
 FUNC_5(&VAR_2->pending_lock);
}
