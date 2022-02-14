
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int mayrecalc; } ;
struct TYPE_13__ {TYPE_1__ x; TYPE_5__** syms; } ;
struct TYPE_10__ {TYPE_2__* cse; } ;
struct TYPE_11__ {TYPE_3__ t; } ;
struct TYPE_12__ {TYPE_4__ u; } ;
struct TYPE_9__ {int op; } ;
typedef TYPE_6__* Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(Node VAR_5) {
 int VAR_6;

 FUNC_0(VAR_5 && VAR_5->syms[VAR_4]);
 if (VAR_5->syms[VAR_4]->u.t.cse == ((void*)0))
  return 0;
 VAR_6 = FUNC_1(VAR_5->syms[VAR_4]->u.t.cse->op);
 if (VAR_6 == VAR_3 || VAR_6 == VAR_0 || VAR_6 == VAR_1 || VAR_6 == VAR_2) {
  VAR_5->x.mayrecalc = 1;
  return 1;
 } else
  return 0;
}
