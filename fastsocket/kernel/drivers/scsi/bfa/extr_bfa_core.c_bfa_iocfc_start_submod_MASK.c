
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* submod_enabled; } ;
struct bfa_s {TYPE_1__ iocfc; void* queue_process; } ;
struct TYPE_4__ {int (* start ) (struct bfa_s*) ;} ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_s*,int,int ) ;
 int FUNC_1 (struct bfa_s*,int) ;
 TYPE_2__** VAR_2 ;
 int FUNC_2 (struct bfa_s*) ;

__attribute__((used)) static void
FUNC_3(struct bfa_s *VAR_3)
{
 int VAR_4;

 VAR_3->queue_process = VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_3, VAR_4, FUNC_1(VAR_3, VAR_4));

 for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
  VAR_2[VAR_4]->start(VAR_3);

 VAR_3->iocfc.submod_enabled = VAR_0;
}
