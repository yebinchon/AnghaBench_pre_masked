
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nfs3_diropres {int dir_attr; int fattr; int fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct rpc_rqst *VAR_1, __be32 *VAR_2, struct nfs3_diropres *VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_1(*VAR_2++))) {
  VAR_4 = FUNC_0(VAR_4);
 } else {
  if (!(VAR_2 = FUNC_2(VAR_2, VAR_3->fh)))
   return -VAR_0;
  VAR_2 = FUNC_3(VAR_2, VAR_3->fattr);
 }
 FUNC_3(VAR_2, VAR_3->dir_attr);
 return VAR_4;
}
