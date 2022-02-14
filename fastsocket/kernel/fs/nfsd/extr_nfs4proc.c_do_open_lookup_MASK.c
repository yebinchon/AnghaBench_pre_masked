
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_handle; } ;
struct TYPE_6__ {int len; int data; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct nfsd4_open {int* op_bmval; TYPE_4__* op_stateowner; int op_cinfo; int * op_acl; TYPE_2__ op_fname; int op_createmode; int op_truncate; TYPE_1__ op_verf; int op_iattr; scalar_t__ op_create; } ;
typedef scalar_t__ __be32 ;
struct TYPE_7__ {int rp_openfh; } ;
struct TYPE_8__ {TYPE_3__ so_replay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*,struct nfsd4_open*,int ) ;
 int FUNC_1 (struct svc_rqst*,struct svc_fh*,int *,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct svc_fh*,struct svc_fh*) ;
 int FUNC_4 (struct svc_fh*,int ) ;
 int FUNC_5 (struct svc_fh*) ;
 int FUNC_6 (struct svc_fh*) ;
 scalar_t__ FUNC_7 (struct nfsd4_open*) ;
 scalar_t__ FUNC_8 (struct svc_fh*) ;
 scalar_t__ FUNC_9 (struct svc_rqst*,struct svc_fh*,int ,int ,int *,struct svc_fh*,int ,int *,int *,int*) ;
 scalar_t__ FUNC_10 (struct svc_rqst*,struct svc_fh*,int ,int ,struct svc_fh*) ;
 int FUNC_11 (int *,struct svc_fh*) ;

__attribute__((used)) static __be32
FUNC_12(struct svc_rqst *VAR_5, struct svc_fh *VAR_6, struct nfsd4_open *VAR_7)
{
 struct svc_fh VAR_8;
 __be32 VAR_9;
 int VAR_10 = 0;

 FUNC_4(&VAR_8, VAR_3);
 VAR_7->op_truncate = 0;

 if (VAR_7->op_create) {
  VAR_9 = FUNC_9(VAR_5, VAR_6, VAR_7->op_fname.data,
     VAR_7->op_fname.len, &VAR_7->op_iattr,
     &VAR_8, VAR_7->op_createmode,
     (u32 *)VAR_7->op_verf.data,
     &VAR_7->op_truncate, &VAR_10);






  if (VAR_7->op_createmode == VAR_2 && VAR_9 == 0)
   VAR_7->op_bmval[1] = (VAR_0 |
      VAR_1);
 } else {
  VAR_9 = FUNC_10(VAR_5, VAR_6,
         VAR_7->op_fname.data, VAR_7->op_fname.len, &VAR_8);
  FUNC_6(VAR_6);
 }
 if (VAR_9)
  goto out;
 VAR_9 = FUNC_8(&VAR_8);
 if (VAR_9)
  goto out;

 if (FUNC_7(VAR_7) && VAR_7->op_acl != ((void*)0))
  FUNC_1(VAR_5, &VAR_8, VAR_7->op_acl, VAR_7->op_bmval);

 FUNC_11(&VAR_7->op_cinfo, VAR_6);
 FUNC_3(VAR_6, &VAR_8);


 FUNC_2(&VAR_7->op_stateowner->so_replay.rp_openfh,
   &VAR_8.fh_handle);
 if (!VAR_10)
  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7,
         VAR_4);

out:
 FUNC_5(&VAR_8);
 return VAR_9;
}
