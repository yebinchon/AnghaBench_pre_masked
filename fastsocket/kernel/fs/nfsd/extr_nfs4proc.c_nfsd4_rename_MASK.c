
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nfsd4_rename {int rn_tinfo; int rn_sinfo; int rn_tnamelen; int rn_tname; int rn_snamelen; int rn_sname; } ;
struct TYPE_10__ {TYPE_3__* fh_dentry; TYPE_1__* fh_export; } ;
struct nfsd4_compound_state {TYPE_4__ save_fh; TYPE_4__ current_fh; } ;
typedef scalar_t__ __be32 ;
struct TYPE_9__ {TYPE_2__* d_inode; } ;
struct TYPE_8__ {int i_mode; } ;
struct TYPE_7__ {int ex_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct svc_rqst*,TYPE_4__*,int ,int ,TYPE_4__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,TYPE_4__*) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_7, struct nfsd4_compound_state *VAR_8,
      struct nfsd4_rename *VAR_9)
{
 __be32 VAR_10 = VAR_4;

 if (!VAR_8->save_fh.fh_dentry)
  return VAR_10;
 if (FUNC_1() && !(VAR_8->save_fh.fh_export->ex_flags
     & VAR_0))
  return VAR_2;
 VAR_10 = FUNC_2(VAR_7, &VAR_8->save_fh, VAR_9->rn_sname,
        VAR_9->rn_snamelen, &VAR_8->current_fh,
        VAR_9->rn_tname, VAR_9->rn_tnamelen);



 if (VAR_10 == VAR_3)
  VAR_10 = VAR_1;
 else if ((VAR_10 == VAR_5) &&
                  (FUNC_0(VAR_8->save_fh.fh_dentry->d_inode->i_mode) &&
                   FUNC_0(VAR_8->current_fh.fh_dentry->d_inode->i_mode)))
  VAR_10 = VAR_1;
 else if (VAR_10 == VAR_6)
  VAR_10 = VAR_5;

 if (!VAR_10) {
  FUNC_3(&VAR_9->rn_sinfo, &VAR_8->current_fh);
  FUNC_3(&VAR_9->rn_tinfo, &VAR_8->save_fh);
 }
 return VAR_10;
}
