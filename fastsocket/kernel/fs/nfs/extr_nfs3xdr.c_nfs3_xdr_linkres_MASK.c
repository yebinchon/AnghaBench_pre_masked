
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nfs3_linkres {int dir_attr; int fattr; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs3_linkres *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(*VAR_1++)) != 0)
  VAR_3 = FUNC_0(VAR_3);
 VAR_1 = FUNC_2(VAR_1, VAR_2->fattr);
 VAR_1 = FUNC_3(VAR_1, VAR_2->dir_attr);
 return VAR_3;
}
