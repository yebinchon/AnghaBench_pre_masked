
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_fd_data {int dummy; } ;
struct kevent_internal_s {int dummy; } ;
struct knote {struct kevent_internal_s kn_kevent; scalar_t__ kn_hook; } ;
struct filt_process_s {int dummy; } ;


 int FUNC_0 (struct necp_fd_data*) ;
 int FUNC_1 (struct necp_fd_data*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct necp_fd_data*,int,int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct knote *VAR_1, struct filt_process_s *VAR_2, struct kevent_internal_s *VAR_3)
{
#pragma unused(data)
 struct necp_fd_data *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = (struct necp_fd_data *)VAR_1->kn_hook;

 FUNC_0(VAR_4);
 VAR_5 = FUNC_3(VAR_4, VAR_0, ((void*)0), FUNC_2(), 1);
 VAR_6 = ((VAR_5 & VAR_0) != 0);
 if (VAR_6) {
  *VAR_3 = VAR_1->kn_kevent;
 }
 FUNC_1(VAR_4);
 return (VAR_6);
}
