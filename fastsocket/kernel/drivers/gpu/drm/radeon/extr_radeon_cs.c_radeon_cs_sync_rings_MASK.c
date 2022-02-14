
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_cs_parser {int nrelocs; TYPE_3__* relocs; int ib; } ;
struct TYPE_6__ {TYPE_2__* robj; } ;
struct TYPE_4__ {int sync_obj; } ;
struct TYPE_5__ {TYPE_1__ tbo; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_cs_parser *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nrelocs; VAR_1++) {
  if (!VAR_0->relocs[VAR_1].robj)
   continue;

  FUNC_0(&VAR_0->ib, VAR_0->relocs[VAR_1].robj->tbo.sync_obj);
 }
}
