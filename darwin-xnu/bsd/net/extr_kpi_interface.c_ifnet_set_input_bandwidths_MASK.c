
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_bandwidths {scalar_t__ eff_bw; scalar_t__ max_bw; } ;
struct ifnet {struct if_bandwidths if_input_bw; int if_link_status_lock; int * if_link_status; } ;
typedef int errno_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

errno_t
FUNC_6(struct ifnet *VAR_1, struct if_bandwidths *VAR_2)
{
 struct if_bandwidths VAR_3;

 FUNC_1(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 VAR_3 = VAR_1->if_input_bw;
 if (VAR_2->eff_bw != 0)
  VAR_1->if_input_bw.eff_bw = VAR_2->eff_bw;
 if (VAR_2->max_bw != 0)
  VAR_1->if_input_bw.max_bw = VAR_2->max_bw;
 if (VAR_1->if_input_bw.eff_bw > VAR_1->if_input_bw.max_bw)
  VAR_1->if_input_bw.max_bw = VAR_1->if_input_bw.eff_bw;
 else if (VAR_1->if_input_bw.eff_bw == 0)
  VAR_1->if_input_bw.eff_bw = VAR_1->if_input_bw.max_bw;

 if (FUNC_0(VAR_1) && VAR_1->if_link_status != ((void*)0)) {
  FUNC_5(&VAR_1->if_link_status_lock);
  FUNC_2(VAR_1);
  FUNC_4(&VAR_1->if_link_status_lock);
 }

 if (VAR_3.eff_bw != VAR_1->if_input_bw.eff_bw ||
     VAR_3.max_bw != VAR_1->if_input_bw.max_bw)
  FUNC_3(VAR_1, VAR_0);

 return (0);
}
