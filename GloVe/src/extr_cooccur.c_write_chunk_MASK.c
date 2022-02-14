
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ word1; scalar_t__ word2; scalar_t__ val; } ;
typedef int FILE ;
typedef TYPE_1__ CREC ;


 int FUNC_0 (TYPE_1__*,int,int,int *) ;

int FUNC_1(CREC *VAR_0, long long VAR_1, FILE *VAR_2) {
    if (VAR_1 == 0) return 0;

    long long VAR_3 = 0;
    CREC VAR_4 = VAR_0[VAR_3];

    for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
        if (VAR_0[VAR_3].word1 == VAR_4.word1 && VAR_0[VAR_3].word2 == VAR_4.word2) {
            VAR_4.val += VAR_0[VAR_3].val;
            continue;
        }
        FUNC_0(&VAR_4, sizeof(CREC), 1, VAR_2);
        VAR_4 = VAR_0[VAR_3];
    }
    FUNC_0(&VAR_4, sizeof(CREC), 1, VAR_2);
    return 0;
}
