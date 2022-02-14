
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ word1; scalar_t__ word2; scalar_t__ val; } ;
typedef int FILE ;
typedef TYPE_1__ CRECID ;
typedef int CREC ;


 int FUNC_0 (TYPE_1__*,int,int,int *) ;

int FUNC_1(CRECID VAR_0, CRECID *VAR_1, FILE *VAR_2) {
    if (VAR_0.word1 == VAR_1->word1 && VAR_0.word2 == VAR_1->word2) {
        VAR_1->val += VAR_0.val;
        return 0;
    }
    FUNC_0(VAR_1, sizeof(CREC), 1, VAR_2);
    *VAR_1 = VAR_0;
    return 1;
}
