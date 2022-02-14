
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ levelitem_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_3(void)
{
 int VAR_2, VAR_3;

 if (VAR_1) FUNC_0(VAR_1);

 VAR_3 = (int) FUNC_2("max_levelitems", "256");
 VAR_1 = (levelitem_t *) FUNC_1(VAR_3 * sizeof(levelitem_t));

 for (VAR_2 = 0; VAR_2 < VAR_3-1; VAR_2++)
 {
  VAR_1[VAR_2].next = &VAR_1[VAR_2 + 1];
 }
 VAR_1[VAR_3-1].next = ((void*)0);

 VAR_0 = VAR_1;
}
