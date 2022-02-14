
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
struct vnop_access_args {int a_action; int a_context; int a_vp; int * a_desc; } ;
struct nfs_open_file {int dummy; } ;
struct kauth_acl_eval {int ae_requested; int ae_count; scalar_t__ ae_result; int ae_exp_gexec; int ae_exp_gwrite; int ae_exp_gread; int ae_exp_gall; int ae_options; TYPE_1__* ae_acl; } ;
typedef TYPE_3__* nfsnode_t ;
typedef int kauth_cred_t ;
struct TYPE_7__ {scalar_t__ nva_uid; int nva_gid; } ;
struct TYPE_6__ {scalar_t__ ace_flags; } ;
struct TYPE_8__ {TYPE_2__ n_vattr; TYPE_1__ n_dace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,struct kauth_acl_eval*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (struct nfs_open_file*,int,int,int) ;
 int FUNC_5 (struct vnop_access_args*) ;
 int FUNC_6 (int ) ;
 int VAR_12 ;

int
FUNC_7(
 nfsnode_t VAR_13,
 struct nfs_open_file *VAR_14,
 uint32_t VAR_15,
 uint32_t VAR_16,
 vfs_context_t VAR_17)
{
 int VAR_18 = 0, VAR_19, VAR_20 = 0, VAR_21 = 0;
 uint32_t VAR_22;
 struct kauth_acl_eval VAR_23;
 kauth_cred_t VAR_24 = FUNC_6(VAR_17);

 if (!(VAR_15 & VAR_10)) {




  VAR_20 = 1;
  VAR_15 |= VAR_10;
 }

tryagain:
 VAR_22 = 0;
 if (VAR_15 & VAR_10)
  VAR_22 |= VAR_8;
 if (VAR_15 & VAR_11)
  VAR_22 |= VAR_9;


 if (VAR_13->n_dace.ace_flags) {
  VAR_23.ae_requested = VAR_22;
  VAR_23.ae_acl = &VAR_13->n_dace;
  VAR_23.ae_count = 1;
  VAR_23.ae_options = 0;
  if (VAR_13->n_vattr.nva_uid == FUNC_2(VAR_24))
   VAR_23.ae_options |= VAR_2;
  VAR_18 = FUNC_3(VAR_24, VAR_13->n_vattr.nva_gid, &VAR_19);
  if (!VAR_18 && VAR_19)
   VAR_23.ae_options |= VAR_1;

  VAR_23.ae_exp_gall = VAR_4;
  VAR_23.ae_exp_gread = VAR_6;
  VAR_23.ae_exp_gwrite = VAR_7;
  VAR_23.ae_exp_gexec = VAR_5;

  VAR_18 = FUNC_1(VAR_24, &VAR_23);

  if (!VAR_18 && (VAR_23.ae_result == VAR_3))
   VAR_21 = 1;
 }

 if (!VAR_21) {

  struct vnop_access_args VAR_25;
  VAR_25.a_desc = &VAR_12;
  VAR_25.a_vp = FUNC_0(VAR_13);
  VAR_25.a_action = VAR_22;
  VAR_25.a_context = VAR_17;
  if (!(VAR_18 = FUNC_5(&VAR_25)))
   VAR_21 = 1;
 }

 if (!VAR_21) {
  if (VAR_20) {

   VAR_15 &= ~VAR_10;
   VAR_20 = 0;
   goto tryagain;
  }
  return (VAR_18 ? VAR_18 : VAR_0);
 }

 FUNC_4(VAR_14, VAR_15, VAR_16, 1);

 return (0);
}
