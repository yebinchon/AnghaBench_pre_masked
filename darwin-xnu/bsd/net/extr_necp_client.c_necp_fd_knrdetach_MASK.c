
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinfo {int si_note; } ;
struct necp_fd_data {struct selinfo si; } ;
struct knote {scalar_t__ kn_hook; } ;


 int FUNC_0 (int *,struct knote*) ;
 int FUNC_1 (struct necp_fd_data*) ;
 int FUNC_2 (struct necp_fd_data*) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 struct necp_fd_data *VAR_1 = (struct necp_fd_data *)VAR_0->kn_hook;
 struct selinfo *VAR_2 = &VAR_1->si;

 FUNC_1(VAR_1);
 FUNC_0(&VAR_2->si_note, VAR_0);
 FUNC_2(VAR_1);
}
