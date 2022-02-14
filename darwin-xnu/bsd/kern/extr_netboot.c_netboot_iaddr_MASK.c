
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int dummy; } ;
typedef int boolean_t ;
struct TYPE_2__ {struct in_addr client_ip; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0(struct in_addr * VAR_3)
{
    if (VAR_1 == ((void*)0))
 return (VAR_0);

    *VAR_3 = VAR_1->client_ip;
    return (VAR_2);
}
