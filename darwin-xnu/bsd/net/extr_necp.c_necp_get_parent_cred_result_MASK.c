
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * task_t ;
struct necp_socket_info {int cred_result; } ;
typedef int * proc_t ;
typedef int * kauth_cred_t ;
typedef int errno_t ;
typedef int * coalition_t ;
typedef scalar_t__ Boolean ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline void
FUNC_9(proc_t VAR_4, struct necp_socket_info *VAR_5)
{
 task_t VAR_6 = FUNC_7(VAR_4 ? VAR_4 : FUNC_2());
 coalition_t VAR_7 = VAR_0;
 Boolean VAR_8 = FUNC_1(VAR_6, VAR_1, &VAR_7);

 if (VAR_8 == VAR_3) {

  return;
 }

 if (VAR_7 != ((void*)0)) {
  task_t VAR_9 = FUNC_0(VAR_7);
  if (VAR_9 != ((void*)0)) {
   proc_t VAR_10 = FUNC_3(VAR_9);
   if (VAR_10 != ((void*)0)) {
    kauth_cred_t VAR_11 = FUNC_4(VAR_10);
    if (VAR_11 != ((void*)0)) {
     errno_t VAR_12 = FUNC_6(VAR_11, VAR_2, 0);
     FUNC_5(&VAR_11);
     VAR_5->cred_result = VAR_12;
    }
   }
   FUNC_8(VAR_9);
  }
 }
}
