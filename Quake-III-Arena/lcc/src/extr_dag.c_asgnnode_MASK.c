
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int align; int size; } ;
struct TYPE_13__ {void** syms; } ;
struct TYPE_12__ {TYPE_3__* type; } ;
typedef TYPE_1__* Symbol ;
typedef TYPE_2__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (scalar_t__,TYPE_2__*,TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static Node FUNC_3(Symbol VAR_3, Node VAR_4) {
 VAR_4 = FUNC_1(VAR_1 + FUNC_2(VAR_3->type),
  FUNC_1(VAR_0 + FUNC_2(VAR_2), ((void*)0), ((void*)0), VAR_3), VAR_4, ((void*)0));
 VAR_4->syms[0] = FUNC_0(VAR_3->type->size);
 VAR_4->syms[1] = FUNC_0(VAR_3->type->align);
 return VAR_4;
}
