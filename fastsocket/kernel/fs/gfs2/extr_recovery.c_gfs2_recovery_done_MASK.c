
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {unsigned int ls_recover_jid_done; unsigned int ls_recover_jid_status; } ;
struct gfs2_sbd {int sd_kobj; struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct gfs2_sbd *VAR_2, unsigned int VAR_3,
                               unsigned int VAR_4)
{
 char VAR_5[20];
 char VAR_6[20];
 char *VAR_7[] = { VAR_5, VAR_6, ((void*)0) };
 struct lm_lockstruct *VAR_8 = &VAR_2->sd_lockstruct;
        VAR_8->ls_recover_jid_done = VAR_3;
        VAR_8->ls_recover_jid_status = VAR_4;
 FUNC_1(VAR_5, "JID=%d", VAR_3);
 FUNC_1(VAR_6, "RECOVERY=%s",
  VAR_4 == VAR_1 ? "Done" : "Failed");
        FUNC_0(&VAR_2->sd_kobj, VAR_0, VAR_7);
}
