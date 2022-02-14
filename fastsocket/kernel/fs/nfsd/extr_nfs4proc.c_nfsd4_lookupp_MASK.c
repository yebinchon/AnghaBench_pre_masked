
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {scalar_t__ fh_dentry; } ;
struct TYPE_3__ {scalar_t__ fh_dentry; } ;
struct nfsd4_compound_state {TYPE_1__ current_fh; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*) ;
 int FUNC_1 (struct svc_fh*,int ) ;
 int FUNC_2 (struct svc_fh*) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,TYPE_1__*,char*,int,TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
       void *VAR_4)
{
 struct svc_fh VAR_5;
 __be32 VAR_6;

 FUNC_1(&VAR_5, VAR_0);
 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_5.fh_dentry == VAR_3->current_fh.fh_dentry) {
  FUNC_2(&VAR_5);
  return VAR_1;
 }
 FUNC_2(&VAR_5);
 return FUNC_3(VAR_2, &VAR_3->current_fh,
      "..", 2, &VAR_3->current_fh);
}
