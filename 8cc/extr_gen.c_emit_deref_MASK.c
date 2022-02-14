
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ty; } ;
struct TYPE_6__ {TYPE_3__* operand; int ty; } ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(Node *VAR_1) {
    VAR_0;
    FUNC_0(VAR_1->operand);
    FUNC_1(VAR_1->operand->ty->ptr, "rax", 0);
    FUNC_2(VAR_1->ty, VAR_1->operand->ty->ptr);
}
