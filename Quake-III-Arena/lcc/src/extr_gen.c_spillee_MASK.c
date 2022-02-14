
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* next; } ;
struct TYPE_16__ {TYPE_1__ x; } ;
struct TYPE_15__ {unsigned int mask; size_t set; int * vbl; } ;
struct TYPE_13__ {TYPE_4__* regnode; scalar_t__ lastuse; TYPE_3__** wildcard; } ;
struct TYPE_14__ {TYPE_2__ x; } ;
typedef TYPE_3__* Symbol ;
typedef TYPE_4__* Regnode ;
typedef TYPE_5__* Node ;


 int FUNC_0 (TYPE_3__*) ;
 unsigned int* VAR_0 ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static Symbol FUNC_2(Symbol VAR_1, unsigned VAR_2[], Node VAR_3) {
 Symbol VAR_4 = ((void*)0);
 int VAR_5 = -1, VAR_6;

 FUNC_0(VAR_1);
 if (!VAR_1->x.wildcard)
  VAR_4 = VAR_1;
 else {
  for (VAR_6 = 31; VAR_6 >= 0; VAR_6--) {
   Symbol VAR_7 = VAR_1->x.wildcard[VAR_6];
   if (
    VAR_7 != ((void*)0) &&
    VAR_7->x.lastuse &&
    (VAR_7->x.regnode->mask&VAR_0[VAR_7->x.regnode->set]&VAR_2[VAR_7->x.regnode->set])
   ) {
    Regnode VAR_8 = VAR_7->x.regnode;
    Node VAR_9 = VAR_3;
    int VAR_10 = 0;
    for (; VAR_9 && !FUNC_1(VAR_9, VAR_8); VAR_9 = VAR_9->x.next)
     VAR_10++;
    if (VAR_9 && VAR_10 > VAR_5) {
     VAR_5 = VAR_10;
     VAR_4 = VAR_7;
    }
   }
  }
 }
 FUNC_0(VAR_4);


 FUNC_0(VAR_4->x.regnode->vbl == ((void*)0));


 return VAR_4;
}
