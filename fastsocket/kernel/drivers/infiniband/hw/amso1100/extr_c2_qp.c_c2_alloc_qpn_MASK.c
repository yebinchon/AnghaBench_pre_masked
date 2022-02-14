
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c2_qp {int qpn; } ;
struct TYPE_2__ {int lock; int last; int idr; } ;
struct c2_dev {TYPE_1__ qp_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct c2_qp*,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct c2_dev *VAR_2, struct c2_qp *VAR_3)
{
 int VAR_4;

        do {
  FUNC_2(&VAR_2->qp_table.lock);
  VAR_4 = FUNC_0(&VAR_2->qp_table.idr, VAR_3,
     VAR_2->qp_table.last++, &VAR_3->qpn);
  FUNC_3(&VAR_2->qp_table.lock);
        } while ((VAR_4 == -VAR_0) &&
    FUNC_1(&VAR_2->qp_table.idr, VAR_1));
 return VAR_4;
}
