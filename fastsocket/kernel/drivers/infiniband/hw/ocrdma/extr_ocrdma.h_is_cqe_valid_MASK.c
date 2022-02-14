
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_cqe {int flags_status_srcqpn; } ;
struct ocrdma_cq {int phase; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct ocrdma_cq *VAR_1, struct ocrdma_cqe *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_0(VAR_2->flags_status_srcqpn) & VAR_0;
 return ((VAR_3 == VAR_1->phase) ? 1 : 0);
}
