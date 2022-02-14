
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int db_index; } ;
struct TYPE_3__ {int db_index; } ;
struct mthca_qp {TYPE_2__ rq; TYPE_1__ sq; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_dev*,int ,int ) ;
 scalar_t__ FUNC_1 (struct mthca_dev*) ;

__attribute__((used)) static void FUNC_2(struct mthca_dev *VAR_2,
          struct mthca_qp *VAR_3)
{
 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2, VAR_1, VAR_3->sq.db_index);
  FUNC_0(VAR_2, VAR_0, VAR_3->rq.db_index);
 }
}
