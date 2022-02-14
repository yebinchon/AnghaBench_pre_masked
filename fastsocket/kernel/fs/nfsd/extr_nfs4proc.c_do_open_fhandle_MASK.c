
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_handle; } ;
struct TYPE_6__ {int ia_valid; scalar_t__ ia_size; } ;
struct nfsd4_open {int op_truncate; TYPE_3__ op_iattr; TYPE_2__* op_stateowner; int op_cinfo; int op_clientid; } ;
struct nfsd4_change_info {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {int rp_openfh; } ;
struct TYPE_5__ {TYPE_1__ so_replay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct svc_rqst*,struct svc_fh*,struct nfsd4_open*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_2, struct svc_fh *VAR_3, struct nfsd4_open *VAR_4)
{
 __be32 VAR_5;


 if ((VAR_5 = FUNC_3(&VAR_4->op_clientid)))
  return VAR_5;





 FUNC_2(&VAR_4->op_cinfo, 0, sizeof(struct nfsd4_change_info));


 FUNC_1(&VAR_4->op_stateowner->so_replay.rp_openfh,
   &VAR_3->fh_handle);

 VAR_4->op_truncate = (VAR_4->op_iattr.ia_valid & VAR_0) &&
  (VAR_4->op_iattr.ia_size == 0);

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4,
        VAR_1);

 return VAR_5;
}
