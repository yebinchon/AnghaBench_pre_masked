
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* cse; scalar_t__ replace; } ;
struct TYPE_10__ {TYPE_1__ t; } ;
struct TYPE_12__ {TYPE_2__ u; scalar_t__ temporary; } ;
struct TYPE_11__ {int count; struct TYPE_11__** kids; TYPE_8__** syms; int op; } ;
typedef TYPE_3__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,TYPE_3__*,int *,TYPE_8__*) ;

__attribute__((used)) static Node FUNC_4(Node VAR_3) {
 if (VAR_3 && ( FUNC_1(VAR_3->op) == VAR_2
   && FUNC_1(VAR_3->kids[0]->op) == VAR_1
   && VAR_3->kids[0]->syms[0]->temporary
   && VAR_3->kids[0]->syms[0]->u.t.replace)) {
  VAR_3 = VAR_3->kids[0]->syms[0]->u.t.cse;
  if (FUNC_1(VAR_3->op) == VAR_2 && FUNC_2(VAR_3->kids[0]->op))
   VAR_3 = FUNC_3(VAR_3->op, FUNC_3(VAR_3->kids[0]->op, ((void*)0), ((void*)0),
    VAR_3->kids[0]->syms[0]), ((void*)0), ((void*)0));
  else if (FUNC_1(VAR_3->op) == VAR_0)
   VAR_3 = FUNC_3(VAR_3->op, ((void*)0), ((void*)0), VAR_3->syms[0]);
  else
   FUNC_0(0);
  VAR_3->count = 1;
 } else if (VAR_3) {
  VAR_3->kids[0] = FUNC_4(VAR_3->kids[0]);
  VAR_3->kids[1] = FUNC_4(VAR_3->kids[1]);
 }
 return VAR_3;
}
