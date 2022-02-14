
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
typedef TYPE_2__* Term ;
struct TYPE_10__ {scalar_t__ kind; int arity; } ;
struct TYPE_9__ {int nterms; struct TYPE_9__* right; struct TYPE_9__* left; TYPE_2__* op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*) ;

Tree FUNC_5(char *VAR_2, Tree VAR_3, Tree VAR_4) {
 Tree VAR_5 = FUNC_0(sizeof *VAR_5);
 Term VAR_6 = FUNC_1(VAR_2);
 int VAR_7 = 0;

 if (VAR_3 && VAR_4)
  VAR_7 = 2;
 else if (VAR_3)
  VAR_7 = 1;
 if (VAR_6 == ((void*)0) && VAR_7 > 0) {
  FUNC_4("undefined terminal `%s'\n", VAR_2);
  VAR_6 = FUNC_3(VAR_2, -1);
 } else if (VAR_6 == ((void*)0) && VAR_7 == 0)
  VAR_6 = (Term)FUNC_2(VAR_2);
 else if (VAR_6 && VAR_6->kind == VAR_0 && VAR_7 > 0) {
  FUNC_4("`%s' is a nonterminal\n", VAR_2);
  VAR_6 = FUNC_3(VAR_2, -1);
 }
 if (VAR_6->kind == VAR_1 && VAR_6->arity == -1)
  VAR_6->arity = VAR_7;
 if (VAR_6->kind == VAR_1 && VAR_7 != VAR_6->arity)
  FUNC_4("inconsistent arity for terminal `%s'\n", VAR_2);
 VAR_5->op = VAR_6;
 VAR_5->nterms = VAR_6->kind == VAR_1;
 if ((VAR_5->left = VAR_3) != ((void*)0))
  VAR_5->nterms += VAR_3->nterms;
 if ((VAR_5->right = VAR_4) != ((void*)0))
  VAR_5->nterms += VAR_4->nterms;
 return VAR_5;
}
