
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int entity_t ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_1__ bspbrush_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_6 (char*,...) ;

void FUNC_7(entity_t *VAR_1, int VAR_2)
{
 bspbrush_t *VAR_3, *VAR_4, *VAR_5;
 int VAR_6;


 VAR_3 = FUNC_2(VAR_2);

 VAR_3 = FUNC_5(VAR_3, VAR_2);

 FUNC_3(VAR_3);

 if (!VAR_0)
 {
  VAR_3 = FUNC_4(VAR_3, VAR_2);

 }

 if (!VAR_2) FUNC_6("converting brushes to map brushes\n");
 if (!VAR_2) FUNC_6("%5d brushes", VAR_6 = 0);
 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_5)
 {
  VAR_5 = VAR_4->next;
  FUNC_1(VAR_4, VAR_1);
  VAR_4->next = ((void*)0);
  FUNC_0(VAR_4);
  if (!VAR_2) FUNC_6("\r%5d", ++VAR_6);
 }
 if (!VAR_2) FUNC_6("\n");
}
