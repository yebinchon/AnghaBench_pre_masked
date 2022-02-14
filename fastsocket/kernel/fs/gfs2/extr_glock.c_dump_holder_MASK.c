
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {char* comm; } ;
struct seq_file {int dummy; } ;
struct gfs2_holder {scalar_t__ gh_owner_pid; int gh_error; int gh_iflags; int gh_flags; int gh_state; int gh_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,long,char*,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct task_struct* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_2, const struct gfs2_holder *VAR_3)
{
 struct task_struct *VAR_4 = ((void*)0);
 char VAR_5[VAR_0];
 char VAR_6[32];

 FUNC_4(VAR_5, VAR_3->gh_ip);
 if (VAR_3->gh_owner_pid)
  VAR_4 = FUNC_3(VAR_3->gh_owner_pid, VAR_1);
 FUNC_0(VAR_2, " H: s:%s f:%s e:%d p:%ld [%s] %s\n",
    FUNC_5(VAR_3->gh_state),
    FUNC_1(VAR_6, VAR_3->gh_flags, VAR_3->gh_iflags),
    VAR_3->gh_error,
    VAR_3->gh_owner_pid ? (long)FUNC_2(VAR_3->gh_owner_pid) : -1,
    VAR_4 ? VAR_4->comm : "(ended)", VAR_5);
 return 0;
}
