
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* link; void* x; } ;
typedef TYPE_1__* List ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 void** FUNC_1 (scalar_t__,int,unsigned int) ;

void *FUNC_2(List *VAR_1, unsigned VAR_2) {
 int VAR_3 = 0;
 void **VAR_4 = FUNC_1(FUNC_0(*VAR_1) + 1, sizeof VAR_4[0], VAR_2);

 if (*VAR_1) {
  List VAR_5 = *VAR_1;
  do {
   VAR_5 = VAR_5->link;
   VAR_4[VAR_3++] = VAR_5->x;
  } while (VAR_5 != *VAR_1);

  VAR_5 = (*VAR_1)->link;
  (*VAR_1)->link = VAR_0;
  VAR_0 = VAR_5;

 }
 *VAR_1 = ((void*)0);
 VAR_4[VAR_3] = ((void*)0);
 return VAR_4;
}
