
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* Tree ;
struct TYPE_11__ {int * loc; } ;
struct TYPE_12__ {TYPE_1__ c; } ;
struct TYPE_15__ {TYPE_2__ u; } ;
struct TYPE_13__ {int * sym; int v; } ;
struct TYPE_14__ {TYPE_3__ u; int type; } ;
typedef TYPE_5__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ,int ) ;
 TYPE_4__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ,int ,int *,int *) ;

Tree FUNC_6(Tree VAR_3) {
 Symbol VAR_4 = FUNC_1(VAR_3->type, VAR_3->u.v);
 Tree VAR_5;

 if (VAR_4->u.c.loc == ((void*)0))
  VAR_4->u.c.loc = FUNC_2(VAR_2, VAR_3->type, VAR_1);
 if (FUNC_4(VAR_3->type)) {
  VAR_5 = FUNC_5(VAR_0, FUNC_0(VAR_3->type), ((void*)0), ((void*)0));
  VAR_5->u.sym = VAR_4->u.c.loc;
 } else
  VAR_5 = FUNC_3(VAR_4->u.c.loc);
 return VAR_5;
}
