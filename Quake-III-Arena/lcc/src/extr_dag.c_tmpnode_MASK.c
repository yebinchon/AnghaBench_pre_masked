
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ count; TYPE_1__** syms; } ;
struct TYPE_9__ {int type; } ;
typedef TYPE_1__* Symbol ;
typedef TYPE_2__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (scalar_t__,TYPE_2__*,int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static Node FUNC_3(Node VAR_3) {
 Symbol VAR_4 = VAR_3->syms[2];

 FUNC_0(VAR_4);
 if (--VAR_3->count == 0)
  VAR_3->syms[2] = ((void*)0);
 VAR_3 = FUNC_1(VAR_1 + FUNC_2(VAR_4->type),
  FUNC_1(VAR_0 + FUNC_2(VAR_2), ((void*)0), ((void*)0), VAR_4), ((void*)0), ((void*)0));
 VAR_3->count = 1;
 return VAR_3;
}
