
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ db_index; int db; } ;
struct TYPE_3__ {scalar_t__ db_index; int db; } ;
struct mthca_qp {TYPE_2__ rq; TYPE_1__ sq; int qpn; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct mthca_dev*,int ,int ,int *) ;
 int FUNC_1 (struct mthca_dev*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mthca_dev*) ;

__attribute__((used)) static int FUNC_3(struct mthca_dev *VAR_3,
          struct mthca_qp *VAR_4)
{
 if (FUNC_2(VAR_3)) {
  VAR_4->rq.db_index = FUNC_0(VAR_3, VAR_1,
       VAR_4->qpn, &VAR_4->rq.db);
  if (VAR_4->rq.db_index < 0)
   return -VAR_0;

  VAR_4->sq.db_index = FUNC_0(VAR_3, VAR_2,
       VAR_4->qpn, &VAR_4->sq.db);
  if (VAR_4->sq.db_index < 0) {
   FUNC_1(VAR_3, VAR_1, VAR_4->rq.db_index);
   return -VAR_0;
  }
 }

 return 0;
}
