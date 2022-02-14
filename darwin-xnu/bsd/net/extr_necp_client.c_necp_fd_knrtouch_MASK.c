
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_fd_data {int dummy; } ;
struct knote {scalar_t__ kn_hook; } ;
struct kevent_internal_s {int dummy; } ;


 int FUNC_0 (struct necp_fd_data*) ;
 int FUNC_1 (struct necp_fd_data*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct necp_fd_data*,int,int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct knote *VAR_1, struct kevent_internal_s *VAR_2)
{
#pragma unused(kev)
 struct necp_fd_data *VAR_3;
 int VAR_4;

 VAR_3 = (struct necp_fd_data *)VAR_1->kn_hook;

 FUNC_0(VAR_3);
 VAR_4 = FUNC_3(VAR_3, VAR_0, ((void*)0), FUNC_2(), 1);
 FUNC_1(VAR_3);

 return ((VAR_4 & VAR_0) != 0);
}
