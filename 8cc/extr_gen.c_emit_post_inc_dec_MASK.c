
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int operand; TYPE_2__* ty; } ;
struct TYPE_6__ {TYPE_1__* ptr; } ;
struct TYPE_5__ {int size; } ;
typedef TYPE_3__ Node ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(Node *VAR_1, char *VAR_2) {
    VAR_0;
    FUNC_1(VAR_1->operand);
    FUNC_4("rax");
    FUNC_0("%s $%d, #rax", VAR_2, VAR_1->ty->ptr ? VAR_1->ty->ptr->size : 1);
    FUNC_2(VAR_1->operand);
    FUNC_3("rax");
}
