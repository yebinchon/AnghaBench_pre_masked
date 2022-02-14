
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int dummy; } ;
struct nfs_fsstat {int afiles; int ffiles; int tfiles; int abytes; int fbytes; int tbytes; int fattr; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_fsstat *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(*VAR_1++);

 VAR_1 = FUNC_3(VAR_1, VAR_2->fattr);
 if (VAR_3 != 0)
  return FUNC_0(VAR_3);

 VAR_1 = FUNC_2(VAR_1, &VAR_2->tbytes);
 VAR_1 = FUNC_2(VAR_1, &VAR_2->fbytes);
 VAR_1 = FUNC_2(VAR_1, &VAR_2->abytes);
 VAR_1 = FUNC_2(VAR_1, &VAR_2->tfiles);
 VAR_1 = FUNC_2(VAR_1, &VAR_2->ffiles);
 VAR_1 = FUNC_2(VAR_1, &VAR_2->afiles);


 return 0;
}
