
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ val; struct TYPE_3__* parent; } ;
typedef TYPE_1__ Jpeg2000TgtNode ;



__attribute__((used)) static void FUNC_0(Jpeg2000TgtNode *VAR_0)
{
    int VAR_1 = 0;
    while (VAR_0->parent){
        if (VAR_0->parent->val <= VAR_0->val)
            break;
        VAR_0->parent->val = VAR_0->val;
        VAR_0 = VAR_0->parent;
        VAR_1++;
    }
}
