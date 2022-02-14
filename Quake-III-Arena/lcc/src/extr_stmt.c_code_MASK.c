
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kind; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__* Code ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

Code FUNC_3(int VAR_2) {
 Code VAR_3;

 if (!FUNC_1(VAR_2))
  FUNC_2("unreachable code\n");

 FUNC_0(VAR_3, VAR_0);
 VAR_3->kind = VAR_2;
 VAR_3->prev = VAR_1;
 VAR_3->next = ((void*)0);
 VAR_1->next = VAR_3;
 VAR_1 = VAR_3;
 return VAR_3;
}
