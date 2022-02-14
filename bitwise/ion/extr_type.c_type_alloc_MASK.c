
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TypeKind ;
struct TYPE_5__ {scalar_t__ typeid; int kind; } ;
typedef TYPE_1__ Type ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;

Type *FUNC_2(TypeKind VAR_1) {
    Type *VAR_2 = FUNC_1(1, sizeof(Type));
    VAR_2->kind = VAR_1;
    VAR_2->typeid = VAR_0++;
    FUNC_0(VAR_2);
    return VAR_2;
}
