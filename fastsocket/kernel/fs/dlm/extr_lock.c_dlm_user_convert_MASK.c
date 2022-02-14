
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ sb_lvbptr; } ;
struct dlm_user_args {TYPE_1__ lksb; int user_lksb; int bastaddr; int bastparam; int castaddr; int castparam; int xid; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lkb {struct dlm_user_args* lkb_ua; } ;
struct dlm_args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_lkb*) ;
 int FUNC_3 (struct dlm_ls*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct dlm_ls*,int,struct dlm_lkb**) ;
 int FUNC_5 (struct dlm_user_args*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,char*,int ) ;
 int FUNC_8 (int,TYPE_1__*,int,int ,unsigned long,int ,struct dlm_user_args*,int ,struct dlm_args*) ;

int FUNC_9(struct dlm_ls *VAR_9, struct dlm_user_args *VAR_10,
       int VAR_11, uint32_t VAR_12, uint32_t VAR_13, char *VAR_14,
       unsigned long VAR_15)
{
 struct dlm_lkb *VAR_16;
 struct dlm_args VAR_17;
 struct dlm_user_args *VAR_18;
 int VAR_19;

 FUNC_1(VAR_9);

 VAR_19 = FUNC_4(VAR_9, VAR_13, &VAR_16);
 if (VAR_19)
  goto out;




 VAR_18 = VAR_16->lkb_ua;

 if (VAR_12 & VAR_0 && !VAR_18->lksb.sb_lvbptr) {
  VAR_18->lksb.sb_lvbptr = FUNC_6(VAR_1, VAR_6);
  if (!VAR_18->lksb.sb_lvbptr) {
   VAR_19 = -VAR_5;
   goto out_put;
  }
 }
 if (VAR_14 && VAR_18->lksb.sb_lvbptr)
  FUNC_7(VAR_18->lksb.sb_lvbptr, VAR_14, VAR_1);

 VAR_18->xid = VAR_10->xid;
 VAR_18->castparam = VAR_10->castparam;
 VAR_18->castaddr = VAR_10->castaddr;
 VAR_18->bastparam = VAR_10->bastparam;
 VAR_18->bastaddr = VAR_10->bastaddr;
 VAR_18->user_lksb = VAR_10->user_lksb;

 VAR_19 = FUNC_8(VAR_11, &VAR_18->lksb, VAR_12, 0, VAR_15,
         VAR_7, VAR_18, VAR_8, &VAR_17);
 if (VAR_19)
  goto out_put;

 VAR_19 = FUNC_0(VAR_9, VAR_16, &VAR_17);

 if (VAR_19 == -VAR_4 || VAR_19 == -VAR_2 || VAR_19 == -VAR_3)
  VAR_19 = 0;
 out_put:
 FUNC_2(VAR_16);
 out:
 FUNC_3(VAR_9);
 FUNC_5(VAR_10);
 return VAR_19;
}
