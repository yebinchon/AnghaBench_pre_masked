
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_poll_params {int interval_time; int bytes_hiwat; int bytes_lowat; int packets_hiwat; int packets_lowat; int packets_limit; } ;
struct ifnet {int if_eflags; struct dlil_threading_info* if_inp; } ;
struct dlil_threading_info {int input_lck; int rxpoll_ival; int rxpoll_bhiwat; int rxpoll_blowat; int rxpoll_phiwat; int rxpoll_plowat; int rxpoll_plim; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ifnet_poll_params*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

errno_t
FUNC_4(struct ifnet *VAR_2, struct ifnet_poll_params *VAR_3)
{
 struct dlil_threading_info *VAR_4;

 FUNC_0(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));
 if (!(VAR_2->if_eflags & VAR_1) || (VAR_4 = VAR_2->if_inp) == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_3, sizeof (*VAR_3));

 FUNC_2(&VAR_4->input_lck);
 VAR_3->packets_limit = VAR_4->rxpoll_plim;
 VAR_3->packets_lowat = VAR_4->rxpoll_plowat;
 VAR_3->packets_hiwat = VAR_4->rxpoll_phiwat;
 VAR_3->bytes_lowat = VAR_4->rxpoll_blowat;
 VAR_3->bytes_hiwat = VAR_4->rxpoll_bhiwat;
 VAR_3->interval_time = VAR_4->rxpoll_ival;
 FUNC_3(&VAR_4->input_lck);

 return (0);
}
