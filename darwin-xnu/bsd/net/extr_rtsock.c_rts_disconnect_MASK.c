
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_2__ {int (* pru_disconnect ) (struct socket*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct socket*) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_1)
{
 return (VAR_0.pru_disconnect(VAR_1));
}
