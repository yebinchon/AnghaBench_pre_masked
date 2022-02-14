
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_latencies {scalar_t__ eff_lt; scalar_t__ max_lt; } ;
struct ifclassq {int dummy; } ;
struct ifnet {struct if_latencies if_output_lt; struct ifclassq if_snd; } ;
typedef int errno_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ifclassq*,int ) ;

errno_t
FUNC_5(struct ifnet *VAR_1, struct if_latencies *VAR_2,
    boolean_t VAR_3)
{
 struct if_latencies VAR_4;
 struct ifclassq *VAR_5;

 FUNC_3(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 VAR_5 = &VAR_1->if_snd;
 if (!VAR_3)
  FUNC_0(VAR_5);
 FUNC_1(VAR_5);

 VAR_4 = VAR_1->if_output_lt;
 if (VAR_2->eff_lt != 0)
  VAR_1->if_output_lt.eff_lt = VAR_2->eff_lt;
 if (VAR_2->max_lt != 0)
  VAR_1->if_output_lt.max_lt = VAR_2->max_lt;
 if (VAR_1->if_output_lt.eff_lt > VAR_1->if_output_lt.max_lt)
  VAR_1->if_output_lt.max_lt = VAR_1->if_output_lt.eff_lt;
 else if (VAR_1->if_output_lt.eff_lt == 0)
  VAR_1->if_output_lt.eff_lt = VAR_1->if_output_lt.max_lt;


 if (VAR_4.eff_lt != VAR_1->if_output_lt.eff_lt ||
     VAR_4.max_lt != VAR_1->if_output_lt.max_lt)
  FUNC_4(VAR_5, VAR_0);

 if (!VAR_3)
  FUNC_2(VAR_5);

 return (0);
}
