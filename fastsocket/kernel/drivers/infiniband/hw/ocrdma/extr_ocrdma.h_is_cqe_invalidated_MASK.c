
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_cqe {int flags_status_srcqpn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct ocrdma_cqe *VAR_1)
{
 return (FUNC_0(VAR_1->flags_status_srcqpn) &
  VAR_0) ? 1 : 0;
}
