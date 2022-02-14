
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef int SignatureContext ;
typedef TYPE_1__ CoarseSignature ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(SignatureContext *VAR_0, CoarseSignature *VAR_1, CoarseSignature **VAR_2, CoarseSignature **VAR_3, int VAR_4)
{

    if (!VAR_4) {
        if ((*VAR_3)->next) {
            *VAR_3 = (*VAR_3)->next;
        } else if ((*VAR_2)->next) {
            *VAR_3 = VAR_1;
            *VAR_2 = (*VAR_2)->next;
        } else {
            return 0;
        }
    }

    while (1) {
        if (FUNC_0(VAR_0, *VAR_2, *VAR_3))
            return 1;


        if ((*VAR_3)->next) {
            *VAR_3 = (*VAR_3)->next;
        } else if ((*VAR_2)->next) {
            *VAR_3 = VAR_1;
            *VAR_2 = (*VAR_2)->next;
        } else {
            return 0;
        }
    }
}
