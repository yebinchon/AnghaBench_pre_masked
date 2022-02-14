
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_operation {int dummy; } ;
struct nfsd4_op {size_t opnum; } ;


 struct nfsd4_operation* VAR_0 ;

__attribute__((used)) static inline struct nfsd4_operation *FUNC_0(struct nfsd4_op *VAR_1)
{
 return &VAR_0[VAR_1->opnum];
}
