
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_latencies {int dummy; } ;
struct ifnet {struct if_latencies if_input_lt; struct if_latencies if_output_lt; } ;
typedef int errno_t ;


 int VAR_0 ;

errno_t
FUNC_0(struct ifnet *VAR_1, struct if_latencies *VAR_2,
    struct if_latencies *VAR_3)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_1->if_output_lt;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_1->if_input_lt;

 return (0);
}
