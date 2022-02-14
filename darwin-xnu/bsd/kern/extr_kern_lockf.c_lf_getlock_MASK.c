
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf {int lf_start; int lf_end; int * lf_owner; int lf_type; } ;
struct flock {int l_start; int l_len; int l_pid; int l_type; int l_whence; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lockf* FUNC_0 (struct lockf*,int ) ;
 int FUNC_1 (char*,struct lockf*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct lockf *VAR_4, struct flock *VAR_5, pid_t VAR_6)
{
 struct lockf *VAR_7;






 if ((VAR_7 = FUNC_0(VAR_4, VAR_6))) {
  VAR_5->l_type = VAR_7->lf_type;
  VAR_5->l_whence = VAR_2;
  VAR_5->l_start = VAR_7->lf_start;
  if (VAR_7->lf_end == -1)
   VAR_5->l_len = 0;
  else
   VAR_5->l_len = VAR_7->lf_end - VAR_7->lf_start + 1;
  if (((void*)0) != VAR_7->lf_owner) {




   VAR_5->l_pid = FUNC_2(VAR_7->lf_owner);
  } else
   VAR_5->l_pid = -1;
 } else {
  VAR_5->l_type = VAR_0;
 }
 return (0);
}
