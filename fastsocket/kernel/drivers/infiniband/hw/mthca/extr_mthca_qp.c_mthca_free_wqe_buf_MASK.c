
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max; int wqe_shift; } ;
struct mthca_qp {int wrid; int mr; int is_direct; int queue; TYPE_1__ sq; scalar_t__ send_wqe_offset; } ;
struct mthca_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mthca_dev*,int ,int *,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mthca_dev *VAR_0,
          struct mthca_qp *VAR_1)
{
 FUNC_2(VAR_0, FUNC_0(VAR_1->send_wqe_offset +
           (VAR_1->sq.max << VAR_1->sq.wqe_shift)),
         &VAR_1->queue, VAR_1->is_direct, &VAR_1->mr);
 FUNC_1(VAR_1->wrid);
}
