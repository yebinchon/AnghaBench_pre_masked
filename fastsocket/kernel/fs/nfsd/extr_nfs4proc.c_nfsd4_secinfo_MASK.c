
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct svc_export {int dummy; } ;
struct nfsd4_secinfo {struct svc_export* si_exp; int si_namelen; int si_name; } ;
struct nfsd4_compound_state {int current_fh; } ;
struct dentry {int * d_inode; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct svc_export*) ;
 int FUNC_2 (struct svc_fh*,int ) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,int *,int ,int ,struct svc_export**,struct dentry**) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
       struct nfsd4_secinfo *VAR_4)
{
 struct svc_fh VAR_5;
 struct svc_export *VAR_6;
 struct dentry *VAR_7;
 __be32 VAR_8;

 FUNC_2(&VAR_5, VAR_0);
 VAR_8 = FUNC_3(VAR_2, &VAR_3->current_fh,
        VAR_4->si_name, VAR_4->si_namelen,
        &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;
 if (VAR_7->d_inode == ((void*)0)) {
  FUNC_1(VAR_6);
  VAR_8 = VAR_1;
 } else
  VAR_4->si_exp = VAR_6;
 FUNC_0(VAR_7);
 return VAR_8;
}
