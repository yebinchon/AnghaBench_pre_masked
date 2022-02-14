
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipz_queue {int toggle_state; } ;
struct ehca_cqe {int cqe_flags; } ;


 struct ehca_cqe* FUNC_0 (struct ipz_queue*) ;

__attribute__((used)) static inline int FUNC_1(struct ipz_queue *VAR_0)
{
 struct ehca_cqe *VAR_1 = FUNC_0(VAR_0);
 return ((VAR_1->cqe_flags >> 7) == (VAR_0->toggle_state & 1));
}
