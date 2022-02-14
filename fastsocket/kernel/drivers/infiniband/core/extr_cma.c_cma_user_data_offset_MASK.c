
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int dummy; } ;
struct cma_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rdma_id_private*) ;

__attribute__((used)) static inline int FUNC_1(struct rdma_id_private *VAR_1)
{
 return FUNC_0(VAR_1) == VAR_0 ? 0 : sizeof(struct cma_hdr);
}
