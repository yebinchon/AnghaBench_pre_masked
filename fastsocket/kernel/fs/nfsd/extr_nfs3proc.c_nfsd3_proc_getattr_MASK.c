
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd_fhandle {int fh; } ;
struct TYPE_7__ {int fh_dentry; TYPE_2__* fh_export; } ;
struct nfsd3_attrstat {int stat; TYPE_3__ fh; } ;
typedef scalar_t__ __be32 ;
struct TYPE_5__ {int mnt; } ;
struct TYPE_6__ {TYPE_1__ ex_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (struct svc_rqst*,TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_2, struct nfsd_fhandle *VAR_3,
        struct nfsd3_attrstat *VAR_4)
{
 int VAR_5;
 __be32 VAR_6;

 FUNC_2("nfsd: GETATTR(3)  %s\n",
  FUNC_1(&VAR_3->fh));

 FUNC_3(&VAR_4->fh, &VAR_3->fh);
 VAR_6 = FUNC_4(VAR_2, &VAR_4->fh, 0,
   VAR_1 | VAR_0);
 if (VAR_6)
  FUNC_0(VAR_6);

 VAR_5 = FUNC_6(VAR_4->fh.fh_export->ex_path.mnt,
     VAR_4->fh.fh_dentry, &VAR_4->stat);
 VAR_6 = FUNC_5(VAR_5);

 FUNC_0(VAR_6);
}
