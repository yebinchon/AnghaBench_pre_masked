
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; scalar_t__ mayrecalc; } ;
struct TYPE_14__ {TYPE_2__ x; TYPE_1__** kids; int op; TYPE_5__** syms; } ;
struct TYPE_11__ {TYPE_6__* cse; } ;
struct TYPE_12__ {TYPE_3__ t; } ;
struct TYPE_13__ {TYPE_4__ u; } ;
struct TYPE_9__ {scalar_t__ op; } ;
typedef TYPE_5__* Symbol ;
typedef TYPE_6__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static Node FUNC_1(Node VAR_4, int VAR_5) {
 struct _state {
  short cost[1];
 };
 Symbol VAR_6 = VAR_4->syms[VAR_2];

 if (FUNC_0(VAR_4->op) == VAR_0 && VAR_4->kids[0]->op == VAR_3+VAR_1
 && VAR_6->u.t.cse && VAR_4->x.mayrecalc
 && ((struct _state*)VAR_6->u.t.cse->x.state)->cost[VAR_5] == 0)
  return VAR_6->u.t.cse;
 else
  return VAR_4;
}
