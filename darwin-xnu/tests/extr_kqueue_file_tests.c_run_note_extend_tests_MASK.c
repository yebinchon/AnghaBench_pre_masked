
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_nondeterministic; int * t_cleanup_actions; int t_helpthreadact; int * t_prep_actions; } ;
typedef TYPE_1__ test_t ;
struct passwd {scalar_t__ pw_gid; scalar_t__ pw_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 struct passwd* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int ,int ,int,void*,void*,...) ;
 int FUNC_6 (TYPE_1__*,char*,void*,int,int,int ,int ) ;

void
FUNC_7()
{
 test_t VAR_17;
 char VAR_18[50];

 FUNC_0("THESE TESTS MAY FAIL ON HFS\n");

 FUNC_6(&VAR_17, "3.1.1: write beyond the end of a file", VAR_4, 1, 1, VAR_8, VAR_16);
 VAR_17.t_nondeterministic = 1;
 FUNC_5(&(VAR_17.t_prep_actions[0]), VAR_7, VAR_2, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_helpthreadact, VAR_12, VAR_15, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_cleanup_actions[0], VAR_7, VAR_14, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_1(&VAR_17);
 FUNC_6(&VAR_17, "3.1.7: lengthen a file with truncate()", VAR_4, 1, 1, VAR_8, VAR_16);
 VAR_17.t_nondeterministic = 1;
 FUNC_5(&(VAR_17.t_prep_actions[0]), VAR_7, VAR_2, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_helpthreadact, VAR_12, VAR_5, 2, VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_cleanup_actions[0], VAR_7, VAR_14, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_1(&VAR_17);



 FUNC_6(&VAR_17, "3.2.1: setxattr() a file", VAR_4, 1, 1, VAR_8, VAR_9);
 FUNC_5(&(VAR_17.t_prep_actions[0]), VAR_7, VAR_2, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_helpthreadact, VAR_12, VAR_11, 2, VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_cleanup_actions[0], VAR_7, VAR_14, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_1(&VAR_17);

 FUNC_6(&VAR_17, "3.2.2: chmod a file", VAR_4, 1, 1, VAR_8, VAR_9);
 FUNC_5(&(VAR_17.t_prep_actions[0]), VAR_7, VAR_2, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_helpthreadact, VAR_12, VAR_0, 2, (void*)VAR_4, (void*)0700);
 FUNC_5(&VAR_17.t_cleanup_actions[0], VAR_7, VAR_14, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_1(&VAR_17);

 struct passwd *VAR_19 = FUNC_3("local");
 if (VAR_19 != ((void*)0)) {
  FUNC_6(&VAR_17, "3.2.3: chown a file", VAR_4, 2, 1, VAR_8, VAR_9);
  FUNC_5(&(VAR_17.t_prep_actions[0]), VAR_7, VAR_2, 2, (void*)VAR_4, (void*)((void*)0));
  FUNC_5(&VAR_17.t_prep_actions[1], VAR_7, VAR_1, 3, (void*)VAR_4, (void*)VAR_19->pw_uid, (void*)VAR_19->pw_gid);
  FUNC_5(&VAR_17.t_helpthreadact, VAR_12, VAR_1, 3, (void*)VAR_4, (void*)FUNC_4(), (void*)FUNC_2());
  FUNC_5(&VAR_17.t_cleanup_actions[0], VAR_7, VAR_14, 2, (void*)VAR_4, (void*)((void*)0));
  FUNC_1(&VAR_17);
 } else {
  FUNC_0("Couldn't getpwnam for user \"local\"\n");
 }

 FUNC_6(&VAR_17, "3.2.4: chmod a dir", VAR_3, 1, 1, VAR_8, VAR_9);
 FUNC_5(&(VAR_17.t_prep_actions[0]), VAR_7, VAR_6, 2, (void*)VAR_3, (void*)((void*)0));
 FUNC_5(&VAR_17.t_helpthreadact, VAR_12, VAR_0, 2, (void*)VAR_3, (void*)0700);
 FUNC_5(&VAR_17.t_cleanup_actions[0], VAR_7, VAR_10, 2, (void*)VAR_3, (void*)((void*)0));
 FUNC_1(&VAR_17);

 if (VAR_19 != ((void*)0)) {
  FUNC_6(&VAR_17, "3.2.5: chown a dir", VAR_3, 2, 1, VAR_8, VAR_9);
  FUNC_5(&(VAR_17.t_prep_actions[0]), VAR_7, VAR_6, 2, (void*)VAR_3, (void*)((void*)0));
  FUNC_5(&VAR_17.t_prep_actions[1], VAR_7, VAR_1, 3, (void*)VAR_3, (void*)VAR_19->pw_uid, (void*)VAR_19->pw_gid);
  FUNC_5(&VAR_17.t_helpthreadact, VAR_12, VAR_1, 3, (void*)VAR_3, (void*)FUNC_4(), (void*)FUNC_2());
  FUNC_5(&VAR_17.t_cleanup_actions[0], VAR_7, VAR_10, 2, (void*)VAR_3, (void*)((void*)0));
  FUNC_1(&VAR_17);
 }

 FUNC_6(&VAR_17, "3.2.6: TRUNC a file with truncate()", VAR_4, 1, 1, VAR_8, VAR_9);
 FUNC_5(&(VAR_17.t_prep_actions[0]), VAR_7, VAR_2, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_helpthreadact, VAR_12, VAR_13, 2, VAR_4, (void*)((void*)0));
 FUNC_5(&VAR_17.t_cleanup_actions[0], VAR_7, VAR_14, 2, (void*)VAR_4, (void*)((void*)0));
 FUNC_1(&VAR_17);
}
