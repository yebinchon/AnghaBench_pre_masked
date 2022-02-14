
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_recover {scalar_t__ seq; } ;
struct dlm_ls {int ls_recoverd_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct dlm_ls*) ;
 int FUNC_5 (struct dlm_ls*) ;
 int FUNC_6 (struct dlm_ls*) ;
 scalar_t__ FUNC_7 (struct dlm_ls*) ;
 int FUNC_8 (struct dlm_ls*) ;
 int FUNC_9 (struct dlm_ls*) ;
 int FUNC_10 (struct dlm_ls*) ;
 int FUNC_11 (struct dlm_ls*) ;
 int FUNC_12 (struct dlm_ls*) ;
 int FUNC_13 (struct dlm_ls*) ;
 int FUNC_14 (struct dlm_ls*) ;
 int FUNC_15 (struct dlm_ls*) ;
 int FUNC_16 (struct dlm_ls*) ;
 int FUNC_17 (struct dlm_ls*,struct dlm_recover*,int*) ;
 int FUNC_18 (struct dlm_ls*) ;
 int FUNC_19 (struct dlm_ls*) ;
 int FUNC_20 (struct dlm_ls*) ;
 int FUNC_21 (struct dlm_ls*) ;
 int FUNC_22 (struct dlm_ls*) ;
 int FUNC_23 (struct dlm_ls*) ;
 int FUNC_24 (struct dlm_ls*,int ) ;
 int FUNC_25 (struct dlm_ls*,scalar_t__) ;
 unsigned long VAR_2 ;
 int FUNC_26 (unsigned long) ;
 int FUNC_27 (struct dlm_ls*,char*,unsigned long long,...) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct dlm_ls *VAR_3, struct dlm_recover *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7 = 0;

 FUNC_27(VAR_3, "recover %llx", (unsigned long long)VAR_4->seq);

 FUNC_28(&VAR_3->ls_recoverd_active);






 FUNC_2();
 FUNC_1();






 FUNC_5(VAR_3);






 FUNC_6(VAR_3);






 VAR_6 = FUNC_17(VAR_3, VAR_4, &VAR_7);
 if (VAR_6) {
  FUNC_27(VAR_3, "recover_members failed %d", VAR_6);
  goto fail;
 }
 VAR_5 = VAR_2;






 VAR_6 = FUNC_10(VAR_3);
 if (VAR_6) {
  FUNC_27(VAR_3, "recover_directory failed %d", VAR_6);
  goto fail;
 }





 VAR_6 = FUNC_11(VAR_3);
 if (VAR_6) {
  FUNC_27(VAR_3, "recover_directory_wait failed %d", VAR_6);
  goto fail;
 }







 FUNC_21(VAR_3);

 VAR_6 = FUNC_22(VAR_3);
 if (VAR_6)
  goto fail;

 if (VAR_7 || FUNC_7(VAR_3)) {




  FUNC_18(VAR_3);






  VAR_6 = FUNC_16(VAR_3);
  if (VAR_6) {
   FUNC_27(VAR_3, "recover_masters failed %d", VAR_6);
   goto fail;
  }





  VAR_6 = FUNC_14(VAR_3);
  if (VAR_6) {
   FUNC_27(VAR_3, "recover_locks failed %d", VAR_6);
   goto fail;
  }

  VAR_6 = FUNC_15(VAR_3);
  if (VAR_6) {
   FUNC_27(VAR_3, "recover_locks_wait failed %d", VAR_6);
   goto fail;
  }







  FUNC_19(VAR_3);
 } else {





  FUNC_24(VAR_3, VAR_1);

  VAR_6 = FUNC_15(VAR_3);
  if (VAR_6) {
   FUNC_27(VAR_3, "recover_locks_wait failed %d", VAR_6);
   goto fail;
  }
 }

 FUNC_23(VAR_3);







 FUNC_9(VAR_3);

 FUNC_24(VAR_3, VAR_0);
 VAR_6 = FUNC_12(VAR_3);
 if (VAR_6) {
  FUNC_27(VAR_3, "recover_done_wait failed %d", VAR_6);
  goto fail;
 }

 FUNC_4(VAR_3);

 FUNC_0(VAR_3);

 VAR_6 = FUNC_25(VAR_3, VAR_4->seq);
 if (VAR_6) {
  FUNC_27(VAR_3, "enable_locking failed %d", VAR_6);
  goto fail;
 }

 VAR_6 = FUNC_8(VAR_3);
 if (VAR_6) {
  FUNC_27(VAR_3, "process_requestqueue failed %d", VAR_6);
  goto fail;
 }

 VAR_6 = FUNC_20(VAR_3);
 if (VAR_6) {
  FUNC_27(VAR_3, "recover_waiters_post failed %d", VAR_6);
  goto fail;
 }

 FUNC_13(VAR_3);

 FUNC_3();

 FUNC_27(VAR_3, "recover %llx done: %u ms",
    (unsigned long long)VAR_4->seq,
    FUNC_26(VAR_2 - VAR_5));
 FUNC_29(&VAR_3->ls_recoverd_active);

 return 0;

 fail:
 FUNC_23(VAR_3);
 FUNC_27(VAR_3, "recover %llx error %d",
    (unsigned long long)VAR_4->seq, VAR_6);
 FUNC_29(&VAR_3->ls_recoverd_active);
 return VAR_6;
}
