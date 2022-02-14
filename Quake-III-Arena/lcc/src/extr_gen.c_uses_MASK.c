
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_16__ {TYPE_10__** kids; } ;
struct TYPE_18__ {TYPE_5__ x; } ;
struct TYPE_17__ {scalar_t__ set; int mask; } ;
struct TYPE_14__ {TYPE_2__* regnode; } ;
struct TYPE_15__ {TYPE_3__ x; } ;
struct TYPE_13__ {scalar_t__ set; int mask; } ;
struct TYPE_12__ {scalar_t__ registered; } ;
struct TYPE_11__ {TYPE_4__** syms; TYPE_1__ x; } ;
typedef TYPE_6__* Regnode ;
typedef TYPE_7__* Node ;


 int FUNC_0 (TYPE_10__**) ;
 size_t VAR_0 ;

__attribute__((used)) static int FUNC_1(Node VAR_1, Regnode VAR_2) {
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->x.kids); VAR_3++)
  if (
   VAR_1->x.kids[VAR_3] &&
   VAR_1->x.kids[VAR_3]->x.registered &&
   VAR_2->set == VAR_1->x.kids[VAR_3]->syms[VAR_0]->x.regnode->set &&
   (VAR_2->mask&VAR_1->x.kids[VAR_3]->syms[VAR_0]->x.regnode->mask)
  )
   return 1;
 return 0;
}
