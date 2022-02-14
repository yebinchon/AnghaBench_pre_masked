
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int inner_scope; } ;
typedef TYPE_1__ scope_t ;
struct TYPE_8__ {int inner_scope; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int ) ;

scope_t *
FUNC_7()
{
 scope_t *VAR_4;

 VAR_4 = (scope_t *)FUNC_4(sizeof(scope_t));
 if (VAR_4 == ((void*)0))
  FUNC_6("Unable to malloc scope object", VAR_0);
 FUNC_5(VAR_4, 0, sizeof(*VAR_4));
 FUNC_2(&VAR_4->inner_scope);

 if (FUNC_0(&VAR_2) != ((void*)0)) {
  FUNC_3(&FUNC_0(&VAR_2)->inner_scope,
      VAR_4, VAR_1);
 }

 FUNC_1(&VAR_2, VAR_4, VAR_3);
 return VAR_4;
}
