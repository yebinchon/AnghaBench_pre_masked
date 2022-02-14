
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {scalar_t__ qp_type; } ;
struct ocrdma_cqe {int flags_status_srcqpn; } ;
struct ib_wc {scalar_t__ wc_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocrdma_qp*,struct ocrdma_cqe*,struct ib_wc*,int*,int*,int) ;
 int FUNC_2 (struct ocrdma_qp*,struct ocrdma_cqe*,struct ib_wc*) ;

__attribute__((used)) static bool FUNC_3(struct ocrdma_qp *VAR_7, struct ocrdma_cqe *VAR_8,
        struct ib_wc *VAR_9, bool *VAR_10, bool *VAR_11)
{
 int VAR_12;
 bool VAR_13 = 0;

 VAR_9->wc_flags = 0;
 if (VAR_7->qp_type == VAR_1 || VAR_7->qp_type == VAR_0)
  VAR_12 = (FUNC_0(VAR_8->flags_status_srcqpn) &
     VAR_5) >>
     VAR_6;
 else
  VAR_12 = (FUNC_0(VAR_8->flags_status_srcqpn) &
        VAR_2) >> VAR_3;

 if (VAR_12 == VAR_4) {
  *VAR_10 = 1;
  FUNC_2(VAR_7, VAR_8, VAR_9);
 } else {
  VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
           VAR_12);
 }
 return VAR_13;
}
