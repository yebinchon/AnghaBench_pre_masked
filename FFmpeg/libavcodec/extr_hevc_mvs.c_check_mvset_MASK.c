
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {int* isLongTerm; int* list; } ;
typedef TYPE_1__ RefPicList ;
typedef TYPE_2__ Mv ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_1(Mv *VAR_0, Mv *VAR_1,
                       int VAR_2, int VAR_3,
                       RefPicList *VAR_4, int VAR_5, int VAR_6,
                       RefPicList *VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = VAR_4[VAR_5].isLongTerm[VAR_6];
    int VAR_11 = VAR_7[VAR_8].isLongTerm[VAR_9];
    int VAR_12, VAR_13;

    if (VAR_10 != VAR_11) {
        VAR_0->x = 0;
        VAR_0->y = 0;
        return 0;
    }

    VAR_12 = VAR_2 - VAR_7[VAR_8].list[VAR_9];
    VAR_13 = VAR_3 - VAR_4[VAR_5].list[VAR_6];

    if (VAR_10 || VAR_12 == VAR_13 || !VAR_12) {
        VAR_0->x = VAR_1->x;
        VAR_0->y = VAR_1->y;
    } else {
        FUNC_0(VAR_0, VAR_1, VAR_12, VAR_13);
    }
    return 1;
}
