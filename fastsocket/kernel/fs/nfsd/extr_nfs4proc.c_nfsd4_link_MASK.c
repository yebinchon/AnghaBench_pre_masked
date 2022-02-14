
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_link {int li_cinfo; int li_namelen; int li_name; } ;
struct TYPE_2__ {int fh_dentry; } ;
struct nfsd4_compound_state {int current_fh; TYPE_1__ save_fh; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*,int *,int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_1, struct nfsd4_compound_state *VAR_2,
    struct nfsd4_link *VAR_3)
{
 __be32 VAR_4 = VAR_0;

 if (!VAR_2->save_fh.fh_dentry)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_1, &VAR_2->current_fh,
      VAR_3->li_name, VAR_3->li_namelen, &VAR_2->save_fh);
 if (!VAR_4)
  FUNC_1(&VAR_3->li_cinfo, &VAR_2->current_fh);
 return VAR_4;
}
