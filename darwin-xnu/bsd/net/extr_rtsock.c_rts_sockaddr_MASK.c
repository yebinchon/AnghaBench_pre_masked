
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct socket*,struct sockaddr**) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_1, struct sockaddr **VAR_2)
{
 return (VAR_0.pru_sockaddr(VAR_1, VAR_2));
}
