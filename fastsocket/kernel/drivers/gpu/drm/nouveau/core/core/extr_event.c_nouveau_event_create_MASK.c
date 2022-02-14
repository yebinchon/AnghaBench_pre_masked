
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_event {int index_nr; TYPE_1__* index; int lock; } ;
struct TYPE_2__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nouveau_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(int VAR_2, struct nouveau_event **VAR_3)
{
 struct nouveau_event *VAR_4;
 int VAR_5;

 VAR_4 = *VAR_3 = FUNC_1(sizeof(*VAR_4) + VAR_2 *
      sizeof(VAR_4->index[0]), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_4->lock);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_0(&VAR_4->index[VAR_5].list);
 VAR_4->index_nr = VAR_2;
 return 0;
}
