
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* jointree; } ;
struct TYPE_6__ {int * quals; } ;
typedef TYPE_2__ Query ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int Expr ;
typedef int Const ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int ,int,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static List *
FUNC_6(Query *VAR_0, Const **VAR_1,
         bool *VAR_2)
{
 Const *VAR_3 = ((void*)0);

 Oid VAR_4 = FUNC_1(VAR_0);
 Node *VAR_5 = VAR_0->jointree->quals;

 int VAR_6 = 1;

 List *VAR_7 =
  FUNC_3(VAR_4, VAR_6, FUNC_5((Expr *) VAR_5),
     &VAR_3);


 FUNC_0(FUNC_2(VAR_0));

 if (FUNC_4(VAR_7) > 1)
 {
  *VAR_2 = 1;
 }
 else if (FUNC_4(VAR_7) == 1 &&
    VAR_1 != ((void*)0))
 {

  *VAR_1 = VAR_3;
 }

 return VAR_7;
}
