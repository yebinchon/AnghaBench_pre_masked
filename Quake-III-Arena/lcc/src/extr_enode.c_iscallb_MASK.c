
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_5__* Tree ;
struct TYPE_11__ {scalar_t__ op; TYPE_4__** kids; } ;
struct TYPE_10__ {scalar_t__ op; TYPE_3__** kids; } ;
struct TYPE_8__ {TYPE_1__* sym; } ;
struct TYPE_9__ {TYPE_2__ u; int op; } ;
struct TYPE_7__ {scalar_t__ temporary; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(Tree VAR_4) {
 return VAR_4->op == VAR_3 && VAR_4->kids[0] && VAR_4->kids[1]
  && VAR_4->kids[0]->op == VAR_1+VAR_0
  && VAR_4->kids[1]->op == VAR_2+VAR_0
  && FUNC_0(VAR_4->kids[1]->kids[0]->op)
  && VAR_4->kids[1]->kids[0]->u.sym->temporary;
}
