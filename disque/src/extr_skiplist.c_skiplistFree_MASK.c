
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* level; } ;
typedef TYPE_3__ skiplistNode ;
struct TYPE_11__ {struct TYPE_11__* header; TYPE_1__* level; } ;
typedef TYPE_4__ skiplist ;
struct TYPE_9__ {TYPE_3__* forward; } ;
struct TYPE_8__ {TYPE_3__* forward; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;

void FUNC_2(skiplist *VAR_0) {
    skiplistNode *VAR_1 = VAR_0->header->level[0].forward, *VAR_2;

    FUNC_1(VAR_0->header);
    while(VAR_1) {
        VAR_2 = VAR_1->level[0].forward;
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
    FUNC_1(VAR_0);
}
