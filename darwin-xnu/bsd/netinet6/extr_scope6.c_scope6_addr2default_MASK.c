
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {int * s6id_list; } ;


 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

u_int32_t
FUNC_4(struct in6_addr *VAR_2)
{
 u_int32_t VAR_3 = 0;
 int VAR_4 = FUNC_1(VAR_2);





 if (FUNC_0(VAR_2))
  return (0);

 FUNC_2(&VAR_0);
 VAR_3 = VAR_1.s6id_list[VAR_4];
 FUNC_3(&VAR_0);

 return (VAR_3);
}
