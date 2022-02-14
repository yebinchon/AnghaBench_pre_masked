
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x; int y; int dist; } ;
typedef TYPE_1__ cavs_vector ;
typedef int AVSContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int *,int*,int*,TYPE_1__*,int ) ;

__attribute__((used)) static inline void FUNC_3(AVSContext *VAR_0,
                                  cavs_vector *VAR_1,
                                  cavs_vector *VAR_2,
                                  cavs_vector *VAR_3,
                                  cavs_vector *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;


    FUNC_2(VAR_0, &VAR_5, &VAR_6, VAR_2, VAR_1->dist);
    FUNC_2(VAR_0, &VAR_7, &VAR_8, VAR_3, VAR_1->dist);
    FUNC_2(VAR_0, &VAR_9, &VAR_10, VAR_4, VAR_1->dist);

    VAR_11 = FUNC_0(VAR_5 - VAR_7) + FUNC_0(VAR_6 - VAR_8);
    VAR_12 = FUNC_0(VAR_7 - VAR_9) + FUNC_0(VAR_8 - VAR_10);
    VAR_13 = FUNC_0(VAR_9 - VAR_5) + FUNC_0(VAR_10 - VAR_6);
    VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_13);
    if (VAR_14 == VAR_11) {
        VAR_1->x = VAR_9;
        VAR_1->y = VAR_10;
    } else if (VAR_14 == VAR_12) {
        VAR_1->x = VAR_5;
        VAR_1->y = VAR_6;
    } else {
        VAR_1->x = VAR_7;
        VAR_1->y = VAR_8;
    }
}
