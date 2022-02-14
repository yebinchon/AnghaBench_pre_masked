
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_qp {int s_work; } ;
struct ib_send_wr {struct ib_send_wr* next; } ;
struct ib_qp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qib_qp*,struct ib_send_wr*,int*) ;
 struct qib_qp* FUNC_2 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_3(struct ib_qp *VAR_0, struct ib_send_wr *VAR_1,
    struct ib_send_wr **VAR_2)
{
 struct qib_qp *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0;
 int VAR_5 = 0;

 for (; VAR_1; VAR_1 = VAR_1->next) {
  VAR_4 = FUNC_1(VAR_3, VAR_1, &VAR_5);
  if (VAR_4) {
   *VAR_2 = VAR_1;
   goto bail;
  }
 }


 if (!VAR_5)
  FUNC_0(&VAR_3->s_work);

bail:
 return VAR_4;
}
