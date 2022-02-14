
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_client {scalar_t__ cl_exchange_flags; } ;



__attribute__((used)) static inline int
FUNC_0(struct nfs4_client *VAR_0, bool VAR_1)
{
 bool VAR_2 = (VAR_0->cl_exchange_flags != 0);
 return VAR_1 == VAR_2;
}
