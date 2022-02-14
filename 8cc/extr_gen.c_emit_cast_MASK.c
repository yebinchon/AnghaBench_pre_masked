
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ty; } ;
struct TYPE_4__ {TYPE_2__* operand; int ty; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(Node *VAR_1) {
    VAR_0;
    FUNC_0(VAR_1->operand);
    FUNC_1(VAR_1->ty, VAR_1->operand->ty);
    return;
}
