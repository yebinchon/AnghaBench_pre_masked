
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* declvar; int declinit; } ;
struct TYPE_6__ {TYPE_1__* ty; int loff; } ;
struct TYPE_5__ {int size; } ;
typedef TYPE_3__ Node ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(Node *VAR_1) {
    VAR_0;
    if (!VAR_1->declinit)
        return;
    FUNC_0(VAR_1->declinit, VAR_1->declvar->loff, VAR_1->declvar->ty->size);
}
