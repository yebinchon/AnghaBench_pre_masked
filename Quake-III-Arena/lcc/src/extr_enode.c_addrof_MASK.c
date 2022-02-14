
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* Tree ;
struct TYPE_11__ {int sym; } ;
struct TYPE_12__ {int type; struct TYPE_12__** kids; TYPE_1__ u; int op; } ;
typedef int Symbol ;






 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int const,int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;

Tree FUNC_7(Tree VAR_0) {
 Tree VAR_1 = VAR_0;

 for (;;)
  switch (FUNC_2(VAR_1->op)) {
  case 128:
   FUNC_0(VAR_1->kids[0] || VAR_1->kids[1]);
   VAR_1 = VAR_1->kids[1] ? VAR_1->kids[1] : VAR_1->kids[0];
   continue;
  case 131:
   VAR_1 = VAR_1->kids[1];
   continue;
  case 130: {
   Symbol VAR_2 = VAR_1->u.sym;
   VAR_1->u.sym = 0;
   VAR_1 = FUNC_3(VAR_2);

   }
  case 129:
   if (VAR_0 == VAR_1)
    return VAR_1->kids[0];
   VAR_1 = VAR_1->kids[0];
   return FUNC_5(128, VAR_1->type, FUNC_4(VAR_0), VAR_1);
  default:
   FUNC_1("addressable object required\n");
   return FUNC_6(VAR_0);
  }
}
