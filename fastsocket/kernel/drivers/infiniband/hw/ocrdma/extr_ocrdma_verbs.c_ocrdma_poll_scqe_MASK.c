
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {int dummy; } ;
struct ocrdma_cqe {int flags_status_srcqpn; } ;
struct ib_wc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocrdma_qp*,struct ocrdma_cqe*,struct ib_wc*,int*,int*) ;
 int FUNC_2 (struct ocrdma_qp*,struct ocrdma_cqe*,struct ib_wc*,int*) ;

__attribute__((used)) static bool FUNC_3(struct ocrdma_qp *VAR_3, struct ocrdma_cqe *VAR_4,
        struct ib_wc *VAR_5, bool *VAR_6, bool *VAR_7)
{
 int VAR_8;
 bool VAR_9;

 VAR_8 = (FUNC_0(VAR_4->flags_status_srcqpn) &
  VAR_0) >> VAR_1;

 if (VAR_8 == VAR_2)
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 else
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 return VAR_9;
}
