
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_message {int m_extra; } ;
struct dlm_lkb {int lkb_flags; } ;
struct dlm_ls {struct dlm_lkb ls_stub_lkb; struct dlm_rsb ls_stub_rsb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_lkb**) ;
 int FUNC_3 (struct dlm_lkb*) ;
 int FUNC_4 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_5 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 int FUNC_6 (struct dlm_ls*,int ,int,int ,struct dlm_rsb**) ;
 int FUNC_7 (struct dlm_rsb*) ;
 int FUNC_8 (struct dlm_rsb*) ;
 int FUNC_9 (struct dlm_message*) ;
 int FUNC_10 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_11 (struct dlm_ls*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_12 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 int FUNC_13 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_14 (struct dlm_rsb*) ;

__attribute__((used)) static void FUNC_15(struct dlm_ls *VAR_3, struct dlm_message *VAR_4)
{
 struct dlm_lkb *VAR_5;
 struct dlm_rsb *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_7)
  goto fail;

 FUNC_10(VAR_5, VAR_4);
 VAR_5->lkb_flags |= VAR_0;
 VAR_7 = FUNC_11(VAR_3, VAR_5, VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_3, VAR_5);
  goto fail;
 }

 VAR_8 = FUNC_9(VAR_4);

 VAR_7 = FUNC_6(VAR_3, VAR_4->m_extra, VAR_8, VAR_2, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3, VAR_5);
  goto fail;
 }

 FUNC_7(VAR_6);

 FUNC_1(VAR_6, VAR_5);
 VAR_7 = FUNC_4(VAR_6, VAR_5);
 FUNC_12(VAR_6, VAR_5, VAR_7);
 FUNC_5(VAR_6, VAR_5, VAR_7);

 FUNC_14(VAR_6);
 FUNC_8(VAR_6);

 if (VAR_7 == -VAR_1)
  VAR_7 = 0;
 if (VAR_7)
  FUNC_3(VAR_5);
 return;

 fail:
 FUNC_13(VAR_3, VAR_4);
 FUNC_12(&VAR_3->ls_stub_rsb, &VAR_3->ls_stub_lkb, VAR_7);
}
