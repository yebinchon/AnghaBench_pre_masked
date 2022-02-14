
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {int list_node; } ;
struct TYPE_2__ {scalar_t__ add; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,unsigned int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_4)
{
 unsigned int VAR_5;

 FUNC_1(&VAR_2);
 FUNC_0(&VAR_4->list_node, &VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_3[VAR_5].add)
   FUNC_3(VAR_4, VAR_5);
 FUNC_2(&VAR_2);
}
