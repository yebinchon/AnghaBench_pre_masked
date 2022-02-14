
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_latencies {scalar_t__ eff_lt; scalar_t__ max_lt; } ;
struct ifnet {struct if_latencies if_input_lt; } ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ifnet*,int ) ;

errno_t
FUNC_2(struct ifnet *VAR_1, struct if_latencies *VAR_2)
{
 struct if_latencies VAR_3;

 FUNC_0(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 VAR_3 = VAR_1->if_input_lt;
 if (VAR_2->eff_lt != 0)
  VAR_1->if_input_lt.eff_lt = VAR_2->eff_lt;
 if (VAR_2->max_lt != 0)
  VAR_1->if_input_lt.max_lt = VAR_2->max_lt;
 if (VAR_1->if_input_lt.eff_lt > VAR_1->if_input_lt.max_lt)
  VAR_1->if_input_lt.max_lt = VAR_1->if_input_lt.eff_lt;
 else if (VAR_1->if_input_lt.eff_lt == 0)
  VAR_1->if_input_lt.eff_lt = VAR_1->if_input_lt.max_lt;

 if (VAR_3.eff_lt != VAR_1->if_input_lt.eff_lt ||
     VAR_3.max_lt != VAR_1->if_input_lt.max_lt)
  FUNC_1(VAR_1, VAR_0);

 return (0);
}
