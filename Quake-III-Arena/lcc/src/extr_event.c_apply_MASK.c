
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct entry {int cl; int (* func ) (int ,void*,void*) ;} ;
struct TYPE_3__ {struct TYPE_3__* link; struct entry* x; } ;
typedef TYPE_1__* List ;


 int FUNC_0 (int ,void*,void*) ;

void FUNC_1(List VAR_0, void *VAR_1, void *VAR_2) {
 if (VAR_0) {
  List VAR_3 = VAR_0;
  do {
   struct entry *VAR_4 = VAR_3->x;
   (*VAR_4->func)(VAR_4->cl, VAR_1, VAR_2);
   VAR_3 = VAR_3->link;
  } while (VAR_3 != VAR_0);
 }
}
