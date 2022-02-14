
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
struct if_bandwidths {scalar_t__ eff_bw; scalar_t__ max_bw; } ;
struct TYPE_2__ {int max_bw; } ;
struct ifclassq {int dummy; } ;
struct ifnet {int if_baudrate; int if_link_status_lock; int * if_link_status; struct if_bandwidths if_output_bw; TYPE_1__ if_input_bw; struct ifclassq if_snd; } ;
typedef int errno_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifclassq*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

errno_t
FUNC_10(struct ifnet *VAR_1, struct if_bandwidths *VAR_2,
    boolean_t VAR_3)
{
 struct if_bandwidths VAR_4;
 struct ifclassq *VAR_5;
 u_int64_t VAR_6;

 FUNC_5(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 VAR_5 = &VAR_1->if_snd;
 if (!VAR_3)
  FUNC_0(VAR_5);
 FUNC_1(VAR_5);

 VAR_4 = VAR_1->if_output_bw;
 if (VAR_2->eff_bw != 0)
  VAR_1->if_output_bw.eff_bw = VAR_2->eff_bw;
 if (VAR_2->max_bw != 0)
  VAR_1->if_output_bw.max_bw = VAR_2->max_bw;
 if (VAR_1->if_output_bw.eff_bw > VAR_1->if_output_bw.max_bw)
  VAR_1->if_output_bw.max_bw = VAR_1->if_output_bw.eff_bw;
 else if (VAR_1->if_output_bw.eff_bw == 0)
  VAR_1->if_output_bw.eff_bw = VAR_1->if_output_bw.max_bw;


 VAR_6 = FUNC_4(VAR_1->if_output_bw.max_bw, VAR_1->if_input_bw.max_bw);
 if (VAR_6 != 0)
  VAR_1->if_baudrate = (VAR_6 > 0xFFFFFFFF) ? 0xFFFFFFFF : VAR_6;


 if (VAR_4.eff_bw != VAR_1->if_output_bw.eff_bw ||
     VAR_4.max_bw != VAR_1->if_output_bw.max_bw)
  FUNC_7(VAR_5, VAR_0);

 if (!VAR_3)
  FUNC_2(VAR_5);





 if (FUNC_3(VAR_1) && VAR_1->if_link_status != ((void*)0)) {
  FUNC_9(&VAR_1->if_link_status_lock);
  FUNC_6(VAR_1);
  FUNC_8(&VAR_1->if_link_status_lock);
 }

 return (0);
}
