
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_3__* Type ;
struct TYPE_12__ {int oldstyle; TYPE_3__** proto; } ;
struct TYPE_13__ {TYPE_1__ f; } ;
struct TYPE_14__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,TYPE_3__*,int ,int ,int *) ;

Type FUNC_4(Type VAR_1, Type *VAR_2, int VAR_3) {
 if (VAR_1 && (FUNC_1(VAR_1) || FUNC_2(VAR_1)))
  FUNC_0("illegal return type `%t'\n", VAR_1);
 VAR_1 = FUNC_3(VAR_0, VAR_1, 0, 0, ((void*)0));
 VAR_1->u.f.proto = VAR_2;
 VAR_1->u.f.oldstyle = VAR_3;
 return VAR_1;
}
