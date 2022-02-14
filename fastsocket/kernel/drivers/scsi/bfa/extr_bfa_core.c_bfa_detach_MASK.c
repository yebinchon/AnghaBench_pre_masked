
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_s {int ioc; } ;
struct TYPE_2__ {int (* detach ) (struct bfa_s*) ;} ;


 int FUNC_0 (int *) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (struct bfa_s*) ;

void
FUNC_2(struct bfa_s *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
  VAR_0[VAR_2]->detach(VAR_1);
 FUNC_0(&VAR_1->ioc);
}
