
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


 int VAR_0 ;
 int FUNC_0 (struct parport*,int ) ;
 int FUNC_1 (struct parport*,int) ;
 int FUNC_2 (struct parport*,int) ;

__attribute__((used)) static void FUNC_3(struct parport *VAR_1,
           struct parport_state *VAR_2)
{
 FUNC_1(VAR_1, VAR_2->u.ip32.ecr & VAR_0);
 FUNC_2(VAR_1, VAR_2->u.ip32.ecr);
 FUNC_0(VAR_1, VAR_2->u.ip32.dcr);
}
