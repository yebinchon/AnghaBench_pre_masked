
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t ref; unsigned int x; unsigned int dist; unsigned int y; } ;
typedef TYPE_1__ cavs_vector ;
struct TYPE_7__ {unsigned int* direct_den; unsigned int* dist; } ;
typedef TYPE_2__ AVSContext ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(AVSContext *VAR_1, cavs_vector *VAR_2,
                                  cavs_vector *VAR_3)
{
    cavs_vector *VAR_4 = VAR_2 + VAR_0;
    unsigned VAR_5 = VAR_1->direct_den[VAR_3->ref];
    int VAR_6 = FUNC_0(VAR_3->x);

    VAR_2->dist = VAR_1->dist[1];
    VAR_4->dist = VAR_1->dist[0];
    VAR_2->ref = 1;
    VAR_4->ref = 0;

    VAR_2->x = (((VAR_5 + (VAR_5 * VAR_3->x * VAR_2->dist ^ VAR_6) - VAR_6 - 1) >> 14) ^ VAR_6) - VAR_6;
    VAR_4->x = VAR_6 - (((VAR_5 + (VAR_5 * VAR_3->x * VAR_4->dist ^ VAR_6) - VAR_6 - 1) >> 14) ^ VAR_6);
    VAR_6 = FUNC_0(VAR_3->y);
    VAR_2->y = (((VAR_5 + (VAR_5 * VAR_3->y * VAR_2->dist ^ VAR_6) - VAR_6 - 1) >> 14) ^ VAR_6) - VAR_6;
    VAR_4->y = VAR_6 - (((VAR_5 + (VAR_5 * VAR_3->y * VAR_4->dist ^ VAR_6) - VAR_6 - 1) >> 14) ^ VAR_6);
}
