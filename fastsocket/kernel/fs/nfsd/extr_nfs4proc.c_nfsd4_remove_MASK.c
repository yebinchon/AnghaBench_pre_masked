
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd4_remove {int rm_cinfo; int rm_namelen; int rm_name; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct svc_rqst*,int *,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4,
      struct nfsd4_remove *VAR_5)
{
 __be32 VAR_6;

 if (FUNC_1())
  return VAR_0;
 VAR_6 = FUNC_2(VAR_3, &VAR_4->current_fh, 0,
        VAR_5->rm_name, VAR_5->rm_namelen);
 if (VAR_6 == VAR_2)
  return VAR_1;
 if (!VAR_6) {
  FUNC_0(&VAR_4->current_fh);
  FUNC_3(&VAR_5->rm_cinfo, &VAR_4->current_fh);
 }
 return VAR_6;
}
