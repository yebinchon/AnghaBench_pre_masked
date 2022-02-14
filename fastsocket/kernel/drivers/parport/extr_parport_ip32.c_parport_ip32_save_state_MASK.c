
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ecr; int dcr; } ;
struct TYPE_4__ {TYPE_1__ ip32; } ;
struct parport_state {TYPE_2__ u; } ;
struct parport {int dummy; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*) ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_0,
        struct parport_state *VAR_1)
{
 VAR_1->u.ip32.dcr = FUNC_0(VAR_0);
 VAR_1->u.ip32.ecr = FUNC_1(VAR_0);
}
