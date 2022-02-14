
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_qp_init_attr {int dummy; } ;
struct ib_qp {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ehca_qp {struct ib_qp ib_qp; } ;


 scalar_t__ FUNC_0 (struct ehca_qp*) ;
 struct ehca_qp* FUNC_1 (struct ib_pd*,struct ib_qp_init_attr*,int *,struct ib_udata*,int ) ;

struct ib_qp *FUNC_2(struct ib_pd *VAR_0,
        struct ib_qp_init_attr *VAR_1,
        struct ib_udata *VAR_2)
{
 struct ehca_qp *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, ((void*)0), VAR_2, 0);
 return FUNC_0(VAR_3) ? (struct ib_qp *)VAR_3 : &VAR_3->ib_qp;
}
