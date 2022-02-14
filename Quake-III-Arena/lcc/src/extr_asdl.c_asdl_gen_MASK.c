
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int list_ty ;
struct TYPE_9__ {struct TYPE_9__* link; TYPE_2__** kids; TYPE_1__** syms; int op; } ;
struct TYPE_8__ {TYPE_1__** syms; int op; } ;
struct TYPE_7__ {scalar_t__ scope; } ;
typedef TYPE_3__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * VAR_5 ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static Node FUNC_6(Node VAR_6) {
 Node VAR_7;
 list_ty VAR_8 = FUNC_1(0);

 for (VAR_7 = VAR_6; VAR_6 != ((void*)0); VAR_6 = VAR_6->link)
  if (FUNC_4(VAR_6->op) == VAR_1+VAR_4 && FUNC_4(VAR_6->kids[0]->op) == VAR_0+VAR_3
  && VAR_6->kids[0]->syms[0]->scope == VAR_2) {
   VAR_6->syms[0] = VAR_6->kids[0]->syms[0];
   VAR_6->kids[0] = ((void*)0);
  }
 for (VAR_6 = VAR_7; VAR_6 != ((void*)0); VAR_6 = VAR_6->link)
  FUNC_0(VAR_8, FUNC_5(VAR_6));
 FUNC_2(FUNC_3(VAR_8));
 VAR_5 = ((void*)0);
 return VAR_7;
}
