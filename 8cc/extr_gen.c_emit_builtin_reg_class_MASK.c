
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_2__ Type ;
struct TYPE_9__ {TYPE_1__* ty; int args; } ;
struct TYPE_7__ {scalar_t__ kind; TYPE_2__* ptr; } ;
typedef TYPE_3__ Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(Node *VAR_2) {
    Node *VAR_3 = FUNC_3(VAR_2->args, 0);
    FUNC_0(VAR_3->ty->kind == VAR_0);
    Type *VAR_4 = VAR_3->ty->ptr;
    if (VAR_4->kind == VAR_1)
        FUNC_1("mov $2, #eax");
    else if (FUNC_2(VAR_4))
        FUNC_1("mov $1, #eax");
    else
        FUNC_1("mov $0, #eax");
}
