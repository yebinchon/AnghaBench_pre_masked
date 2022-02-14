
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cookie; } ;
struct TYPE_4__ {TYPE_1__ ike; } ;
struct pf_app_state {TYPE_2__ u; } ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int
FUNC_0(struct pf_app_state *VAR_0, struct pf_app_state *VAR_1)
{
 int64_t VAR_2 = VAR_0->u.ike.cookie - VAR_1->u.ike.cookie;
 return ((VAR_2 > 0) ? 1 : ((VAR_2 < 0) ? -1 : 0));
}
