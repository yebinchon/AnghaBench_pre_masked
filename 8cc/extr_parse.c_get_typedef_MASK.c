
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Type ;
struct TYPE_3__ {scalar_t__ kind; int * ty; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,char*) ;

__attribute__((used)) static Type *FUNC_2(char *VAR_1) {
    Node *VAR_2 = FUNC_1(FUNC_0(), VAR_1);
    return (VAR_2 && VAR_2->kind == VAR_0) ? VAR_2->ty : ((void*)0);
}
