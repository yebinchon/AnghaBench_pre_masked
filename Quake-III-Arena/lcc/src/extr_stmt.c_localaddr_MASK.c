
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* Tree ;
struct TYPE_4__ {int * sym; } ;
struct TYPE_5__ {int const op; struct TYPE_5__** kids; TYPE_1__ u; } ;
typedef int * Symbol ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static Symbol FUNC_2(Tree VAR_0) {
 if (VAR_0 == ((void*)0))
  return ((void*)0);
 switch (FUNC_1(VAR_0->op)) {
 case 129: case 131: case 133:
  return ((void*)0);
 case 134: case 135:
  return VAR_0->u.sym;
 case 128: case 132:
  if (VAR_0->kids[1])
   return FUNC_2(VAR_0->kids[1]);
  return FUNC_2(VAR_0->kids[0]);
 case 130: {
  Symbol VAR_1;
  FUNC_0(VAR_0->kids[1] && VAR_0->kids[1]->op == 128);
  if ((VAR_1 = FUNC_2(VAR_0->kids[1]->kids[0])) != ((void*)0))
   return VAR_1;
  return FUNC_2(VAR_0->kids[1]->kids[1]);
  }
 default: {
  Symbol VAR_2;
  if (VAR_0->kids[0] && (VAR_2 = FUNC_2(VAR_0->kids[0])) != ((void*)0))
   return VAR_2;
  return FUNC_2(VAR_0->kids[1]);
  }
 }
}
