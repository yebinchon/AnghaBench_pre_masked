
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; } ;
struct ft_sess {TYPE_1__ kref; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(struct ft_sess *VAR_1)
{
 int VAR_2 = FUNC_1(&VAR_1->kref.refcount);

 FUNC_0(!VAR_2);
 FUNC_2(&VAR_1->kref, VAR_0);
}
