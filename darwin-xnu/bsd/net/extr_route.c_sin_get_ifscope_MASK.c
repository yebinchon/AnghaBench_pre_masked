
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {unsigned int sin_scope_id; } ;


 int FUNC_0 (struct sockaddr*) ;
 TYPE_1__* FUNC_1 (struct sockaddr*) ;

unsigned int
FUNC_2(struct sockaddr *VAR_0)
{

 FUNC_0(VAR_0);

 return (FUNC_1(VAR_0)->sin_scope_id);
}
