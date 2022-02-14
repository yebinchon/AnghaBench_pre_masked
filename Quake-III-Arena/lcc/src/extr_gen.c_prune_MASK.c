
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ inst; TYPE_4__** kids; } ;
struct TYPE_11__ {TYPE_3__ x; struct TYPE_11__** kids; TYPE_2__** syms; } ;
struct TYPE_8__ {int usecount; } ;
struct TYPE_9__ {int name; TYPE_1__ x; scalar_t__ temporary; } ;
typedef TYPE_4__* Node ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static Node *FUNC_2(Node VAR_2, Node VAR_3[]) {
 if (VAR_2 == ((void*)0))
  return VAR_3;
 VAR_2->x.kids[0] = VAR_2->x.kids[1] = VAR_2->x.kids[2] = ((void*)0);
 if (VAR_2->x.inst == 0)
  return FUNC_2(VAR_2->kids[1], FUNC_2(VAR_2->kids[0], VAR_3));
 else if (VAR_2->syms[VAR_0] && VAR_2->syms[VAR_0]->temporary
 && VAR_2->syms[VAR_0]->x.usecount < 2) {
  VAR_2->x.inst = 0;
  FUNC_0(FUNC_1(VAR_1, "(clobbering %s)\n", VAR_2->syms[VAR_0]->name));
  return FUNC_2(VAR_2->kids[1], FUNC_2(VAR_2->kids[0], VAR_3));
 }
 else {
  FUNC_2(VAR_2->kids[1], FUNC_2(VAR_2->kids[0], &VAR_2->x.kids[0]));
  *VAR_3 = VAR_2;
  return VAR_3 + 1;
 }
}
