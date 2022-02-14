
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinfo {int si_note; } ;
struct necp_fd_data {struct selinfo si; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct necp_fd_data*) ;
 int FUNC_2 (struct necp_fd_data*) ;
 int FUNC_3 (struct selinfo*) ;

__attribute__((used)) static void
FUNC_4(struct necp_fd_data *VAR_0, bool VAR_1)
{
 struct selinfo *VAR_2 = &VAR_0->si;

 if (!VAR_1) {
  FUNC_1(VAR_0);
 }

 FUNC_3(VAR_2);



 FUNC_0(&VAR_2->si_note, 1);

 if (!VAR_1) {
  FUNC_2(VAR_0);
 }
}
