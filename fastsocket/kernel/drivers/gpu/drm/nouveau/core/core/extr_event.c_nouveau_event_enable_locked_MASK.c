
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_event {int index_nr; int (* enable ) (struct nouveau_event*,int) ;TYPE_1__* index; } ;
struct TYPE_2__ {int refs; } ;


 int FUNC_0 (struct nouveau_event*,int) ;

void
FUNC_1(struct nouveau_event *VAR_0, int VAR_1)
{
 if (VAR_1 >= VAR_0->index_nr)
  return;

 if (!VAR_0->index[VAR_1].refs++ && VAR_0->enable)
  VAR_0->enable(VAR_0, VAR_1);
}
