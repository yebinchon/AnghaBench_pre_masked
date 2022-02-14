
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_qp {int dummy; } ;
struct ib_send_wr {struct ib_send_wr* next; } ;
struct ib_qp {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct ipath_qp*,struct ib_send_wr*) ;
 struct ipath_qp* FUNC_2 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_3(struct ib_qp *VAR_0, struct ib_send_wr *VAR_1,
      struct ib_send_wr **VAR_2)
{
 struct ipath_qp *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0;

 for (; VAR_1; VAR_1 = VAR_1->next) {
  VAR_4 = FUNC_1(VAR_3, VAR_1);
  if (VAR_4) {
   *VAR_2 = VAR_1;
   goto bail;
  }
 }


 FUNC_0((unsigned long) VAR_3);

bail:
 return VAR_4;
}
