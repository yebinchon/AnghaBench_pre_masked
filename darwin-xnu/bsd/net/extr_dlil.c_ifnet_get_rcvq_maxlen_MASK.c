
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int if_eflags; struct dlil_threading_info* if_inp; } ;
struct dlil_threading_info {int input_lck; int rcvq_pkts; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

errno_t
FUNC_3(struct ifnet *VAR_3, u_int32_t *VAR_4)
{
 struct dlil_threading_info *VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);
 else if (!(VAR_3->if_eflags & VAR_2) || VAR_3->if_inp == ((void*)0))
  return (VAR_1);

 VAR_5 = VAR_3->if_inp;
 FUNC_0(&VAR_5->input_lck);
 *VAR_4 = FUNC_2(&VAR_5->rcvq_pkts);
 FUNC_1(&VAR_5->input_lck);
 return (0);
}
