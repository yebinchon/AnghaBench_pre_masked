
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct if_latencies {int dummy; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,struct if_latencies*) ;
 int FUNC_1 (struct ifnet*,struct if_latencies*,int ) ;

errno_t
FUNC_2(struct ifnet *VAR_2, struct if_latencies *VAR_3,
    struct if_latencies *VAR_4)
{
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 if (VAR_3 != ((void*)0))
  (void) FUNC_1(VAR_2, VAR_3, VAR_1);

 if (VAR_4 != ((void*)0))
  (void) FUNC_0(VAR_2, VAR_4);

 return (0);
}
