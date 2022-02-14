
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ submod_enabled; } ;
struct bfa_s {TYPE_1__ iocfc; } ;
struct TYPE_4__ {int (* iocdisable ) (struct bfa_s*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 (struct bfa_s*) ;

__attribute__((used)) static void
FUNC_1(struct bfa_s *VAR_2)
{
 int VAR_3;

 if (VAR_2->iocfc.submod_enabled == VAR_0)
  return;

 for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++)
  VAR_1[VAR_3]->iocdisable(VAR_2);

 VAR_2->iocfc.submod_enabled = VAR_0;
}
